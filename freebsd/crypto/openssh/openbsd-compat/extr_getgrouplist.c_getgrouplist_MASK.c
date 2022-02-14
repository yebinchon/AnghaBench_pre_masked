
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {scalar_t__ gr_gid; scalar_t__* gr_mem; } ;
typedef scalar_t__ gid_t ;


 int endgrent () ;
 struct group* getgrent () ;
 int setgrent () ;
 int strcmp (scalar_t__,char const*) ;

int
getgrouplist(const char *uname, gid_t agroup, gid_t *groups, int *grpcnt)
{
 struct group *grp;
 int i, ngroups;
 int ret, maxgroups;
 int bail;

 ret = 0;
 ngroups = 0;
 maxgroups = *grpcnt;




 if (ngroups >= maxgroups) {
  *grpcnt = ngroups;
  return (-1);
 }
 groups[ngroups++] = agroup;




 setgrent();
 while ((grp = getgrent())) {
  if (grp->gr_gid == agroup)
   continue;
  for (bail = 0, i = 0; bail == 0 && i < ngroups; i++)
   if (groups[i] == grp->gr_gid)
    bail = 1;
  if (bail)
   continue;
  for (i = 0; grp->gr_mem[i]; i++) {
   if (!strcmp(grp->gr_mem[i], uname)) {
    if (ngroups >= maxgroups) {
     ret = -1;
     goto out;
    }
    groups[ngroups++] = grp->gr_gid;
    break;
   }
  }
 }
out:
 endgrent();
 *grpcnt = ngroups;
 return (ret);
}

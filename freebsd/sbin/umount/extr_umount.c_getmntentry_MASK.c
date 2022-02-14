
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_fsid; int f_mntonname; int f_mntfromname; } ;
typedef int fsid_t ;
typedef int dowhat ;




 scalar_t__ FUNC_0 (int *,int *,int) ;
 int* FUNC_1 (size_t,int) ;
 int FUNC_2 (int,char*) ;
 size_t FUNC_3 (struct statfs**) ;
 scalar_t__ FUNC_4 (int ,char const*) ;

struct statfs *
FUNC_5(const char *VAR_0, const char *VAR_1, fsid_t *VAR_2, dowhat VAR_3)
{
 static struct statfs *VAR_4;
 static size_t VAR_5 = 0;
 static int *VAR_6 = ((void*)0);
 struct statfs *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5 <= 0) {
  if ((VAR_5 = FUNC_3(&VAR_4)) <= 0)
   return (((void*)0));
 }
 if (VAR_6 == ((void*)0)) {
  if ((VAR_6 = FUNC_1(VAR_5 + 1, sizeof(int))) == ((void*)0))
   FUNC_2(1, "calloc");
 }





 VAR_10 = 0;
 VAR_8 = ((void*)0);
 for (VAR_9 = VAR_5 - 1; VAR_9 >= 0; VAR_9--) {
  if (VAR_6[VAR_9])
   continue;
  VAR_7 = &VAR_4[VAR_9];
  if (VAR_0 != ((void*)0) && FUNC_4(VAR_7->f_mntfromname,
      VAR_0) != 0)
   continue;
  if (VAR_1 != ((void*)0) && FUNC_4(VAR_7->f_mntonname, VAR_1) != 0)
   continue;
  if (VAR_2 != ((void*)0) && FUNC_0(&VAR_7->f_fsid, VAR_2,
      sizeof(*VAR_2)) != 0)
   continue;

  switch (VAR_3) {
  case 129:
   VAR_8 = VAR_7;
   VAR_10++;
   continue;
  case 128:
   VAR_6[VAR_9] = 1;
   break;
  default:
   break;
  }
  return (VAR_7);
 }

 if (VAR_3 == 129 && VAR_10 == 1)
  return (VAR_8);
 return (((void*)0));
}

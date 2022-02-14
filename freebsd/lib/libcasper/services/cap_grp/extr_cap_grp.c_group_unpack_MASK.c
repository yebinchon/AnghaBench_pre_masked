
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {int gr_mem; scalar_t__ gr_gid; int gr_passwd; int gr_name; } ;
typedef int nvlist_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 int FUNC_0 (struct group*,int) ;
 int FUNC_1 (int const*,int *,char**,size_t*) ;
 int FUNC_2 (int const*,char*,int *,char**,size_t*) ;
 int FUNC_3 (int const*,char*) ;
 scalar_t__ FUNC_4 (int const*,char*) ;

__attribute__((used)) static int
FUNC_5(const nvlist_t *VAR_1, struct group *VAR_2, char *VAR_3,
    size_t VAR_4)
{
 int VAR_5;

 if (!FUNC_3(VAR_1, "gr_name"))
  return (VAR_0);

 FUNC_0(VAR_2, sizeof(*VAR_2));

 VAR_5 = FUNC_2(VAR_1, "gr_name", &VAR_2->gr_name, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_2(VAR_1, "gr_passwd", &VAR_2->gr_passwd, &VAR_3,
     &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);
 VAR_2->gr_gid = (gid_t)FUNC_4(VAR_1, "gr_gid");
 VAR_5 = FUNC_1(VAR_1, &VAR_2->gr_mem, &VAR_3, &VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {scalar_t__ gr_gid; int gr_mem; int * gr_passwd; int * gr_name; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool
FUNC_2(const struct group *VAR_0, const struct group *VAR_1)
{

 if (VAR_0 == ((void*)0) && VAR_1 == ((void*)0))
  return (1);
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);

 if (FUNC_1(VAR_0->gr_name, VAR_1->gr_name) != 0)
  return (0);

 if (VAR_0->gr_passwd != ((void*)0) || VAR_1->gr_passwd != ((void*)0)) {
  if (VAR_0->gr_passwd == ((void*)0) || VAR_1->gr_passwd == ((void*)0))
   return (0);
  if (FUNC_1(VAR_0->gr_passwd, VAR_1->gr_passwd) != 0)
   return (0);
 }

 if (VAR_0->gr_gid != VAR_1->gr_gid)
  return (0);

 if (!FUNC_0(VAR_0->gr_mem, VAR_1->gr_mem))
  return (0);

 return (1);
}

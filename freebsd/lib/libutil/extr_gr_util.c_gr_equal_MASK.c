
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group {scalar_t__ gr_gid; int ** gr_mem; int * gr_passwd; int * gr_name; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

int
FUNC_1(const struct group *VAR_0, const struct group *VAR_1)
{


 if (VAR_0->gr_name == ((void*)0) || VAR_1->gr_name == ((void*)0)) {
  if (VAR_0->gr_name != VAR_1->gr_name)
   return (0);
 } else if (FUNC_0(VAR_0->gr_name, VAR_1->gr_name) != 0)
  return (0);
 if (VAR_0->gr_passwd == ((void*)0) || VAR_1->gr_passwd == ((void*)0)) {
  if (VAR_0->gr_passwd != VAR_1->gr_passwd)
   return (0);
 } else if (FUNC_0(VAR_0->gr_passwd, VAR_1->gr_passwd) != 0)
  return (0);
 if (VAR_0->gr_gid != VAR_1->gr_gid)
  return (0);







 if (VAR_0->gr_mem != ((void*)0) && VAR_1->gr_mem != ((void*)0)) {
  int VAR_2;

  for (VAR_2 = 0;
      VAR_0->gr_mem[VAR_2] != ((void*)0) && VAR_1->gr_mem[VAR_2] != ((void*)0); VAR_2++) {
   if (FUNC_0(VAR_0->gr_mem[VAR_2], VAR_1->gr_mem[VAR_2]) != 0)
    return (0);
  }
  if (VAR_0->gr_mem[VAR_2] != ((void*)0) || VAR_1->gr_mem[VAR_2] != ((void*)0))
   return (0);
 } else if (VAR_0->gr_mem != ((void*)0) && VAR_0->gr_mem[0] != ((void*)0)) {
  return (0);
 } else if (VAR_1->gr_mem != ((void*)0) && VAR_1->gr_mem[0] != ((void*)0)) {
  return (0);
 }

 return (1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1)
{




 unsigned int VAR_2;
 const char *VAR_3[] = {
 "cd9660", "mfs", "msdosfs", "nfs",
 "nullfs", "smbfs", "udf", "unionfs",
 ((void*)0)
 };

 if (VAR_0 != ((void*)0))
  return (1);

 for (VAR_2 = 0; VAR_3[VAR_2] != ((void*)0); ++VAR_2) {
  if (FUNC_0(VAR_1, VAR_3[VAR_2]) == 0)
   return (1);
 }

 return (0);
}

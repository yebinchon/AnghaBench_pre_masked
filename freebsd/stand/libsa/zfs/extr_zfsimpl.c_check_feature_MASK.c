
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_2, uint64_t VAR_3)
{
 int VAR_4;

 if (VAR_3 == 0)
  return (0);
 if (VAR_2[0] == '\0')
  return (0);

 for (VAR_4 = 0; VAR_1[VAR_4] != ((void*)0); VAR_4++) {
  if (FUNC_1(VAR_2, VAR_1[VAR_4]) == 0)
   return (0);
 }
 FUNC_0("ZFS: unsupported feature: %s\n", VAR_2);
 return (VAR_0);
}

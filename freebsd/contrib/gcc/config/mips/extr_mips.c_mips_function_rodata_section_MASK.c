
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int section ;


 char* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_3 (scalar_t__) ;
 int * VAR_4 ;
 int * FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_5 (char*,int,scalar_t__) ;
 int FUNC_6 (char*,char*,int) ;
 scalar_t__ FUNC_7 (char const*,char*,int) ;

__attribute__((used)) static section *
FUNC_8 (tree VAR_7)
{
  if (!VAR_2 || VAR_3)
    return FUNC_4 (VAR_7);

  if (VAR_7 && FUNC_2 (VAR_7))
    {
      const char *VAR_8 = FUNC_3 (FUNC_2 (VAR_7));
      if (FUNC_1 (VAR_7) && FUNC_7 (VAR_8, ".gnu.linkonce.t.", 16) == 0)
 {
   char *VAR_9 = FUNC_0 (VAR_8);
   VAR_9[14] = 'd';
   return FUNC_5 (VAR_9, VAR_0 | VAR_1, VAR_7);
 }
      else if (VAR_6 && VAR_5
        && FUNC_7 (VAR_8, ".text.", 6) == 0)
 {
   char *VAR_10 = FUNC_0 (VAR_8);
   FUNC_6 (VAR_10 + 1, "data", 4);
   return FUNC_5 (VAR_10, VAR_1, VAR_7);
 }
    }
  return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int section ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (size_t) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_4 (char*,int ,scalar_t__) ;
 int FUNC_5 (char*,char const*,size_t) ;
 int * VAR_5 ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (char const*,char*,int) ;

section *
FUNC_10 (tree VAR_6)
{
  if (VAR_6 != VAR_1 && FUNC_1 (VAR_6))
    {
      const char *VAR_7 = FUNC_2 (FUNC_1 (VAR_6));

      if (FUNC_0 (VAR_6) && VAR_0)
        {
   size_t VAR_8 = FUNC_8 (VAR_7) + 3;
   char* VAR_9 = FUNC_3 (VAR_8);

   FUNC_7 (VAR_9, ".rodata");
   FUNC_6 (VAR_9, VAR_7 + 5);
   return FUNC_4 (VAR_9, VAR_2, VAR_6);
 }

      else if (FUNC_0 (VAR_6)
        && FUNC_9 (VAR_7, ".gnu.linkonce.t.", 16) == 0)
 {
   size_t VAR_10 = FUNC_8 (VAR_7) + 1;
   char *VAR_11 = FUNC_3 (VAR_10);

   FUNC_5 (VAR_11, VAR_7, VAR_10);
   VAR_11[14] = 'r';
   return FUNC_4 (VAR_11, VAR_2, VAR_6);
 }

      else if (VAR_4 && VAR_3
        && FUNC_9 (VAR_7, ".text.", 6) == 0)
 {
   size_t VAR_12 = FUNC_8 (VAR_7) + 1;
   char *VAR_13 = FUNC_3 (VAR_12 + 2);

   FUNC_5 (VAR_13, ".rodata", 7);
   FUNC_5 (VAR_13 + 7, VAR_7 + 5, VAR_12 - 5);
   return FUNC_4 (VAR_13, 0, VAR_6);
 }
    }

  return VAR_5;
}

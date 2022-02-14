
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symbolS ;
struct TYPE_2__ {scalar_t__ ecoff_extern_size; } ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char const*,char*,int) ;
 TYPE_1__* FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10 (symbolS *VAR_1, int VAR_2)
{
  if (VAR_1 == 0)
    return 0;

  if (VAR_0 > 0)
    {
      const char *VAR_3;
      int VAR_4;






      VAR_3 = FUNC_0 (VAR_1);
      if (VAR_3 != (const char *) ((void*)0)
   && (FUNC_7 (VAR_3, "eprol") == 0
       || FUNC_7 (VAR_3, "etext") == 0
       || FUNC_7 (VAR_3, "_gp") == 0
       || FUNC_7 (VAR_3, "edata") == 0
       || FUNC_7 (VAR_3, "_fbss") == 0
       || FUNC_7 (VAR_3, "_fdata") == 0
       || FUNC_7 (VAR_3, "_ftext") == 0
       || FUNC_7 (VAR_3, "end") == 0
       || FUNC_7 (VAR_3, "_gp_disp") == 0))
 VAR_4 = 1;
      else if ((! FUNC_4 (VAR_1) || FUNC_3 (VAR_1))
        && (0

     || (FUNC_9 (VAR_1)->ecoff_extern_size != 0
         && (FUNC_9 (VAR_1)->ecoff_extern_size
      <= VAR_0))




     || (VAR_2

         && FUNC_9 (VAR_1)->ecoff_extern_size == 0

         && FUNC_2 (VAR_1) == 0)
     || (FUNC_2 (VAR_1) != 0
         && FUNC_2 (VAR_1) <= VAR_0)))
 VAR_4 = 0;
      else
 {
   const char *VAR_5;

   VAR_5 = FUNC_6 (FUNC_1 (VAR_1));
   FUNC_5 (FUNC_7 (VAR_5, ".lit8") != 0
    && FUNC_7 (VAR_5, ".lit4") != 0);
   VAR_4 = (FUNC_7 (VAR_5, ".sdata") != 0
      && FUNC_7 (VAR_5, ".sbss") != 0
      && FUNC_8 (VAR_5, ".sdata.", 7) != 0
      && FUNC_8 (VAR_5, ".sbss.", 6) != 0
      && FUNC_8 (VAR_5, ".gnu.linkonce.sb.", 17) != 0
      && FUNC_8 (VAR_5, ".gnu.linkonce.s.", 16) != 0);
 }
      return VAR_4;
    }
  else

    return 1;
}

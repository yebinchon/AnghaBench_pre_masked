
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int HOST_WIDE_INT ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 char** VAR_4 ;
 int FUNC_6 (scalar_t__,scalar_t__*,int*) ;

__attribute__((used)) static void
FUNC_7 (FILE *VAR_5, rtx VAR_6)
{
  HOST_WIDE_INT VAR_7;
  rtx VAR_8;


  if (!FUNC_6 (VAR_6, &VAR_8, &VAR_7))
    FUNC_5 ();


  if (VAR_8)
    {
      FUNC_4 (FUNC_0 (VAR_8) == VAR_3);
      FUNC_4 (FUNC_1 (VAR_8) < VAR_1);
      FUNC_4 (FUNC_2 (FUNC_1 (VAR_8)) == VAR_0);
    }


  FUNC_3 (VAR_5, VAR_2, VAR_7 & ((1 << 12) - 1));
  if (VAR_8)
    FUNC_3 (VAR_5, "(%s)", VAR_4[FUNC_1 (VAR_8)]);
}

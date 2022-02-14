
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char mode; int fname; scalar_t__ fp; } ;


 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(void)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3[VAR_4].fp) {
   if (FUNC_2(VAR_3[VAR_4].fp))
    FUNC_0( "i/o error occurred on %s", VAR_3[VAR_4].fname );
   if (VAR_3[VAR_4].mode == '|' || VAR_3[VAR_4].mode == VAR_2)
    VAR_5 = FUNC_3(VAR_3[VAR_4].fp);
   else
    VAR_5 = FUNC_1(VAR_3[VAR_4].fp);
   if (VAR_5 == VAR_0)
    FUNC_0( "i/o error occurred while closing %s", VAR_3[VAR_4].fname );
  }
 }
}

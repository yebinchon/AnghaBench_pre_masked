
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {long t_minrows; long t_rows; int rows; } ;
typedef TYPE_1__ SCR ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_1(SCR *VAR_3, long int VAR_4)
{
 VAR_3->t_minrows = VAR_3->t_rows = VAR_4;
 if (VAR_3->t_rows > VAR_3->rows - 1)
  VAR_3->t_minrows = VAR_3->t_rows = VAR_3->rows - 1;
 VAR_2 = VAR_0 + (VAR_3->t_rows - 1);
 FUNC_0(VAR_3, VAR_1);
 return (0);
}

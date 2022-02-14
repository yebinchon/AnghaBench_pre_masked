
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_3__ {int * buf; } ;
typedef int FIELD_CELL ;
typedef TYPE_1__ FIELD ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static void
FUNC_7(const FIELD *VAR_0, WINDOW *VAR_1)
{
  int VAR_2, VAR_3;
  int VAR_4, VAR_5;
  int VAR_6;
  int VAR_7;
  FIELD_CELL *VAR_8;

  FUNC_1(VAR_1 && VAR_0);

  FUNC_4(VAR_1, VAR_4, VAR_5);
  VAR_2 = FUNC_2(VAR_1);
  VAR_3 = FUNC_3(VAR_1);

  for (VAR_7 = 0, VAR_8 = VAR_0->buf;
       VAR_7 < VAR_3;
       VAR_7++, VAR_8 += VAR_2)
    {
      if ((VAR_6 = (int)(FUNC_0(VAR_8, VAR_2) - VAR_8)) > 0)
 {
   FUNC_6(VAR_1, VAR_7, 0);
   FUNC_5(VAR_1, VAR_8, VAR_6);
 }
    }
  FUNC_6(VAR_1, VAR_4, VAR_5);
}

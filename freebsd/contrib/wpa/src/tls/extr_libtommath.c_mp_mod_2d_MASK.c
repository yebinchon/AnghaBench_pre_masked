
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (mp_int * VAR_2, int VAR_3, mp_int * VAR_4)
{
  int VAR_5, VAR_6;


  if (VAR_3 <= 0) {
    FUNC_2 (VAR_4);
    return VAR_1;
  }


  if (VAR_3 >= (int) (VAR_2->used * VAR_0)) {
    VAR_6 = FUNC_1 (VAR_2, VAR_4);
    return VAR_6;
  }


  if ((VAR_6 = FUNC_1 (VAR_2, VAR_4)) != VAR_1) {
    return VAR_6;
  }


  for (VAR_5 = (VAR_3 / VAR_0) + ((VAR_3 % VAR_0) == 0 ? 0 : 1); VAR_5 < VAR_4->used; VAR_5++) {
    VAR_4->dp[VAR_5] = 0;
  }

  VAR_4->dp[VAR_3 / VAR_0] &=
    (mp_digit) ((((mp_digit) 1) << (((mp_digit) VAR_3) % VAR_0)) - ((mp_digit) 1));
  FUNC_0 (VAR_4);
  return VAR_1;
}

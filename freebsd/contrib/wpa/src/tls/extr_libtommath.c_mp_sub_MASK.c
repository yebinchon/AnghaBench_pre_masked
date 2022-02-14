
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int sign; } ;
typedef TYPE_1__ mp_int ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3 (mp_int * VAR_3, mp_int * VAR_4, mp_int * VAR_5)
{
  int VAR_6, VAR_7, VAR_8;

  VAR_6 = VAR_3->sign;
  VAR_7 = VAR_4->sign;

  if (VAR_6 != VAR_7) {




    VAR_5->sign = VAR_6;
    VAR_8 = FUNC_1 (VAR_3, VAR_4, VAR_5);
  } else {




    if (FUNC_0 (VAR_3, VAR_4) != VAR_0) {

      VAR_5->sign = VAR_6;

      VAR_8 = FUNC_2 (VAR_3, VAR_4, VAR_5);
    } else {


      VAR_5->sign = (VAR_6 == VAR_2) ? VAR_1 : VAR_2;

      VAR_8 = FUNC_2 (VAR_4, VAR_3, VAR_5);
    }
  }
  return VAR_8;
}

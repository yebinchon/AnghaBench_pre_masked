
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int alloc; int used; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_4 (mp_int * VAR_3, int VAR_4, mp_int * VAR_5)
{
  mp_digit VAR_6;
  int VAR_7;


  if (VAR_3 != VAR_5) {
     if ((VAR_7 = FUNC_1 (VAR_3, VAR_5)) != VAR_2) {
       return VAR_7;
     }
  }

  if (VAR_5->alloc < (int)(VAR_5->used + VAR_4/VAR_0 + 1)) {
     if ((VAR_7 = FUNC_2 (VAR_5, VAR_5->used + VAR_4 / VAR_0 + 1)) != VAR_2) {
       return VAR_7;
     }
  }


  if (VAR_4 >= (int)VAR_0) {
    if ((VAR_7 = FUNC_3 (VAR_5, VAR_4 / VAR_0)) != VAR_2) {
      return VAR_7;
    }
  }


  VAR_6 = (mp_digit) (VAR_4 % VAR_0);
  if (VAR_6 != 0) {
    register mp_digit *VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    register int VAR_13;


    VAR_10 = (((mp_digit)1) << VAR_6) - 1;


    VAR_9 = VAR_0 - VAR_6;


    VAR_8 = VAR_5->dp;


    VAR_11 = 0;
    for (VAR_13 = 0; VAR_13 < VAR_5->used; VAR_13++) {

      VAR_12 = (*VAR_8 >> VAR_9) & VAR_10;


      *VAR_8 = ((*VAR_8 << VAR_6) | VAR_11) & VAR_1;
      ++VAR_8;


      VAR_11 = VAR_12;
    }


    if (VAR_11 != 0) {
       VAR_5->dp[(VAR_5->used)++] = VAR_11;
    }
  }
  FUNC_0 (VAR_5);
  return VAR_2;
}

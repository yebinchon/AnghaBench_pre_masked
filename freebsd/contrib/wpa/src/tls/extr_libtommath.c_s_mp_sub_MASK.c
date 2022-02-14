
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int used; int alloc; int* dp; } ;
typedef TYPE_1__ mp_int ;
typedef int mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2 (mp_int * VAR_3, mp_int * VAR_4, mp_int * VAR_5)
{
  int VAR_6, VAR_7, VAR_8, VAR_9;


  VAR_8 = VAR_4->used;
  VAR_9 = VAR_3->used;


  if (VAR_5->alloc < VAR_9) {
    if ((VAR_7 = FUNC_1 (VAR_5, VAR_9)) != VAR_2) {
      return VAR_7;
    }
  }
  VAR_6 = VAR_5->used;
  VAR_5->used = VAR_9;

  {
    register mp_digit VAR_10, *VAR_11, *VAR_12, *VAR_13;
    register int VAR_14;


    VAR_11 = VAR_3->dp;
    VAR_12 = VAR_4->dp;
    VAR_13 = VAR_5->dp;


    VAR_10 = 0;
    for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14++) {

      *VAR_13 = *VAR_11++ - *VAR_12++ - VAR_10;






      VAR_10 = *VAR_13 >> ((mp_digit)(VAR_0 * sizeof (mp_digit) - 1));


      *VAR_13++ &= VAR_1;
    }


    for (; VAR_14 < VAR_9; VAR_14++) {

      *VAR_13 = *VAR_11++ - VAR_10;


      VAR_10 = *VAR_13 >> ((mp_digit)(VAR_0 * sizeof (mp_digit) - 1));


      *VAR_13++ &= VAR_1;
    }


    for (VAR_14 = VAR_5->used; VAR_14 < VAR_6; VAR_14++) {
      *VAR_13++ = 0;
    }
  }

  FUNC_0 (VAR_5);
  return VAR_2;
}

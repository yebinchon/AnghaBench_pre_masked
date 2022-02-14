
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int mp_word ;
struct TYPE_13__ {int used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6 (mp_int * VAR_5, mp_int * VAR_6, mp_int * VAR_7, int VAR_8)
{
  mp_int VAR_9;
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
  mp_digit VAR_15;
  mp_word VAR_16;
  mp_digit VAR_17, *VAR_18, *VAR_19;
  if ((VAR_10 = FUNC_5 (&VAR_9, VAR_8)) != VAR_3) {
    return VAR_10;
  }
  VAR_9.used = VAR_8;


  VAR_11 = VAR_5->used;
  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {

    VAR_15 = 0;


    VAR_12 = FUNC_0 (VAR_6->used, VAR_8 - VAR_13);



    VAR_17 = VAR_5->dp[VAR_13];


    VAR_18 = VAR_9.dp + VAR_13;


    VAR_19 = VAR_6->dp;


    for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {

      VAR_16 = ((mp_word)*VAR_18) +
                ((mp_word)VAR_17) * ((mp_word)*VAR_19++) +
                ((mp_word) VAR_15);


      *VAR_18++ = (mp_digit) (VAR_16 & ((mp_word) VAR_2));


      VAR_15 = (mp_digit) (VAR_16 >> ((mp_word) VAR_1));
    }

    if (VAR_13 + VAR_14 < VAR_8) {
      *VAR_18 = VAR_15;
    }
  }

  FUNC_2 (&VAR_9);
  FUNC_4 (&VAR_9, VAR_7);

  FUNC_3 (&VAR_9);
  return VAR_3;
}

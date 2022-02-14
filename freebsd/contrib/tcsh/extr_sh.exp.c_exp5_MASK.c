
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_0 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*,int (*) (int*)) ;
 int FUNC_2 (int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (char*,int*,int***) ;
 int* FUNC_5 (int***,int) ;
 scalar_t__ FUNC_6 (int*,int ) ;
 int* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static Char *
FUNC_10(Char ***VAR_6, int VAR_7)
{
    Char *VAR_8, *VAR_9;
    tcsh_number_t VAR_10 = 0;

    VAR_8 = FUNC_5(VAR_6, VAR_7);
    FUNC_4("exp5 p1", VAR_8, VAR_6);

    while (FUNC_6(**VAR_6, VAR_2)) {
 const Char *VAR_11 = *(*VAR_6)++;
 if ((VAR_7 & VAR_4) != 0) {




     FUNC_9(VAR_8);
     return FUNC_0(VAR_11);
 }

 FUNC_1(VAR_8, FUNC_9);
 VAR_9 = VAR_5 ?
     FUNC_10(VAR_6, VAR_7) :
     FUNC_5(VAR_6, VAR_7);
 FUNC_1(VAR_9, FUNC_9);
 FUNC_4("exp5 p2", VAR_9, VAR_6);
 if (!(VAR_7 & VAR_3))
     switch (VAR_11[0]) {

     case '*':
  VAR_10 = FUNC_3(VAR_8) * FUNC_3(VAR_9);
  break;

     case '/':
  VAR_10 = FUNC_3(VAR_9);
  if (VAR_10 == 0)
      FUNC_8(VAR_0);
  VAR_10 = FUNC_3(VAR_8) / VAR_10;
  break;

     case '%':
  VAR_10 = FUNC_3(VAR_9);
  if (VAR_10 == 0)
      FUNC_8(VAR_1);
  VAR_10 = FUNC_3(VAR_8) % VAR_10;
  break;
     }
 FUNC_2(VAR_8);
 VAR_8 = FUNC_7(VAR_10);
 FUNC_4("exp5 p1", VAR_8, VAR_6);
 if (VAR_5)
     break;
    }
    return (VAR_8);
}

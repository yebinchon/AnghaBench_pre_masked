
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tcsh_number_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (char*,int*,int***) ;
 int* FUNC_4 (int***,int) ;
 scalar_t__ FUNC_5 (int*,int ) ;
 int* FUNC_6 (scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static Char *
FUNC_7(Char ***VAR_4, int VAR_5)
{
    Char *VAR_6, *VAR_7;
    tcsh_number_t VAR_8 = 0;

    VAR_6 = FUNC_4(VAR_4, VAR_5);
    FUNC_3("exp4 p1", VAR_6, VAR_4);
    while (FUNC_5(**VAR_4, VAR_0)) {
 const Char *VAR_9 = *(*VAR_4)++;

 FUNC_0(VAR_6, VAR_3);
 VAR_7 = VAR_2 ?
     FUNC_7(VAR_4, VAR_5) :
     FUNC_4(VAR_4, VAR_5);
 FUNC_0(VAR_7, VAR_3);
 FUNC_3("exp4 p2", VAR_7, VAR_4);
 if (!(VAR_5 & VAR_1))
     switch (VAR_9[0]) {

     case '+':
  VAR_8 = FUNC_2(VAR_6) + FUNC_2(VAR_7);
  break;

     case '-':
  VAR_8 = FUNC_2(VAR_6) - FUNC_2(VAR_7);
  break;
     }
 FUNC_1(VAR_6);
 VAR_6 = FUNC_6(VAR_8);
 FUNC_3("exp4 p1", VAR_6, VAR_4);
 if (VAR_2)
     break;
    }
    return (VAR_6);
}

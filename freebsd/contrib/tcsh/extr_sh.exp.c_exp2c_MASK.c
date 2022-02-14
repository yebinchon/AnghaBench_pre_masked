
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tcsh_number_t ;
typedef int Char ;




 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*,int *,int ***) ;
 int * FUNC_6 (int ***,int) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static tcsh_number_t
FUNC_8(Char ***VAR_4, int VAR_5)
{
    Char *VAR_6 = FUNC_6(VAR_4, VAR_5);
    Char *VAR_7;
    tcsh_number_t VAR_8;

    FUNC_1(VAR_6, VAR_3);
    FUNC_5("exp2c p1", VAR_6, VAR_4);
    if ((VAR_8 = FUNC_7(**VAR_4, VAR_0)) != 0) {
 (*VAR_4)++;
 if (VAR_8 == 130 || VAR_8 == 128)
     VAR_5 |= VAR_2;
 VAR_7 = FUNC_6(VAR_4, VAR_5);
 FUNC_1(VAR_7, VAR_3);
 FUNC_5("exp2c p2", VAR_7, VAR_4);
 if (!(VAR_5 & VAR_1))
     switch ((int)VAR_8) {

     case 131:
  VAR_8 = FUNC_4(VAR_6, VAR_7);
  break;

     case 129:
  VAR_8 = !FUNC_4(VAR_6, VAR_7);
  break;

     case 130:
  VAR_8 = FUNC_0(VAR_6, VAR_7);
  break;

     case 128:
  VAR_8 = !FUNC_0(VAR_6, VAR_7);
  break;
     }
 FUNC_2(VAR_6);
 return (VAR_8);
    }
    VAR_8 = FUNC_3(VAR_6);
    FUNC_2(VAR_6);
    return (VAR_8);
}

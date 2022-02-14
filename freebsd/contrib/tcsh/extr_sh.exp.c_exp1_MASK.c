
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int,int ***) ;
 int FUNC_2 (int ***,int) ;

__attribute__((used)) static tcsh_number_t
FUNC_3(Char ***VAR_3, int VAR_4)
{
    tcsh_number_t VAR_5 = FUNC_2(VAR_3, VAR_4);

    FUNC_1("exp1 p1", VAR_5, VAR_3);
    while (**VAR_3 && FUNC_0(**VAR_3, VAR_0)) {
 tcsh_number_t VAR_6;

 (*VAR_3)++;
 VAR_6 = VAR_2 ?
     FUNC_3(VAR_3, (VAR_4 & VAR_1) || !VAR_5) :
     FUNC_2(VAR_3, (VAR_4 & VAR_1) || !VAR_5);

 FUNC_1("exp1 p2", VAR_6, VAR_3);
 if (VAR_2 || !(VAR_4 & VAR_1))
     VAR_5 = (VAR_5 && VAR_6);
 FUNC_1("exp1 p1", VAR_5, VAR_3);
 if (VAR_2)
     break;
    }
    return (VAR_5);
}

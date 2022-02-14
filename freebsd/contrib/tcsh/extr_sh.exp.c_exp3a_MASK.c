
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
typedef char Char ;


 scalar_t__ FUNC_0 (char*,char const) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char***) ;
 char* FUNC_5 (char***,int) ;
 char* FUNC_6 (int) ;
 int VAR_1 ;

__attribute__((used)) static Char *
FUNC_7(Char ***VAR_2, int VAR_3)
{
    Char *VAR_4, *VAR_5;
    const Char *VAR_6;
    tcsh_number_t VAR_7;

    VAR_4 = FUNC_5(VAR_2, VAR_3);
    FUNC_4("exp3a p1", VAR_4, VAR_2);
    VAR_6 = **VAR_2;
    if (VAR_6 && FUNC_0("<>", VAR_6[0]) && VAR_6[0] == VAR_6[1]) {
 (*VAR_2)++;
 FUNC_1(VAR_4, VAR_1);
 VAR_5 = VAR_0 ?
     FUNC_7(VAR_2, VAR_3) :
     FUNC_5(VAR_2, VAR_3);
 FUNC_1(VAR_5, VAR_1);
 FUNC_4("exp3a p2", VAR_5, VAR_2);
 if (VAR_6[0] == '<')
     VAR_7 = FUNC_3(VAR_4) << FUNC_3(VAR_5);
 else
     VAR_7 = FUNC_3(VAR_4) >> FUNC_3(VAR_5);
 FUNC_2(VAR_4);
 VAR_4 = FUNC_6(VAR_7);
 FUNC_4("exp3a p1", VAR_4, VAR_2);
    }
    return (VAR_4);
}

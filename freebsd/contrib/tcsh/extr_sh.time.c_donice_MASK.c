
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct command*) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (scalar_t__) ;

void
FUNC_7(Char **VAR_3, struct command *VAR_4)
{
    Char *VAR_5;
    int VAR_6 = 0;

    FUNC_0(VAR_4);
    VAR_3++, VAR_5 = *VAR_3++;
    if (VAR_5 == 0)
 VAR_6 = 4;
    else if (*VAR_3 == 0 && FUNC_1("+-", VAR_5[0]))
 VAR_6 = FUNC_2(VAR_5);




    (void) FUNC_3(VAR_6);

}

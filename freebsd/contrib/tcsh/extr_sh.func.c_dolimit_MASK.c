
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct limits {scalar_t__ limconst; } ;
struct command {int dummy; } ;
typedef int RLIM_TYPE ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct command*) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 struct limits* FUNC_2 (int *) ;
 int FUNC_3 (struct limits*,int **) ;
 struct limits* VAR_2 ;
 int FUNC_4 (struct limits*,int) ;
 scalar_t__ FUNC_5 (struct limits*,int,int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(Char **VAR_3, struct command *VAR_4)
{
    struct limits *VAR_5;
    RLIM_TYPE VAR_6;
    int VAR_7 = 0;

    FUNC_0(VAR_4);
    VAR_3++;
    if (*VAR_3 && FUNC_1(*VAR_3, VAR_1)) {
 VAR_7 = 1;
 VAR_3++;
    }
    if (*VAR_3 == 0) {
 for (VAR_5 = VAR_2; VAR_5->limconst >= 0; VAR_5++)
     FUNC_4(VAR_5, VAR_7);
 return;
    }
    VAR_5 = FUNC_2(VAR_3[0]);
    if (VAR_3[1] == 0) {
 FUNC_4(VAR_5, VAR_7);
 return;
    }
    VAR_6 = FUNC_3(VAR_5, VAR_3 + 1);
    if (FUNC_5(VAR_5, VAR_7, VAR_6) < 0)
 FUNC_6(VAR_0);
}

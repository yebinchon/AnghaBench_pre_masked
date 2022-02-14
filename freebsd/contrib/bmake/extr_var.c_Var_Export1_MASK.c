
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int flags; int val; } ;
typedef TYPE_1__ Var ;


 int VAR_0 ;
 char* FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_1 (char const*,int ,int ) ;
 char* FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char*,char) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_8, int VAR_9)
{
    char VAR_10[VAR_0];
    Var *VAR_11;
    char *VAR_12 = ((void*)0);
    int VAR_13;
    int VAR_14 = (VAR_9 & VAR_4);

    if (*VAR_8 == '.')
 return 0;
    if (!VAR_8[1]) {






 switch (VAR_8[0]) {
 case '@':
 case '%':
 case '*':
 case '!':
     return 0;
 }
    }
    VAR_11 = FUNC_1(VAR_8, VAR_5, 0);
    if (VAR_11 == ((void*)0)) {
 return 0;
    }
    if (!VAR_14 &&
 (VAR_11->flags & (VAR_2|VAR_7)) == VAR_2) {
 return 0;
    }
    VAR_12 = FUNC_0(&VAR_11->val, ((void*)0));
    if ((VAR_9 & VAR_3) == 0 && FUNC_6(VAR_12, '$')) {
 if (VAR_14) {





     VAR_11->flags |= (VAR_2|VAR_7);
     return 1;
 }
 if (VAR_11->flags & VAR_6) {




     return 0;
 }
 VAR_13 = FUNC_5(VAR_10, sizeof(VAR_10), "${%s}", VAR_8);
 if (VAR_13 < (int)sizeof(VAR_10)) {
     VAR_12 = FUNC_2(((void*)0), VAR_10, VAR_5, VAR_1);
     FUNC_4(VAR_8, VAR_12, 1);
     FUNC_3(VAR_12);
 }
    } else {
 if (VAR_14) {
     VAR_11->flags &= ~VAR_7;
 }
 if (VAR_14 || !(VAR_11->flags & VAR_2)) {
     FUNC_4(VAR_8, VAR_12, 1);
 }
    }



    if (VAR_14) {
 VAR_11->flags |= VAR_2;
    }
    return 1;
}

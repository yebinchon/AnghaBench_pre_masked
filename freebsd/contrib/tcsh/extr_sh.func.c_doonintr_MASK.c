
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct command {int dummy; } ;
struct TYPE_2__ {scalar_t__ sa_handler; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (struct command*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(Char **VAR_11, struct command *VAR_12)
{
    Char *VAR_13;
    Char *VAR_14 = VAR_11[1];

    FUNC_1(VAR_12);
    if (VAR_8.sa_handler == VAR_4)
 return;
    if (VAR_10 && VAR_7)
 FUNC_5(VAR_0 | VAR_1);
    VAR_13 = VAR_6;
    VAR_6 = 0;
    FUNC_7(VAR_13);
    if (VAR_14 == 0) {
 if (VAR_10)
     FUNC_4(VAR_2, VAR_9);
 else
     (void) FUNC_3(VAR_2, VAR_3);
 VAR_6 = 0;
    }
    else if (FUNC_2((VAR_14 = FUNC_6(VAR_14)), VAR_5)) {
 (void) FUNC_3(VAR_2, VAR_4);
 VAR_6 = FUNC_0(VAR_5);
    }
    else {
 VAR_6 = FUNC_0(VAR_14);
 FUNC_4(VAR_2, VAR_9);
    }
}

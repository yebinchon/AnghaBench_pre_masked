
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ made; char* name; int type; } ;
typedef int Lst ;
typedef TYPE_1__ GNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 () ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_6 (char*,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char*) ;
 int VAR_13 ;
 int VAR_14 ;

void
FUNC_10(Lst VAR_15)
{
    GNode *VAR_16 = ((void*)0);
    int VAR_17;

    if (!VAR_14)
 FUNC_5();

    if (FUNC_7(VAR_6, VAR_9) != VAR_9) {
 FUNC_7(VAR_6, VAR_1);
    }
    if (FUNC_7(VAR_8, VAR_9) != VAR_9) {
 FUNC_7(VAR_8, VAR_1);
    }
    if (FUNC_7(VAR_5, VAR_9) != VAR_9) {
 FUNC_7(VAR_5, VAR_1);
    }
    if (FUNC_7(VAR_7, VAR_9) != VAR_9) {
 FUNC_7(VAR_7, VAR_1);
    }

    VAR_2 = FUNC_6(".END", VAR_10);
    VAR_2->type = VAR_4;




    if (!VAR_13) {
 VAR_16 = FUNC_6(".BEGIN", VAR_11);
 if (VAR_16 != ((void*)0)) {
     FUNC_0(VAR_16, VAR_16);
            if (VAR_16->made == VAR_3) {
                FUNC_4(VAR_16, "\nStop.");
                FUNC_8(1);
            }
 }
    }





    FUNC_3(VAR_15);
    VAR_17 = 0;
    while (!FUNC_2 (VAR_15)) {
 VAR_16 = (GNode *)FUNC_1(VAR_15);
 FUNC_0(VAR_16, VAR_16);

 if (VAR_16->made == VAR_12) {
     FUNC_9("`%s' is up to date.\n", VAR_16->name);
 } else if (VAR_16->made == VAR_0) {
     FUNC_9("`%s' not remade because of errors.\n", VAR_16->name);
     VAR_17 += 1;
 }
    }




    if (VAR_17 == 0) {
 FUNC_0(VAR_2, VAR_2);
 if (VAR_16->made == VAR_3) {
     FUNC_4(VAR_16, "\nStop.");
     FUNC_8(1);
 }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct TYPE_2__* prev; int * chain; scalar_t__ build_chain; int key; int cert; struct TYPE_2__* next; } ;
typedef TYPE_1__ SSL_EXCERT ;
typedef int SSL ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;
 int FUNC_10 () ;
 int FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(SSL *VAR_2, void *VAR_3)
{
    int VAR_4, VAR_5;
    SSL_EXCERT *VAR_6 = VAR_3;
    FUNC_3(VAR_2);

    if (VAR_6 == ((void*)0))
        return 1;





    while (VAR_6->next != ((void*)0))
        VAR_6 = VAR_6->next;

    VAR_4 = 0;

    while (VAR_6 != ((void*)0)) {
        VAR_4++;
        VAR_5 = FUNC_4(VAR_2, VAR_6->cert, VAR_6->key, VAR_6->chain);
        FUNC_0(VAR_1, "Checking cert chain %d:\nSubject: ", VAR_4);
        FUNC_8(VAR_1, FUNC_9(VAR_6->cert), 0,
                           FUNC_10());
        FUNC_1(VAR_1, "\n");
        FUNC_11(VAR_2, VAR_5);
        if (VAR_5 & VAR_0) {
            if (!FUNC_7(VAR_2, VAR_6->cert)
                    || !FUNC_6(VAR_2, VAR_6->key)) {
                return 0;
            }





            if (VAR_6->build_chain) {
                if (!FUNC_2(VAR_2, 0))
                    return 0;
            } else if (VAR_6->chain != ((void*)0)) {
                FUNC_5(VAR_2, VAR_6->chain);
            }
        }
        VAR_6 = VAR_6->prev;
    }
    return 1;
}

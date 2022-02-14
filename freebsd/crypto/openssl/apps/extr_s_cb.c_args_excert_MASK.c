
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum range { ____Placeholder_range } range ;
struct TYPE_5__ {int build_chain; int keyform; int certform; int * chainfile; int * keyfile; int * certfile; } ;
typedef TYPE_1__ SSL_EXCERT ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 void* FUNC_3 () ;
 int FUNC_4 (void*,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**) ;

int FUNC_8(int VAR_2, SSL_EXCERT **VAR_3)
{
    SSL_EXCERT *VAR_4 = *VAR_3;

    FUNC_2(VAR_2 > 129);
    FUNC_2(VAR_2 < 128);

    if (VAR_4 == ((void*)0)) {
        if (!FUNC_7(&VAR_4)) {
            FUNC_0(VAR_1, " %s: Error initialising xcert\n",
                       FUNC_5());
            goto err;
        }
        *VAR_3 = VAR_4;
    }

    switch ((enum range)VAR_2) {
    case 129:
    case 128:
        return 0;
    case 135:
        if (VAR_4->certfile != ((void*)0) && !FUNC_7(&VAR_4)) {
            FUNC_0(VAR_1, "%s: Error adding xcert\n", FUNC_5());
            goto err;
        }
        *VAR_3 = VAR_4;
        VAR_4->certfile = FUNC_3();
        break;
    case 131:
        if (VAR_4->keyfile != ((void*)0)) {
            FUNC_0(VAR_1, "%s: Key already specified\n", FUNC_5());
            goto err;
        }
        VAR_4->keyfile = FUNC_3();
        break;
    case 133:
        if (VAR_4->chainfile != ((void*)0)) {
            FUNC_0(VAR_1, "%s: Chain already specified\n",
                       FUNC_5());
            goto err;
        }
        VAR_4->chainfile = FUNC_3();
        break;
    case 132:
        VAR_4->build_chain = 1;
        break;
    case 134:
        if (!FUNC_4(FUNC_3(), VAR_0, &VAR_4->certform))
            return 0;
        break;
    case 130:
        if (!FUNC_4(FUNC_3(), VAR_0, &VAR_4->keyform))
            return 0;
        break;
    }
    return 1;

 err:
    FUNC_1(VAR_1);
    FUNC_6(VAR_4);
    *VAR_3 = ((void*)0);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; int * method; } ;
typedef TYPE_1__ SSL_COMP ;
typedef int COMP_METHOD ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *,TYPE_1__*) ;
 int * VAR_7 ;

int FUNC_8(int VAR_8, COMP_METHOD *VAR_9)
{
    SSL_COMP *VAR_10;

    if (VAR_9 == ((void*)0) || FUNC_0(VAR_9) == VAR_3)
        return 1;
    if (VAR_8 < 193 || VAR_8 > 255) {
        FUNC_4(VAR_4,
               VAR_5);
        return 1;
    }

    FUNC_1(VAR_0);
    VAR_10 = FUNC_3(sizeof(*VAR_10));
    if (VAR_10 == ((void*)0)) {
        FUNC_1(VAR_1);
        FUNC_4(VAR_4, VAR_2);
        return 1;
    }

    VAR_10->id = VAR_8;
    VAR_10->method = VAR_9;
    FUNC_5();
    if (VAR_7 && FUNC_6(VAR_7, VAR_10) >= 0) {
        FUNC_2(VAR_10);
        FUNC_1(VAR_1);
        FUNC_4(VAR_4,
               VAR_6);
        return 1;
    }
    if (VAR_7 == ((void*)0) || !FUNC_7(VAR_7, VAR_10)) {
        FUNC_2(VAR_10);
        FUNC_1(VAR_1);
        FUNC_4(VAR_4, VAR_2);
        return 1;
    }
    FUNC_1(VAR_1);
    return 0;
}

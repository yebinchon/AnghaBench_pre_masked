
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num; } ;
typedef TYPE_1__ BIO ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;

    if (VAR_1 != ((void*)0)) {
        FUNC_4();
        VAR_3 = FUNC_3(VAR_0->num, VAR_1, VAR_2);
        FUNC_0(VAR_0);
        if (VAR_3 <= 0) {
            if (FUNC_1(VAR_3))
                FUNC_2(VAR_0);
        }
    }
    return VAR_3;
}

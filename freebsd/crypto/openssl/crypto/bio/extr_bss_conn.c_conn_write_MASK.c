
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int num; scalar_t__ ptr; } ;
struct TYPE_8__ {scalar_t__ state; } ;
typedef TYPE_1__ BIO_CONNECT ;
typedef TYPE_2__ BIO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4;
    BIO_CONNECT *VAR_5;

    VAR_5 = (BIO_CONNECT *)VAR_1->ptr;
    if (VAR_5->state != VAR_0) {
        VAR_4 = FUNC_4(VAR_1, VAR_5);
        if (VAR_4 <= 0)
            return VAR_4;
    }

    FUNC_3();
    VAR_4 = FUNC_5(VAR_1->num, VAR_2, VAR_3);
    FUNC_0(VAR_1);
    if (VAR_4 <= 0) {
        if (FUNC_2(VAR_4))
            FUNC_1(VAR_1);
    }
    return VAR_4;
}

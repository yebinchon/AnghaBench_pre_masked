
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* method_data; } ;
typedef TYPE_1__ X509_LOOKUP ;
struct TYPE_7__ {int * buffer; int * lock; int * dirs; } ;
typedef TYPE_2__ BY_DIR ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int * FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_1 ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(X509_LOOKUP *VAR_2)
{
    BY_DIR *VAR_3 = FUNC_4(sizeof(*VAR_3));

    if (VAR_3 == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        return 0;
    }

    if ((VAR_3->buffer = FUNC_1()) == ((void*)0)) {
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }
    VAR_3->dirs = ((void*)0);
    VAR_3->lock = FUNC_2();
    if (VAR_3->lock == ((void*)0)) {
        FUNC_0(VAR_3->buffer);
        FUNC_5(VAR_1, VAR_0);
        goto err;
    }
    VAR_2->method_data = VAR_3;
    return 1;

 err:
    FUNC_3(VAR_3);
    return 0;
}

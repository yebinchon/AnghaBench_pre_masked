
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; int init; } ;
struct TYPE_5__ {int lrn; int lwn; } ;
typedef TYPE_1__ NBIO_TEST ;
typedef TYPE_2__ BIO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(BIO *VAR_2)
{
    NBIO_TEST *VAR_3;

    if ((VAR_3 = FUNC_1(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_3->lrn = -1;
    VAR_3->lwn = -1;
    VAR_2->ptr = (char *)VAR_3;
    VAR_2->init = 1;
    return 1;
}

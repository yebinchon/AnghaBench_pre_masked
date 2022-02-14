
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_2__ pitem ;
typedef int hm_fragment ;
struct TYPE_9__ {TYPE_1__* d1; } ;
struct TYPE_7__ {int buffered_messages; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int ) ;

void FUNC_3(SSL *VAR_0)
{
    pitem *VAR_1 = ((void*)0);
    hm_fragment *VAR_2 = ((void*)0);

    while ((VAR_1 = FUNC_2(VAR_0->d1->buffered_messages)) != ((void*)0)) {
        VAR_2 = (hm_fragment *)VAR_1->data;
        FUNC_0(VAR_2);
        FUNC_1(VAR_1);
    }
}

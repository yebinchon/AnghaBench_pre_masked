
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t numwpipes; } ;
struct TYPE_7__ {TYPE_5__ rlayer; } ;
struct TYPE_6__ {int * buf; } ;
typedef TYPE_1__ SSL3_BUFFER ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (TYPE_5__*) ;

int FUNC_2(SSL *VAR_0)
{
    SSL3_BUFFER *VAR_1;
    size_t VAR_2;

    VAR_2 = VAR_0->rlayer.numwpipes;
    while (VAR_2 > 0) {
        VAR_1 = &FUNC_1(&VAR_0->rlayer)[VAR_2 - 1];

        FUNC_0(VAR_1->buf);
        VAR_1->buf = ((void*)0);
        VAR_2--;
    }
    VAR_0->rlayer.numwpipes = 0;
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int expand; } ;
struct TYPE_5__ {unsigned char* comp; unsigned char* data; int length; } ;
typedef TYPE_1__ SSL3_RECORD ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int ,unsigned char*,int ,unsigned char*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_2(SSL *VAR_2, SSL3_RECORD *VAR_3)
{

    int VAR_4;

    if (VAR_3->comp == ((void*)0)) {
        VAR_3->comp = (unsigned char *)
            FUNC_1(VAR_0);
    }
    if (VAR_3->comp == ((void*)0))
        return 0;


    VAR_4 = FUNC_0(VAR_2->expand, VAR_3->comp,
                          VAR_1, VAR_3->data, (int)VAR_3->length);
    if (VAR_4 < 0)
        return 0;
    else
        VAR_3->length = VAR_4;
    VAR_3->data = VAR_3->comp;

    return 1;
}

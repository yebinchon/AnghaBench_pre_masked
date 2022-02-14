
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {size_t supportedgroups_len; int * supportedgroups; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;


 size_t FUNC_0 (int *) ;



 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(SSL *VAR_2, const uint16_t **VAR_3,
                               size_t *VAR_4)
{


    switch (FUNC_1(VAR_2)) {
    case 130:
        *VAR_3 = VAR_1;
        *VAR_4 = FUNC_0(VAR_1);
        break;

    case 129:
        *VAR_3 = VAR_1;
        *VAR_4 = 1;
        break;

    case 128:
        *VAR_3 = VAR_1 + 1;
        *VAR_4 = 1;
        break;

    default:
        if (VAR_2->ext.supportedgroups == ((void*)0)) {
            *VAR_3 = VAR_0;
            *VAR_4 = FUNC_0(VAR_0);
        } else {
            *VAR_3 = VAR_2->ext.supportedgroups;
            *VAR_4 = VAR_2->ext.supportedgroups_len;
        }
        break;
    }
}

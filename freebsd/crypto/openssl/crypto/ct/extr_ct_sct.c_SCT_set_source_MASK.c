
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sct_source_t ;
struct TYPE_4__ {int source; int validation_status; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(SCT *VAR_3, sct_source_t VAR_4)
{
    VAR_3->source = VAR_4;
    VAR_3->validation_status = VAR_2;
    switch (VAR_4) {
    case 130:
    case 131:
        return FUNC_0(VAR_3, VAR_1);
    case 128:
        return FUNC_0(VAR_3, VAR_0);
    case 129:
        break;
    }

    return 1;
}

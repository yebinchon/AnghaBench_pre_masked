
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int parameters; int named_curve; } ;
struct TYPE_5__ {int type; TYPE_1__ value; } ;
typedef int EC_GROUP ;
typedef TYPE_2__ ECPKPARAMETERS ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

EC_GROUP *FUNC_5(const ECPKPARAMETERS *VAR_7)
{
    EC_GROUP *VAR_8 = ((void*)0);
    int VAR_9 = 0;

    if (VAR_7 == ((void*)0)) {
        FUNC_3(VAR_0, VAR_3);
        return ((void*)0);
    }

    if (VAR_7->type == 0) {
        VAR_9 = FUNC_4(VAR_7->value.named_curve);
        if ((VAR_8 = FUNC_0(VAR_9)) == ((void*)0)) {
            FUNC_3(VAR_0,
                  VAR_2);
            return ((void*)0);
        }
        FUNC_2(VAR_8, VAR_6);
    } else if (VAR_7->type == 1) {

        VAR_8 = FUNC_1(VAR_7->value.parameters);
        if (!VAR_8) {
            FUNC_3(VAR_0, VAR_4);
            return ((void*)0);
        }
        FUNC_2(VAR_8, VAR_5);
    } else if (VAR_7->type == 2) {
        return ((void*)0);
    } else {
        FUNC_3(VAR_0, VAR_1);
        return ((void*)0);
    }

    return VAR_8;
}

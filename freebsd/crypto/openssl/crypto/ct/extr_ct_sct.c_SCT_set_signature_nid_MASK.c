
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* validation_status; int sig_alg; void* hash_alg; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;


 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_1(SCT *VAR_6, int VAR_7)
{
    switch (VAR_7) {
    case 128:
        VAR_6->hash_alg = VAR_3;
        VAR_6->sig_alg = VAR_5;
        VAR_6->validation_status = VAR_2;
        return 1;
    case 129:
        VAR_6->hash_alg = VAR_3;
        VAR_6->sig_alg = VAR_4;
        VAR_6->validation_status = VAR_2;
        return 1;
    default:
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
}

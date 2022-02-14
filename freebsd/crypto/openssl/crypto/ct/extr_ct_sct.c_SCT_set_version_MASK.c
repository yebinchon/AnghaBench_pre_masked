
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ sct_version_t ;
struct TYPE_3__ {int validation_status; scalar_t__ version; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_1(SCT *VAR_4, sct_version_t VAR_5)
{
    if (VAR_5 != VAR_3) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }
    VAR_4->version = VAR_5;
    VAR_4->validation_status = VAR_2;
    return 1;
}

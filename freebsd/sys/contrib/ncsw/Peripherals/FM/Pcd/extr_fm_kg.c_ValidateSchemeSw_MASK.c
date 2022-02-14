
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ netEnvId; scalar_t__ valid; int h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdKgScheme ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(t_FmPcdKgScheme *VAR_2)
{
    FUNC_0(!VAR_2->valid);
    if (VAR_2->netEnvId != VAR_0)
        FUNC_1(VAR_2->h_FmPcd, VAR_2->netEnvId);
    VAR_2->valid = VAR_1;
}

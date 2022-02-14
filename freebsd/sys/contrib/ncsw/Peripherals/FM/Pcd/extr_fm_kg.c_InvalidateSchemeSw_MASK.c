
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ netEnvId; int valid; int h_FmPcd; scalar_t__ owners; } ;
typedef TYPE_1__ t_FmPcdKgScheme ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_2(t_FmPcdKgScheme *VAR_5)
{
    if (VAR_5->owners)
       FUNC_1(VAR_4, VAR_0, ("Trying to delete a scheme that has ports bound to"));

    if (VAR_5->netEnvId != VAR_3)
        FUNC_0(VAR_5->h_FmPcd, VAR_5->netEnvId);
    VAR_5->valid = VAR_2;

    return VAR_1;
}

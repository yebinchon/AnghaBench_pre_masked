
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_4__ {scalar_t__ owners; } ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;
typedef int t_Error ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

t_Error FUNC_3(t_Handle VAR_4)
{
    t_FmPcdFrmReplicGroup *VAR_5 = (t_FmPcdFrmReplicGroup *)VAR_4;

    FUNC_2(VAR_5, VAR_0);

    if (VAR_5->owners)
        FUNC_1(VAR_3,
                     VAR_1,
                     ("the group has owners and can't be deleted"));

    FUNC_0(VAR_5);

    return VAR_2;
}

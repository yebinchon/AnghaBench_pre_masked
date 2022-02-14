
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int p_Lock; } ;
typedef TYPE_1__ t_FmPcdCcTree ;
typedef int t_Error ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_2)
{
    t_FmPcdCcTree *VAR_3 = (t_FmPcdCcTree *)VAR_2;

    FUNC_0(VAR_2);

    if (FUNC_2(VAR_3->p_Lock))
        return VAR_1;

    return FUNC_1(VAR_0);
}

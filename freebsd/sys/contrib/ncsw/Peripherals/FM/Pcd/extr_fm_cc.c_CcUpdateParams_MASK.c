
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int ccTreeBaseAddr; int numOfEntries; int keyAndNextEngineParams; } ;
typedef TYPE_1__ t_FmPcdCcTree ;
typedef int t_Error ;


 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int ,int,int ,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static t_Error FUNC_2(t_Handle VAR_1, t_Handle VAR_2,
                              t_Handle VAR_3, t_Handle VAR_4,
                              bool VAR_5)
{
    t_FmPcdCcTree *VAR_6 = (t_FmPcdCcTree *)VAR_4;

    return FUNC_0(VAR_1, VAR_2, VAR_3,
                         VAR_6->keyAndNextEngineParams,
                         VAR_6->numOfEntries,
                         FUNC_1(VAR_6->ccTreeBaseAddr), VAR_5, 0,
                         VAR_4, VAR_0);
}

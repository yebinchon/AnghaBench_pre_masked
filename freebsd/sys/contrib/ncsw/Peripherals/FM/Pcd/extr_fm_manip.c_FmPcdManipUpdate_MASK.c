
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t_Handle ;
typedef int t_Error ;


 int FUNC_0 (int ,int ,int ,int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int ,int,int,int ) ;

t_Error FUNC_2(t_Handle VAR_0, t_Handle VAR_1,
                         t_Handle VAR_2, t_Handle VAR_3, t_Handle VAR_4,
                         bool VAR_5, int VAR_6, t_Handle VAR_7,
                         bool VAR_8)
{
    t_Error VAR_9;

    if (!VAR_8)
        VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
                                   VAR_4, VAR_5, VAR_6, VAR_7);
    else
        VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    return VAR_9;
}

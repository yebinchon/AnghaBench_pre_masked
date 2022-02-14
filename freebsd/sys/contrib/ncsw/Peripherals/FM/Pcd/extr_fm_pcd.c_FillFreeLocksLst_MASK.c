
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_Spinlock; int node; } ;
typedef TYPE_1__ t_FmPcdLock ;
typedef int t_FmPcd ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static t_Error FUNC_7(t_FmPcd *VAR_4)
{
    t_FmPcdLock *VAR_5;
    int VAR_6;

    for (VAR_6=0; VAR_6<10; VAR_6++)
    {
        VAR_5 = (t_FmPcdLock *)FUNC_5(sizeof(t_FmPcdLock));
        if (!VAR_5)
            FUNC_2(VAR_3, VAR_1, ("FM-PCD lock obj!"));
        FUNC_6(VAR_5, 0, sizeof(t_FmPcdLock));
        FUNC_1(&VAR_5->node);
        VAR_5->h_Spinlock = FUNC_4();
        if (!VAR_5->h_Spinlock)
        {
            FUNC_3(VAR_5);
            FUNC_2(VAR_3, VAR_0, ("FM-PCD spinlock obj!"));
        }
        FUNC_0(VAR_4, VAR_5);
    }

    return VAR_2;
}

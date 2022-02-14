
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int t_List ;
struct TYPE_5__ {int node; } ;
typedef TYPE_1__ t_FmPcdFrmReplicMember ;
struct TYPE_6__ {int numOfEntries; } ;
typedef TYPE_2__ t_FmPcdFrmReplicGroup ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(t_FmPcdFrmReplicGroup *VAR_0,
                            t_FmPcdFrmReplicMember *VAR_1,
                            t_List *VAR_2)
{
    FUNC_0(&VAR_1->node, VAR_2);

    VAR_0->numOfEntries++;
}

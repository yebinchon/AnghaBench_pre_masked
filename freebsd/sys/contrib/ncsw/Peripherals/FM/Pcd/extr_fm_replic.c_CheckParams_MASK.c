
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int t_Handle ;
struct TYPE_3__ {int maxNumOfEntries; int numOfEntries; int * nextEngineParams; } ;
typedef TYPE_1__ t_FmPcdFrmReplicGroupParams ;
typedef scalar_t__ t_Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,scalar_t__,char*) ;

__attribute__((used)) static t_Error FUNC_3(t_Handle VAR_5,
                           t_FmPcdFrmReplicGroupParams *VAR_6)
{
    int VAR_7;
    t_Error VAR_8;


    if (!FUNC_0(2, VAR_6->maxNumOfEntries, VAR_3))
        FUNC_2(VAR_4, VAR_1, ("maxNumOfEntries in the frame replicator parameters should be 2-%d",VAR_3));


    if (!VAR_6->numOfEntries)
        FUNC_2(VAR_4, VAR_0, ("numOFEntries in the frame replicator group should be greater than zero"));


    if (VAR_6->maxNumOfEntries < VAR_6->numOfEntries)
        FUNC_2(VAR_4, VAR_0, ("maxNumOfEntries should be equal or greater than numOfEntries"));

    for (VAR_7=0; VAR_7<VAR_6->numOfEntries; VAR_7++)
    {
        VAR_8 = FUNC_1(VAR_5, &VAR_6->nextEngineParams[VAR_7]);
        if (VAR_8)
            FUNC_2(VAR_4, VAR_8, ("member check parameters"));
    }
    return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int unmade_cohorts; int cohort_num; struct TYPE_5__* centurion; int cohorts; int name; } ;
typedef TYPE_1__ GNode ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_4 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_6, void *VAR_7)
{
    GNode *VAR_8 = (GNode *)VAR_6;
    int VAR_9 = *(int *)VAR_7;





    if (((VAR_9 & VAR_2) != (VAR_8->type & VAR_2)) &&
 !FUNC_1(VAR_8->type) && !FUNC_1(VAR_9))
    {
 FUNC_3(VAR_3, "Inconsistent operator for %s", VAR_8->name);
 return (1);
    }

    if ((VAR_9 == VAR_0) && ((VAR_8->type & VAR_2) == VAR_0)) {
 GNode *VAR_10;





 VAR_8->type |= VAR_9 & ~VAR_2;

 VAR_10 = FUNC_4(VAR_8->name, VAR_4);
 if (VAR_5)
     FUNC_2(VAR_10);







 VAR_10->type = VAR_9 | VAR_1;
 (void)FUNC_0(VAR_8->cohorts, VAR_10);
 VAR_10->centurion = VAR_8;
 VAR_8->unmade_cohorts += 1;
 FUNC_5(VAR_10->cohort_num, sizeof VAR_10->cohort_num, "#%d",
  VAR_8->unmade_cohorts);
    } else {




 VAR_8->type |= VAR_9;
    }

    return (0);
}

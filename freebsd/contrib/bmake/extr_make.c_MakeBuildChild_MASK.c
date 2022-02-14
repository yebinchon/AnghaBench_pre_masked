
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* name; int cohort_num; int made; int type; scalar_t__ unmade_cohorts; scalar_t__ unmade; scalar_t__ cohorts; scalar_t__ order_pred; } ;
typedef TYPE_1__ GNode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int (*) (void*,void*),void*) ;
 int FUNC_3 (int ,void*,TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (void*,void*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*,char*,int,...) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_6(void *VAR_6, void *VAR_7)
{
    GNode *VAR_8 = VAR_6;

    if (FUNC_0(VAR_1))
 FUNC_5(VAR_4, "MakeBuildChild: inspect %s%d, made %d, type %x\n",
     VAR_8->name, VAR_8->cohort_num, VAR_8->made, VAR_8->type);
    if (VAR_8->made > VAR_0)
 return 0;


    if (VAR_8->order_pred && FUNC_2(VAR_8->order_pred, FUNC_4, 0)) {

 VAR_8->made = VAR_0;
 return 0;
    }

    if (FUNC_0(VAR_1))
 FUNC_5(VAR_4, "MakeBuildChild: schedule %s%d\n",
  VAR_8->name, VAR_8->cohort_num);

    VAR_8->made = VAR_3;
    if (VAR_7 == ((void*)0))
 FUNC_1(VAR_5, VAR_8);
    else
 FUNC_3(VAR_5, VAR_7, VAR_8);

    if (VAR_8->unmade_cohorts != 0)
 FUNC_2(VAR_8->cohorts, FUNC_6, VAR_7);





    return VAR_8->type & VAR_2 && VAR_8->unmade > 0;
}

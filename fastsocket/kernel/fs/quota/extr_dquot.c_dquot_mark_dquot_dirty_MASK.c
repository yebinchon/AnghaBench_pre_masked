
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dquot {size_t dq_type; int dq_sb; int dq_dirty; int dq_flags; } ;
struct TYPE_4__ {TYPE_1__* info; } ;
struct TYPE_3__ {int dqi_dirty_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

int FUNC_5(struct dquot *VAR_2)
{
 FUNC_2(&VAR_1);
 if (!FUNC_4(VAR_0, &VAR_2->dq_flags))
  FUNC_0(&VAR_2->dq_dirty, &FUNC_1(VAR_2->dq_sb)->
    info[VAR_2->dq_type].dqi_dirty_list);
 FUNC_3(&VAR_1);
 return 0;
}

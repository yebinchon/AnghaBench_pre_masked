
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mem_dqinfo {int dqi_flags; TYPE_1__* dqi_format; } ;
struct dquot {size_t dq_type; int dq_sb; } ;
struct TYPE_4__ {struct mem_dqinfo* info; } ;
struct TYPE_3__ {scalar_t__ qf_fmt_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dquot *VAR_3)
{
 struct mem_dqinfo *VAR_4 = &FUNC_1(VAR_3->dq_sb)->info[VAR_3->dq_type];

 return FUNC_0(VAR_0) &&
        (VAR_4->dqi_format->qf_fmt_id != VAR_1 ||
  !(VAR_4->dqi_flags & VAR_2));
}

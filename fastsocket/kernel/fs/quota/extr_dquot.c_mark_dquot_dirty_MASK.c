
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dquot {TYPE_2__* dq_sb; } ;
struct TYPE_4__ {TYPE_1__* dq_op; } ;
struct TYPE_3__ {int (* mark_dirty ) (struct dquot*) ;} ;


 int FUNC_0 (struct dquot*) ;

__attribute__((used)) static inline int FUNC_1(struct dquot *VAR_0)
{
 return VAR_0->dq_sb->dq_op->mark_dirty(VAR_0);
}

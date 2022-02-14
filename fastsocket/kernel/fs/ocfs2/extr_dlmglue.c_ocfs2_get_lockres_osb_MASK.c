
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {scalar_t__ l_priv; TYPE_1__* l_ops; } ;
struct TYPE_2__ {struct ocfs2_super* (* get_osb ) (struct ocfs2_lock_res*) ;} ;


 struct ocfs2_super* FUNC_0 (struct ocfs2_lock_res*) ;

__attribute__((used)) static inline struct ocfs2_super *FUNC_1(struct ocfs2_lock_res *VAR_0)
{
 if (VAR_0->l_ops->get_osb)
  return VAR_0->l_ops->get_osb(VAR_0);

 return (struct ocfs2_super *)VAR_0->l_priv;
}

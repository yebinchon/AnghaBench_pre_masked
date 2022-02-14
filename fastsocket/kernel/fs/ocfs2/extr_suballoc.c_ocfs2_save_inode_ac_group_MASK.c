
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_alloc_context {int ac_alloc_slot; int ac_last_group; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int ip_last_used_slot; int ip_last_used_group; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_0,
          struct ocfs2_alloc_context *VAR_1)
{
 FUNC_0(VAR_0)->ip_last_used_group = VAR_1->ac_last_group;
 FUNC_0(VAR_0)->ip_last_used_slot = VAR_1->ac_alloc_slot;
}

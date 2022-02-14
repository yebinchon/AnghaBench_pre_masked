
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_extent_list {TYPE_1__* l_recs; int l_next_free_rec; } ;
struct TYPE_2__ {int e_cpos; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ocfs2_extent_list*,TYPE_1__*) ;

__attribute__((used)) static inline u32 FUNC_3(struct ocfs2_extent_list *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->l_next_free_rec) - 1;

 return FUNC_1(VAR_0->l_recs[VAR_1].e_cpos) +
  FUNC_2(VAR_0, &VAR_0->l_recs[VAR_1]);
}

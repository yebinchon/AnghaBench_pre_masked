
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_path {int p_tree_depth; } ;
struct TYPE_4__ {int h_buffer_credits; } ;
typedef TYPE_1__ handle_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(handle_t *VAR_0, int VAR_1,
        int VAR_2,
        struct ocfs2_path *VAR_3)
{
 int VAR_4;
 int VAR_5 = (VAR_3->p_tree_depth - VAR_1) * 2 + 1 + VAR_2;

 if (VAR_0->h_buffer_credits < VAR_5) {
  VAR_4 = FUNC_0(VAR_0,
      VAR_5 - VAR_0->h_buffer_credits);
  if (VAR_4)
   return VAR_4;

  if (FUNC_1(VAR_0->h_buffer_credits < VAR_5))
   return FUNC_0(VAR_0, VAR_5);
 }

 return 0;
}

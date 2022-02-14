
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct alpha_heuristic_unwind_cache {int start_pc; int vfp; } ;


 struct alpha_heuristic_unwind_cache* FUNC_0 (struct frame_info*,void**,int ) ;
 struct frame_id FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct frame_info *VAR_0,
     void **VAR_1,
     struct frame_id *VAR_2)
{
  struct alpha_heuristic_unwind_cache *VAR_3
    = FUNC_0 (VAR_0, VAR_1, 0);

  *VAR_2 = FUNC_1 (VAR_3->vfp, VAR_3->start_pc);
}

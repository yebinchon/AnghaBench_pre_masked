
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct alpha_heuristic_unwind_cache {int vfp; } ;
typedef int CORE_ADDR ;


 struct alpha_heuristic_unwind_cache* FUNC_0 (struct frame_info*,void**,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (struct frame_info *VAR_0,
        void **VAR_1)
{
  struct alpha_heuristic_unwind_cache *VAR_2
    = FUNC_0 (VAR_0, VAR_1, 0);

  return VAR_2->vfp;
}

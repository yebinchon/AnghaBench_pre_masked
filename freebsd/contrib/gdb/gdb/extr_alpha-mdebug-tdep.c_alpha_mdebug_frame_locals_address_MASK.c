
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct alpha_mdebug_unwind_cache {int proc_desc; scalar_t__ vfp; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ FUNC_0 (int ) ;
 struct alpha_mdebug_unwind_cache* FUNC_1 (struct frame_info*,void**) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct frame_info *VAR_0,
       void **VAR_1)
{
  struct alpha_mdebug_unwind_cache *VAR_2
    = FUNC_1 (VAR_0, VAR_1);

  return VAR_2->vfp - FUNC_0 (VAR_2->proc_desc);
}

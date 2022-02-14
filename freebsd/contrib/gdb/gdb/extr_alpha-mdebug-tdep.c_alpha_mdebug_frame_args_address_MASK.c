
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct alpha_mdebug_unwind_cache {scalar_t__ vfp; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct alpha_mdebug_unwind_cache* FUNC_0 (struct frame_info*,void**) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (struct frame_info *VAR_1,
     void **VAR_2)
{
  struct alpha_mdebug_unwind_cache *VAR_3
    = FUNC_0 (VAR_1, VAR_2);

  return VAR_3->vfp - VAR_0 * 8;
}

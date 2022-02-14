
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {int base; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 struct i386_frame_cache* FUNC_0 (struct frame_info*,void**) ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (struct frame_info *VAR_0, void **VAR_1)
{
  struct i386_frame_cache *VAR_2 = FUNC_0 (VAR_0, VAR_1);

  return VAR_2->base;
}

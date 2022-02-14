
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i386_frame_cache {scalar_t__ base; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;


 struct frame_id FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct frame_info*) ;
 struct i386_frame_cache* FUNC_2 (struct frame_info*,void**) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_0, void **VAR_1,
        struct frame_id *VAR_2)
{
  struct i386_frame_cache *VAR_3 =
    FUNC_2 (VAR_0, VAR_1);


  (*VAR_2) = FUNC_0 (VAR_3->base + 8, FUNC_1 (VAR_0));
}

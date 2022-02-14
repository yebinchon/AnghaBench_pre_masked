
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct arm_prologue_cache {int prev_sp; } ;


 void* FUNC_0 (struct frame_info*) ;
 struct frame_id FUNC_1 (int ,int ) ;
 int FUNC_2 (struct frame_info*) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_0,
        void **VAR_1,
        struct frame_id *VAR_2)
{
  struct arm_prologue_cache *VAR_3;

  if (*VAR_1 == ((void*)0))
    *VAR_1 = FUNC_0 (VAR_0);
  VAR_3 = *VAR_1;



  *VAR_2 = FUNC_1 (VAR_3->prev_sp, FUNC_2 (VAR_0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct arm_prologue_cache {scalar_t__ prev_sp; } ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 (struct frame_info*) ;
 struct frame_id FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,struct frame_id) ;
 scalar_t__ FUNC_4 (struct frame_info*) ;
 int FUNC_5 (struct frame_info*) ;
 scalar_t__ FUNC_6 (struct frame_info*) ;

__attribute__((used)) static void
FUNC_7 (struct frame_info *VAR_2,
        void **VAR_3,
        struct frame_id *VAR_4)
{
  struct arm_prologue_cache *VAR_5;
  struct frame_id VAR_6;
  CORE_ADDR VAR_7;

  if (*VAR_3 == ((void*)0))
    *VAR_3 = FUNC_0 (VAR_2);
  VAR_5 = *VAR_3;

  VAR_7 = FUNC_1 (VAR_2);



  if (VAR_7 <= VAR_0)
    return;


  if (VAR_5->prev_sp == 0)
    return;

  VAR_6 = FUNC_2 (VAR_5->prev_sp, VAR_7);




  if (FUNC_4 (VAR_2) >= 0
      && FUNC_6 (VAR_2) == VAR_1
      && FUNC_3 (FUNC_5 (VAR_2), VAR_6))
    return;

  *VAR_4 = VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct arm_prologue_cache {int saved_regs; int prev_sp; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct frame_info*) ;
 int VAR_3 ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (struct frame_info*,int ,int,int*,int*,int *,int*,void*) ;

__attribute__((used)) static void
FUNC_3 (struct frame_info *VAR_4,
       void **VAR_5,
       int VAR_6,
       int *VAR_7,
       enum lval_type *VAR_8,
       CORE_ADDR *VAR_9,
       int *VAR_10,
       void *VAR_11)
{
  struct arm_prologue_cache *VAR_12;

  if (*VAR_5 == ((void*)0))
    *VAR_5 = FUNC_0 (VAR_4);
  VAR_12 = *VAR_5;




  if (VAR_6 == VAR_1)
    VAR_6 = VAR_0;




  if (VAR_6 == VAR_2)
    {
      *VAR_8 = VAR_3;
      if (VAR_11)
 FUNC_1 (VAR_11, 4, VAR_12->prev_sp);
      return;
    }

  FUNC_2 (VAR_4, VAR_12->saved_regs, VAR_6,
       VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}

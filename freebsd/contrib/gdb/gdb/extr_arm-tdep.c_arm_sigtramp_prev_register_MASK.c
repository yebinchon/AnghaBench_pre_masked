
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct arm_prologue_cache {int saved_regs; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 void* FUNC_0 (struct frame_info*) ;
 int FUNC_1 (struct frame_info*,int ,int,int*,int*,int *,int*,void*) ;

__attribute__((used)) static void
FUNC_2 (struct frame_info *VAR_0,
       void **VAR_1,
       int VAR_2,
       int *VAR_3,
       enum lval_type *VAR_4,
       CORE_ADDR *VAR_5,
       int *VAR_6,
       void *VAR_7)
{
  struct arm_prologue_cache *VAR_8;

  if (*VAR_1 == ((void*)0))
    *VAR_1 = FUNC_0 (VAR_0);
  VAR_8 = *VAR_1;

  FUNC_1 (VAR_0, VAR_8->saved_regs, VAR_2,
       VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}

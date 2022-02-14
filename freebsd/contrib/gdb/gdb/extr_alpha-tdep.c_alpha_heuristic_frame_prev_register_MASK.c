
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct alpha_heuristic_unwind_cache {int return_reg; int vfp; scalar_t__* saved_regs; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct alpha_heuristic_unwind_cache* FUNC_0 (struct frame_info*,void**,int ) ;
 int FUNC_1 (struct frame_info*,int,int*,int*,scalar_t__*,int*,void*) ;
 int FUNC_2 (struct frame_info*,scalar_t__,void*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static void
FUNC_4 (struct frame_info *VAR_5,
         void **VAR_6,
         int VAR_7, int *VAR_8,
         enum lval_type *VAR_9, CORE_ADDR *VAR_10,
         int *VAR_11, void *VAR_12)
{
  struct alpha_heuristic_unwind_cache *VAR_13
    = FUNC_0 (VAR_5, VAR_6, 0);




  if (VAR_7 == VAR_0)
    VAR_7 = VAR_13->return_reg;



  if (VAR_13->saved_regs[VAR_7])
    {
      *VAR_8 = 0;
      *VAR_9 = VAR_3;
      *VAR_10 = VAR_13->saved_regs[VAR_7];
      *VAR_11 = -1;
      if (VAR_12 != ((void*)0))
 FUNC_2 (VAR_5, *VAR_10, VAR_12, VAR_1);
      return;
    }



  if (VAR_7 == VAR_2)
    {
      *VAR_8 = 0;
      *VAR_9 = VAR_4;
      *VAR_10 = 0;
      *VAR_11 = -1;
      if (VAR_12 != ((void*)0))
 FUNC_3 (VAR_12, VAR_1, VAR_13->vfp);
      return;
    }


  FUNC_1 (VAR_5, VAR_7, VAR_8, VAR_9, VAR_10,
    VAR_11, VAR_12);
}

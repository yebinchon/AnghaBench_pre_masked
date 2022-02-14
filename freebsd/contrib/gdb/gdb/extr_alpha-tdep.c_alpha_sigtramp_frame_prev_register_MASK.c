
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct alpha_sigtramp_unwind_cache {scalar_t__ sigcontext_addr; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 struct alpha_sigtramp_unwind_cache* FUNC_0 (struct frame_info*,void**) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct frame_info*,int,int*,int*,scalar_t__*,int*,void*) ;
 int FUNC_3 (struct frame_info*,scalar_t__,void*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4 (struct frame_info *VAR_2,
        void **VAR_3,
        int VAR_4, int *VAR_5,
        enum lval_type *VAR_6, CORE_ADDR *VAR_7,
        int *VAR_8, void *VAR_9)
{
  struct alpha_sigtramp_unwind_cache *VAR_10
    = FUNC_0 (VAR_2, VAR_3);
  CORE_ADDR VAR_11;

  if (VAR_10->sigcontext_addr != 0)
    {

      VAR_11 = FUNC_1 (VAR_10->sigcontext_addr, VAR_4);
      if (VAR_11 != 0)
 {
   *VAR_5 = 0;
   *VAR_6 = VAR_1;
   *VAR_7 = VAR_11;
   *VAR_8 = -1;
   if (VAR_9 != ((void*)0))
     FUNC_3 (VAR_2, VAR_11, VAR_9, VAR_0);
   return;
 }
    }





  FUNC_2 (VAR_2, VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int (* dynamic_sigtramp_offset ) (int) ;} ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
struct alpha_sigtramp_unwind_cache {scalar_t__ sigcontext_addr; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 struct alpha_sigtramp_unwind_cache* FUNC_0 (struct frame_info*,void**) ;
 int FUNC_1 (scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct frame_info*) ;
 struct frame_id FUNC_3 (int,int) ;
 int FUNC_4 (struct frame_info*) ;
 struct gdbarch_tdep* FUNC_5 (int ) ;
 int FUNC_6 (struct frame_info*,int,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8 (struct frame_info *VAR_3,
         void **VAR_4,
         struct frame_id *VAR_5)
{
  struct alpha_sigtramp_unwind_cache *VAR_6
    = FUNC_0 (VAR_3, VAR_4);
  struct gdbarch_tdep *VAR_7;
  CORE_ADDR VAR_8, VAR_9;


  if (VAR_6->sigcontext_addr == 0)
    return;




  VAR_7 = FUNC_5 (VAR_2);
  if (VAR_7->dynamic_sigtramp_offset)
    {
      int VAR_10;
      VAR_9 = FUNC_4 (VAR_3);
      VAR_10 = VAR_7->dynamic_sigtramp_offset (VAR_9);
      if (VAR_10 >= 0)
 VAR_9 -= VAR_10;
      else
 VAR_9 = 0;
    }
  else
    VAR_9 = FUNC_2 (VAR_3);


  VAR_8 = FUNC_1 (VAR_6->sigcontext_addr,
      VAR_1);
  VAR_8 = FUNC_6 (VAR_3, VAR_8,
       VAR_0);

  *VAR_5 = FUNC_3 (VAR_8, VAR_9);
}

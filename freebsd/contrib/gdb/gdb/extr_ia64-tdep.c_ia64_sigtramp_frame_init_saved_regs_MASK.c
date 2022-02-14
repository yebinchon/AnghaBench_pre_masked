
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ia64_frame_cache {int base; void** saved_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 void* FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1 (struct ia64_frame_cache *VAR_17)
{
  if (&FUNC_0)
    {
      int VAR_18;

      VAR_17->saved_regs[VAR_16] =
 FUNC_0 (VAR_17->base, VAR_10);
      VAR_17->saved_regs[VAR_4] =
 FUNC_0 (VAR_17->base, VAR_4);
      VAR_17->saved_regs[VAR_13] =
 FUNC_0 (VAR_17->base, VAR_13);
      VAR_17->saved_regs[VAR_2] =
 FUNC_0 (VAR_17->base, VAR_2);
      VAR_17->saved_regs[VAR_14] =
 FUNC_0 (VAR_17->base, VAR_14);
      VAR_17->saved_regs[VAR_3] =
 FUNC_0 (VAR_17->base, VAR_3);
      VAR_17->saved_regs[VAR_15] =
 FUNC_0 (VAR_17->base, VAR_15);
      VAR_17->saved_regs[VAR_5] =
 FUNC_0 (VAR_17->base, VAR_5);
      VAR_17->saved_regs[VAR_12] =
 FUNC_0 (VAR_17->base, VAR_12);
      VAR_17->saved_regs[VAR_11] =
 FUNC_0 (VAR_17->base, VAR_11);
      for (VAR_18 = VAR_8; VAR_18 <= VAR_9; VAR_18++)
 VAR_17->saved_regs[VAR_18] =
   FUNC_0 (VAR_17->base, VAR_18);
      for (VAR_18 = VAR_0; VAR_18 <= VAR_1; VAR_18++)
 VAR_17->saved_regs[VAR_18] =
   FUNC_0 (VAR_17->base, VAR_18);
      for (VAR_18 = VAR_6; VAR_18 <= VAR_7; VAR_18++)
 VAR_17->saved_regs[VAR_18] =
   FUNC_0 (VAR_17->base, VAR_18);
    }
}

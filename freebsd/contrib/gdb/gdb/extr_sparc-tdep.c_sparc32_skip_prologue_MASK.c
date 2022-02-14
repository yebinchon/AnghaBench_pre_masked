
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ end; } ;
struct sparc_frame_cache {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 struct symtab_and_line FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int,struct sparc_frame_cache*) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (CORE_ADDR VAR_0)
{
  struct symtab_and_line VAR_1;
  CORE_ADDR VAR_2, VAR_3;
  struct sparc_frame_cache VAR_4;



  if (FUNC_1 (VAR_0, ((void*)0), &VAR_2, &VAR_3))
    {
      VAR_1 = FUNC_0 (VAR_2, 0);

      if (VAR_1.end < VAR_3
   && VAR_0 <= VAR_1.end)
 return VAR_1.end;
    }

  return FUNC_2 (VAR_0, 0xffffffffUL, &VAR_4);
}

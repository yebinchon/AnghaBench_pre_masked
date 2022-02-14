
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct frame_info*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct frame_info*,void**) ;
 struct frame_info* FUNC_3 (struct frame_info*) ;

__attribute__((used)) static CORE_ADDR
FUNC_4 (struct frame_info *VAR_0, void **VAR_1)
{
  if (FUNC_1 ())
    {
      struct frame_info *VAR_2 = FUNC_3 (VAR_0);
      return FUNC_0 (VAR_2);
    }
  return FUNC_2 (VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct frame_info*,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (struct gdbarch *VAR_1, struct frame_info *VAR_2)
{
  CORE_ADDR VAR_3;
  VAR_3 = FUNC_2 (VAR_2, VAR_0);
  return FUNC_0 (VAR_3) ? FUNC_1 (VAR_3) : VAR_3;
}

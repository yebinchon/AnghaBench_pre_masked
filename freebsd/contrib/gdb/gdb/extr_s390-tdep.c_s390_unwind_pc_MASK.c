
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct frame_info*,int ) ;
 int FUNC_1 (struct gdbarch*,int ) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct gdbarch *VAR_1, struct frame_info *VAR_2)
{
  ULONGEST VAR_3;
  VAR_3 = FUNC_0 (VAR_2, VAR_0);
  return FUNC_1 (VAR_1, VAR_3);
}

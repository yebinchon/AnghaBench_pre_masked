
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct frame_info*,int ,char*) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (struct gdbarch *VAR_2, struct frame_info *VAR_3)
{
  char VAR_4[8];
  CORE_ADDR VAR_5, VAR_6, VAR_7;

  FUNC_1 (VAR_3, VAR_0, VAR_4);
  VAR_5 = FUNC_0 (VAR_4, 8);
  FUNC_1 (VAR_3, VAR_1, VAR_4);
  VAR_6 = FUNC_0 (VAR_4, 8);

  VAR_7 = (VAR_5 & ~0xf) | ((VAR_6 >> 41) & 3);
  return VAR_7;
}

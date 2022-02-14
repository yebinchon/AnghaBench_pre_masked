
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int) ;
 struct frame_id FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct frame_info*) ;
 int FUNC_3 (struct frame_info*,int ,char*) ;

__attribute__((used)) static struct frame_id
FUNC_4 (struct gdbarch *VAR_1, struct frame_info *VAR_2)
{
  char VAR_3[8];
  CORE_ADDR VAR_4;

  FUNC_3 (VAR_2, VAR_0, VAR_3);
  VAR_4 = FUNC_0 (VAR_3, 8);

  return FUNC_1 (VAR_4 + 16, FUNC_2 (VAR_2));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch {int dummy; } ;
struct frame_info {int dummy; } ;
struct frame_id {int dummy; } ;
typedef scalar_t__ CORE_ADDR ;


 struct frame_id FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct frame_info*) ;
 int FUNC_2 (struct gdbarch*) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct gdbarch*,struct frame_info*) ;

__attribute__((used)) static struct frame_id
FUNC_5 (struct gdbarch *VAR_0, struct frame_info *VAR_1)
{
  int VAR_2 = FUNC_2 (VAR_0) / 8;
  CORE_ADDR VAR_3 = FUNC_4 (VAR_0, VAR_1);
  CORE_ADDR VAR_4 = FUNC_3 (VAR_3, VAR_2);

  return FUNC_0 (VAR_4 + 16*VAR_2 + 32,
                         FUNC_1 (VAR_1));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_id {scalar_t__ stack_addr; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,struct frame_id) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_3 (struct frame_id VAR_2, struct frame_id VAR_3)
{
  int VAR_4;
  if (VAR_2.stack_addr == 0 || VAR_3.stack_addr == 0)

    VAR_4 = 0;
  else




    VAR_4 = FUNC_0 (VAR_2.stack_addr, VAR_3.stack_addr);
  if (VAR_0)
    {
      FUNC_2 (VAR_1, "{ frame_id_inner (l=");
      FUNC_1 (VAR_1, VAR_2);
      FUNC_2 (VAR_1, ",r=");
      FUNC_1 (VAR_1, VAR_3);
      FUNC_2 (VAR_1, ") -> %d }\n", VAR_4);
    }
  return VAR_4;
}

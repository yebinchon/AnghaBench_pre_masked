
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_id {scalar_t__ stack_addr; scalar_t__ code_addr; scalar_t__ special_addr; } ;


 int FUNC_0 (int ,struct frame_id) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_2 (struct frame_id VAR_2, struct frame_id VAR_3)
{
  int VAR_4;
  if (VAR_2.stack_addr == 0 || VAR_3.stack_addr == 0)

    VAR_4 = 0;
  else if (VAR_2.stack_addr != VAR_3.stack_addr)

    VAR_4 = 0;
  else if (VAR_2.code_addr == 0 || VAR_3.code_addr == 0)

    VAR_4 = 1;
  else if (VAR_2.code_addr != VAR_3.code_addr)

    VAR_4 = 0;
  else if (VAR_2.special_addr == 0 || VAR_3.special_addr == 0)

    VAR_4 = 1;
  else if (VAR_2.special_addr == VAR_3.special_addr)

    VAR_4 = 1;
  else

    VAR_4 = 0;
  if (VAR_0)
    {
      FUNC_1 (VAR_1, "{ frame_id_eq (l=");
      FUNC_0 (VAR_1, VAR_2);
      FUNC_1 (VAR_1, ",r=");
      FUNC_0 (VAR_1, VAR_3);
      FUNC_1 (VAR_1, ") -> %d }\n", VAR_4);
    }
  return VAR_4;
}

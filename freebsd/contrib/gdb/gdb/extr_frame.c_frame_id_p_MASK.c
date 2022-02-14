
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_id {scalar_t__ stack_addr; } ;


 int FUNC_0 (int ,struct frame_id) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

int
FUNC_2 (struct frame_id VAR_2)
{
  int VAR_3;

  VAR_3 = (VAR_2.stack_addr != 0);
  if (VAR_0)
    {
      FUNC_1 (VAR_1, "{ frame_id_p (l=");
      FUNC_0 (VAR_1, VAR_2);
      FUNC_1 (VAR_1, ") -> %d }\n", VAR_3);
    }
  return VAR_3;
}

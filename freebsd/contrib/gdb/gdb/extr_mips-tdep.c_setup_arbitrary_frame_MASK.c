
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
typedef int CORE_ADDR ;


 struct frame_info* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

struct frame_info *
FUNC_2 (int VAR_0, CORE_ADDR *VAR_1)
{
  if (VAR_0 != 2)
    FUNC_1 ("MIPS frame specifications require two arguments: sp and pc");

  return FUNC_0 (VAR_1[0], VAR_1[1]);
}

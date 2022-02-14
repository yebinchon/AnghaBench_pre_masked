
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame_info {int dummy; } ;
struct block {int dummy; } ;
typedef int CORE_ADDR ;


 struct block* FUNC_0 (int const) ;
 int FUNC_1 (struct frame_info*) ;

struct block *
FUNC_2 (struct frame_info *VAR_0, CORE_ADDR *VAR_1)
{
  const CORE_ADDR VAR_2 = FUNC_1 (VAR_0);

  if (VAR_1)
    *VAR_1 = VAR_2;

  return FUNC_0 (VAR_2);
}

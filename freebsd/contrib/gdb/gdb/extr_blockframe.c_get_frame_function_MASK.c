
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct frame_info {int dummy; } ;
struct block {int dummy; } ;


 struct symbol* FUNC_0 (struct block*) ;
 struct block* FUNC_1 (struct frame_info*,int ) ;

struct symbol *
FUNC_2 (struct frame_info *VAR_0)
{
  struct block *VAR_1 = FUNC_1 (VAR_0, 0);
  if (VAR_1 == 0)
    return 0;
  return FUNC_0 (VAR_1);
}

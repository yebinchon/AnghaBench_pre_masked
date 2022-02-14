
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct symbol {int dummy; } ;
struct frame_info {int dummy; } ;
struct block {int dummy; } ;


 struct symbol* FUNC_0 (struct block*) ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 struct frame_info* FUNC_2 (struct block*) ;
 int FUNC_3 (char*,...) ;
 struct value* FUNC_4 (struct symbol*,struct frame_info*) ;
 scalar_t__ FUNC_5 (struct symbol*) ;

struct value *
FUNC_6 (struct symbol *VAR_0, struct block *VAR_1)
{
  struct value *VAR_2;
  struct frame_info *VAR_3 = ((void*)0);

  if (!VAR_1)
    VAR_3 = ((void*)0);
  else if (FUNC_5 (VAR_0))
    {
      VAR_3 = FUNC_2 (VAR_1);
      if (!VAR_3)
 {
   if (FUNC_0 (VAR_1)
       && FUNC_1 (FUNC_0 (VAR_1)))
     FUNC_3 ("No frame is currently executing in block %s.",
     FUNC_1 (FUNC_0 (VAR_1)));
   else
     FUNC_3 ("No frame is currently executing in specified block");
 }
    }

  VAR_2 = FUNC_4 (VAR_0, VAR_3);
  if (!VAR_2)
    FUNC_3 ("Address of symbol \"%s\" is unknown.", FUNC_1 (VAR_0));

  return VAR_2;
}

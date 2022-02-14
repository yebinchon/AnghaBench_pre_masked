
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab {scalar_t__ language; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ la_language; } ;


 TYPE_1__* VAR_0 ;
 struct frame_info* VAR_1 ;
 struct symtab* FUNC_0 (int ) ;
 int FUNC_1 (struct frame_info*) ;
 int FUNC_2 (struct frame_info*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

void
FUNC_5 (struct frame_info *VAR_5)
{
  struct symtab *VAR_6;

  VAR_1 = VAR_5;


  if (&FUNC_3)
    FUNC_3 (FUNC_1 (VAR_5));
  if (VAR_5)
    {






      VAR_6 = FUNC_0 (FUNC_2 (VAR_5));
      if (VAR_6
   && VAR_6->language != VAR_0->la_language
   && VAR_6->language != VAR_4
   && VAR_2 == VAR_3)
 {
   FUNC_4 (VAR_6->language);
 }
    }
}

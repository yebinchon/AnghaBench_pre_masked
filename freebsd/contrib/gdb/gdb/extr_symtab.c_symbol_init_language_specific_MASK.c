
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * demangled_name; } ;
struct TYPE_4__ {TYPE_1__ cplus_specific; } ;
struct general_symbol_info {int language; TYPE_2__ language_specific; } ;
typedef enum language { ____Placeholder_language } language ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void
FUNC_1 (struct general_symbol_info *VAR_3,
          enum language VAR_4)
{
  VAR_3->language = VAR_4;
  if (VAR_3->language == VAR_0
      || VAR_3->language == VAR_1
      || VAR_3->language == VAR_2)
    {
      VAR_3->language_specific.cplus_specific.demangled_name = ((void*)0);
    }
  else
    {
      FUNC_0 (&VAR_3->language_specific, 0,
       sizeof (VAR_3->language_specific));
    }
}

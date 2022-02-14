
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* demangled_name; } ;
struct TYPE_4__ {TYPE_1__ cplus_specific; } ;
struct general_symbol_info {scalar_t__ language; char* name; TYPE_2__ language_specific; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

char *
FUNC_0 (const struct general_symbol_info *VAR_3)
{
  if ((VAR_3->language == VAR_0
       || VAR_3->language == VAR_1
       || VAR_3->language == VAR_2)
      && (VAR_3->language_specific.cplus_specific.demangled_name != ((void*)0)))
    {
      return VAR_3->language_specific.cplus_specific.demangled_name;
    }
  else
    {
      return VAR_3->name;
    }
}

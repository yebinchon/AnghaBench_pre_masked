
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct obstack {int dummy; } ;
struct TYPE_3__ {int * demangled_name; } ;
struct TYPE_4__ {TYPE_1__ cplus_specific; } ;
struct general_symbol_info {char* name; scalar_t__ language; TYPE_2__ language_specific; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (char*,int ,struct obstack*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (struct general_symbol_info*,char*) ;
 int FUNC_3 (char*) ;

void
FUNC_4 (struct general_symbol_info *VAR_3,
                            struct obstack *VAR_4)
{
  char *VAR_5 = VAR_3->name;
  char *VAR_6 = ((void*)0);

  VAR_6 = FUNC_2 (VAR_3, VAR_5);
  if (VAR_3->language == VAR_0
      || VAR_3->language == VAR_1
      || VAR_3->language == VAR_2)
    {
      if (VAR_6)
 {
   VAR_3->language_specific.cplus_specific.demangled_name
     = FUNC_0 (VAR_6, FUNC_1 (VAR_6), VAR_4);
   FUNC_3 (VAR_6);
 }
      else
 VAR_3->language_specific.cplus_specific.demangled_name = ((void*)0);
    }
  else
    {

      if (VAR_6)
 FUNC_3 (VAR_6);
    }
}

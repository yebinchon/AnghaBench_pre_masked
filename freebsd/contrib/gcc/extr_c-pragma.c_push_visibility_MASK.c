
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int inpragma; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,char*) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;

void
FUNC_3 (const char *VAR_9)
{
  FUNC_1 (VAR_6, VAR_5, VAR_8,
   VAR_4);
  if (!FUNC_2 (VAR_9, "default"))
    VAR_4 = VAR_0;
  else if (!FUNC_2 (VAR_9, "internal"))
    VAR_4 = VAR_2;
  else if (!FUNC_2 (VAR_9, "hidden"))
    VAR_4 = VAR_1;
  else if (!FUNC_2 (VAR_9, "protected"))
    VAR_4 = VAR_3;
  else
    FUNC_0 ("#pragma GCC visibility push() must specify default, internal, hidden or protected");
  VAR_7.inpragma = 1;
}

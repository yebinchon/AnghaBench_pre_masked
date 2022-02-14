
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_10__ {int flags; } ;
typedef TYPE_1__ c_pretty_printer ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,char) ;
 scalar_t__ VAR_1 ;

void
FUNC_12 (c_pretty_printer *VAR_2, tree VAR_3)
{
  bool VAR_4 = FUNC_1 (VAR_3) && !(VAR_2->flags & VAR_0);
  tree VAR_5 = VAR_4 ? FUNC_0 (VAR_3) : FUNC_4 (VAR_3);
  FUNC_7 (VAR_2);
  if (VAR_5 == VAR_1)
    FUNC_6 (VAR_2, "void");
  else
    {
      bool VAR_6 = 1;
      for ( ; VAR_5 && VAR_5 != VAR_1; VAR_5 = FUNC_2 (VAR_5))
 {
   if (!VAR_6)
     FUNC_11 (VAR_2, ',');
   VAR_6 = 0;
   FUNC_9
     (VAR_2, VAR_4 ? VAR_5 : FUNC_3 (VAR_5));
   if (VAR_4)
     FUNC_10 (VAR_2, VAR_5);
   else
     FUNC_5 (VAR_2, FUNC_3 (VAR_5));
 }
    }
  FUNC_8 (VAR_2);
}

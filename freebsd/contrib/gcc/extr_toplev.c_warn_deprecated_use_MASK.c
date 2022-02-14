
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct TYPE_3__ {int line; int file; } ;
typedef TYPE_1__ expanded_location ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 char* FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 TYPE_1__ FUNC_8 (int ) ;
 int VAR_3 ;
 int FUNC_9 (int ,char*,...) ;

void
FUNC_10 (tree VAR_4)
{
  if (VAR_4 == 0 || !VAR_3)
    return;

  if (FUNC_1 (VAR_4))
    {
      expanded_location VAR_5 = FUNC_8 (FUNC_2 (VAR_4));
      FUNC_9 (VAR_1,
        "%qs is deprecated (declared at %s:%d)",
        FUNC_3 (FUNC_0 (VAR_4)),
        VAR_5.file, VAR_5.line);
    }
  else if (FUNC_6 (VAR_4))
    {
      const char *VAR_6 = ((void*)0);
      tree VAR_7 = FUNC_7 (VAR_4);

      if (FUNC_5 (VAR_4))
 {
   if (FUNC_4 (FUNC_5 (VAR_4)) == VAR_0)
     VAR_6 = FUNC_3 (FUNC_5 (VAR_4));
   else if (FUNC_4 (FUNC_5 (VAR_4)) == VAR_2
     && FUNC_0 (FUNC_5 (VAR_4)))
     VAR_6 = FUNC_3 (FUNC_0 (FUNC_5 (VAR_4)));
 }

      if (VAR_7)
 {
   expanded_location VAR_8
     = FUNC_8 (FUNC_2 (VAR_7));
   if (VAR_6)
     FUNC_9 (VAR_1,
       "%qs is deprecated (declared at %s:%d)", VAR_6,
       VAR_8.file, VAR_8.line);
   else
     FUNC_9 (VAR_1,
       "type is deprecated (declared at %s:%d)",
       VAR_8.file, VAR_8.line);
 }
      else
 {
   if (VAR_6)
     FUNC_9 (VAR_1, "%qs is deprecated", VAR_6);
   else
     FUNC_9 (VAR_1, "type is deprecated");
 }
    }
}

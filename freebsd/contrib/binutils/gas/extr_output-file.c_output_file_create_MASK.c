
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ bfd_error_type ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ VAR_6 ;
 TYPE_1__* VAR_7 ;

void
FUNC_7 (char *VAR_8)
{
  if (VAR_8[0] == '-' && VAR_8[1] == '\0')
    FUNC_1 (FUNC_0("can't open a bfd on stdout %s"), VAR_8);

  else if (!(VAR_7 = FUNC_4 (VAR_8, VAR_2)))
    {
      bfd_error_type VAR_9 = FUNC_3 ();

      if (VAR_9 == VAR_4)
 FUNC_1 (FUNC_0("selected target format '%s' unknown"), VAR_2);
      else
 FUNC_1 (FUNC_0("can't create %s: %s"), VAR_8, FUNC_2 (VAR_9));
    }

  FUNC_6 (VAR_7, VAR_5);
  FUNC_5 (VAR_7, VAR_1, VAR_3);
  if (VAR_6)
    VAR_7->flags |= VAR_0;
}

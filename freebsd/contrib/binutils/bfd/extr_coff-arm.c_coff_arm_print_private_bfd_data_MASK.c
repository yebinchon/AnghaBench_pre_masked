
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd_boolean ;
typedef int bfd ;
struct TYPE_2__ {int flags; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int VAR_0 ;
 char* FUNC_7 (char*) ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (char,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_11 (bfd * VAR_1, void * VAR_2)
{
  FILE * VAR_3 = (FILE *) VAR_2;

  FUNC_3 (VAR_1 != ((void*)0) && VAR_2 != ((void*)0));


  FUNC_9 (VAR_3, FUNC_7("private flags = %x:"), FUNC_8 (VAR_1)->flags);

  if (FUNC_2 (VAR_1))
    {

      FUNC_9 (VAR_3, " [APCS-%d]", FUNC_0 (VAR_1) ? 26 : 32);

      if (FUNC_1 (VAR_1))
 FUNC_9 (VAR_3, FUNC_7(" [floats passed in float registers]"));
      else
 FUNC_9 (VAR_3, FUNC_7(" [floats passed in integer registers]"));

      if (FUNC_6 (VAR_1))
 FUNC_9 (VAR_3, FUNC_7(" [position independent]"));
      else
 FUNC_9 (VAR_3, FUNC_7(" [absolute position]"));
    }

  if (! FUNC_5 (VAR_1))
    FUNC_9 (VAR_3, FUNC_7(" [interworking flag not initialised]"));
  else if (FUNC_4 (VAR_1))
    FUNC_9 (VAR_3, FUNC_7(" [interworking supported]"));
  else
    FUNC_9 (VAR_3, FUNC_7(" [interworking not supported]"));

  FUNC_10 ('\n', VAR_3);

  return VAR_0;
}

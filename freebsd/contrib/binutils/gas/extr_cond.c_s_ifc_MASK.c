
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct conditional_frame {int ignoring; TYPE_1__* previous_cframe; scalar_t__ dead_tree; } ;
typedef int cframe ;
struct TYPE_2__ {int ignoring; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 struct conditional_frame* VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 char* FUNC_4 (char,int*) ;
 int FUNC_5 (struct conditional_frame*) ;
 char* VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,char) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int *,struct conditional_frame*,int) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;

void
FUNC_11 (int VAR_4)
{
  char *VAR_5 = ((void*)0);
  char VAR_6;
  char *VAR_7, *VAR_8;
  int VAR_9, VAR_10;
  int VAR_11;
  struct conditional_frame VAR_12;

  if (VAR_2)
    VAR_5 = FUNC_8 (&VAR_6);

  VAR_7 = FUNC_4 (',', &VAR_9);

  if (*VAR_3 != ',')
    FUNC_2 (FUNC_1("bad format for ifc or ifnc"));
  else
    ++VAR_3;

  VAR_8 = FUNC_4 (';', &VAR_10);

  VAR_11 = VAR_9 == VAR_10 && FUNC_10 (VAR_7, VAR_8, VAR_9) == 0;

  FUNC_5 (&VAR_12);
  VAR_12.ignoring = VAR_12.dead_tree || ! (VAR_11 ^ VAR_4);
  VAR_1 = ((struct conditional_frame *)
      FUNC_9 (&VAR_0, &VAR_12, sizeof (VAR_12)));

  if (FUNC_0 ()
      && VAR_12.ignoring
      && (VAR_12.previous_cframe == ((void*)0)
   || ! VAR_12.previous_cframe->ignoring))
    FUNC_6 (2);

  if (VAR_2)
    FUNC_7 (VAR_5, VAR_6);

  FUNC_3 ();
}

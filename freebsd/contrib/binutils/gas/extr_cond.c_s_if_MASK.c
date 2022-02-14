
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct conditional_frame {int ignoring; TYPE_1__* previous_cframe; scalar_t__ dead_tree; } ;
typedef int operatorT ;
struct TYPE_5__ {scalar_t__ X_add_number; scalar_t__ X_op; } ;
typedef TYPE_2__ expressionS ;
typedef int cframe ;
struct TYPE_4__ {int ignoring; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;






 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 struct conditional_frame* VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct conditional_frame*) ;
 scalar_t__* VAR_4 ;
 int * VAR_5 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char) ;
 char* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int *,struct conditional_frame*,int) ;

void
FUNC_12 (int VAR_6)
{
  expressionS VAR_7;
  struct conditional_frame VAR_8;
  int VAR_9;
  char *VAR_10 = ((void*)0);
  char VAR_11;

  if (VAR_3)
    VAR_10 = FUNC_10 (&VAR_11);


  FUNC_1 ();

  if (VAR_2 != ((void*)0) && VAR_2->ignoring)
    {
      VAR_7.X_add_number = 0;
      while (! VAR_5[(unsigned char) *VAR_4])
 ++VAR_4;
    }
  else
    {
      FUNC_6 (&VAR_7);
      if (VAR_7.X_op != VAR_0)
 FUNC_4 (FUNC_2("non-constant expression in \".if\" statement"));
    }

  switch ((operatorT) VAR_6)
    {
    case 133: VAR_9 = VAR_7.X_add_number == 0; break;
    case 128: VAR_9 = VAR_7.X_add_number != 0; break;
    case 129: VAR_9 = VAR_7.X_add_number < 0; break;
    case 130: VAR_9 = VAR_7.X_add_number <= 0; break;
    case 132: VAR_9 = VAR_7.X_add_number >= 0; break;
    case 131: VAR_9 = VAR_7.X_add_number > 0; break;
    default:
      FUNC_3 ();
      return;
    }



  FUNC_7 (&VAR_8);
  VAR_8.ignoring = VAR_8.dead_tree || ! VAR_9;
  VAR_2 = ((struct conditional_frame *)
      FUNC_11 (&VAR_1, &VAR_8, sizeof (VAR_8)));

  if (FUNC_0 ()
      && VAR_8.ignoring
      && (VAR_8.previous_cframe == ((void*)0)
   || ! VAR_8.previous_cframe->ignoring))
    FUNC_8 (2);

  if (VAR_3)
    FUNC_9 (VAR_10, VAR_11);

  FUNC_5 ();
}

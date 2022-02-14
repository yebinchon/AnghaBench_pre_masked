
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int operatorT ;
struct TYPE_10__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_4__ expressionS ;
struct TYPE_8__ {int line; int file; } ;
struct TYPE_7__ {int line; int file; } ;
struct TYPE_11__ {int dead_tree; int ignoring; TYPE_3__* previous_cframe; TYPE_2__ else_file_line; TYPE_1__ if_file_line; scalar_t__ else_seen; } ;
struct TYPE_9__ {int ignoring; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;






 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 TYPE_6__* VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_4__*) ;
 scalar_t__* VAR_2 ;
 int * VAR_3 ;
 int FUNC_9 (int) ;

void
FUNC_10 (int VAR_4)
{
  if (VAR_1 == ((void*)0))
    {
      FUNC_4 (FUNC_2("\".elseif\" without matching \".if\""));
    }
  else if (VAR_1->else_seen)
    {
      FUNC_4 (FUNC_2("\".elseif\" after \".else\""));
      FUNC_5 (VAR_1->else_file_line.file,
      VAR_1->else_file_line.line,
      FUNC_2("here is the previous \"else\""));
      FUNC_5 (VAR_1->if_file_line.file,
      VAR_1->if_file_line.line,
      FUNC_2("here is the previous \"if\""));
    }
  else
    {
      FUNC_6 (&VAR_1->else_file_line.file,
  &VAR_1->else_file_line.line);

      VAR_1->dead_tree |= !VAR_1->ignoring;
      VAR_1->ignoring = VAR_1->dead_tree;
    }

  if (VAR_1 == ((void*)0) || VAR_1->ignoring)
    {
      while (! VAR_3[(unsigned char) *VAR_2])
 ++VAR_2;

      if (VAR_1 == ((void*)0))
 return;
    }
  else
    {
      expressionS VAR_5;
      int VAR_6;


      FUNC_1 ();

      FUNC_8 (&VAR_5);
      if (VAR_5.X_op != VAR_0)
 FUNC_4 (FUNC_2("non-constant expression in \".elseif\" statement"));

      switch ((operatorT) VAR_4)
 {
 case 133: VAR_6 = VAR_5.X_add_number == 0; break;
 case 128: VAR_6 = VAR_5.X_add_number != 0; break;
 case 129: VAR_6 = VAR_5.X_add_number < 0; break;
 case 130: VAR_6 = VAR_5.X_add_number <= 0; break;
 case 132: VAR_6 = VAR_5.X_add_number >= 0; break;
 case 131: VAR_6 = VAR_5.X_add_number > 0; break;
 default:
   FUNC_3 ();
   return;
 }

      VAR_1->ignoring = VAR_1->dead_tree || ! VAR_6;
    }

  if (FUNC_0 ()
      && (VAR_1->previous_cframe == ((void*)0)
   || ! VAR_1->previous_cframe->ignoring))
    {
      if (! VAR_1->ignoring)
 FUNC_9 (1);
      else
 FUNC_9 (2);
    }

  FUNC_7 ();
}

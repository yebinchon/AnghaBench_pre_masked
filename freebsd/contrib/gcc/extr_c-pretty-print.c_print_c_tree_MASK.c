
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef int pp_needs_newline ;
typedef int c_pretty_printer ;
struct TYPE_5__ {TYPE_1__* buffer; } ;
struct TYPE_4__ {int * stream; } ;
typedef int FILE ;


 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6 (FILE *VAR_0, tree VAR_1)
{
  static c_pretty_printer VAR_2;
  static bool VAR_3 = 0;
  c_pretty_printer *VAR_4 = &VAR_2;

  if (!VAR_3)
    {
      VAR_3 = 1;
      FUNC_2 (FUNC_0 (VAR_4), ((void*)0), 0);
      FUNC_1 (VAR_4);
      pp_needs_newline (VAR_5) = 1;
    }
  FUNC_0 (VAR_4)->buffer->stream = VAR_0;

  FUNC_5 (VAR_4, VAR_1);

  FUNC_4 (VAR_4);
  FUNC_3 (VAR_4);
}

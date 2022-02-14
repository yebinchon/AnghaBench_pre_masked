
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int undef; int define; int read_pch; int valid_pch; int include; int def_pragma; int ident; int line_change; } ;
typedef TYPE_1__ cpp_callbacks ;
struct TYPE_7__ {scalar_t__ lang; } ;
struct TYPE_6__ {int src_line; int first_time; int * outf; scalar_t__ prev; scalar_t__ printed; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ VAR_9 ;
 char VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;

void
FUNC_2 (FILE *VAR_15)
{
  cpp_callbacks *VAR_16 = FUNC_0 (VAR_13);

  if (!VAR_11)
    {
      VAR_16->line_change = VAR_6;


      if (FUNC_1 (VAR_13)->lang != VAR_0)
 {
   VAR_16->ident = VAR_4;
   VAR_16->def_pragma = VAR_2;
 }
    }

  if (VAR_9)
    VAR_16->include = VAR_5;

  if (VAR_12)
    {
      VAR_16->valid_pch = VAR_1;
      VAR_16->read_pch = VAR_7;
    }

  if (VAR_10 == 'N' || VAR_10 == 'D')
    {
      VAR_16->define = VAR_3;
      VAR_16->undef = VAR_8;
    }




  VAR_14.src_line = -1;
  VAR_14.printed = 0;
  VAR_14.prev = 0;
  VAR_14.outf = VAR_15;
  VAR_14.first_time = 1;
}

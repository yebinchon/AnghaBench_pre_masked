
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* ddg_edge_ptr ;
struct TYPE_7__ {int type; int latency; int distance; TYPE_1__* dest; TYPE_2__* src; } ;
struct TYPE_6__ {int insn; } ;
struct TYPE_5__ {int insn; } ;
typedef int FILE ;



 int FUNC_0 (int ) ;

 int FUNC_1 (int *,char*,int,char,int,int,int) ;

void
FUNC_2 (FILE *VAR_0, ddg_edge_ptr VAR_1)
{
  char VAR_2;

  switch (VAR_1->type) {
    case 128 :
      VAR_2 = 'O';
      break;
    case 129 :
      VAR_2 = 'A';
      break;
    default:
      VAR_2 = 'T';
  }

  FUNC_1 (VAR_0, " [%d -(%c,%d,%d)-> %d] ", FUNC_0 (VAR_1->src->insn),
    VAR_2, VAR_1->latency, VAR_1->distance, FUNC_0 (VAR_1->dest->insn));
}

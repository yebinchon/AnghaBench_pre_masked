
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union node {int dummy; } node ;
struct heredoc {TYPE_2__* here; int striptabs; int eofmark; struct heredoc* next; } ;
struct TYPE_3__ {union node* doc; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ nhere; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct heredoc* VAR_3 ;
 union node* FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(void)
{
 struct heredoc *VAR_5;
 union node *VAR_6;

 while (VAR_3) {
  VAR_5 = VAR_3;
  VAR_3 = VAR_5->next;
  if (VAR_4) {
   FUNC_3(2);
   VAR_4 = 0;
  }
  FUNC_2(FUNC_1(), VAR_5->here->type == VAR_1? VAR_2 : VAR_0,
    VAR_5->eofmark, VAR_5->striptabs);
  VAR_6 = FUNC_0();
  VAR_5->here->nhere.doc = VAR_6;
 }
}

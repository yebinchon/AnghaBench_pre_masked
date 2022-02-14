
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occr {struct occr* next; int insn; } ;
struct expr {int hash; struct occr* avail_occr; int expr; } ;
typedef int rtx ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3 (void **VAR_0, void *VAR_1)
{
  struct expr *VAR_2 = (struct expr *) *VAR_0;
  FILE *VAR_3 = (FILE *) VAR_1;
  struct occr *VAR_4;

  FUNC_0 (VAR_3, "expr: ");
  FUNC_1 (VAR_3, VAR_2->expr);
  FUNC_0 (VAR_3,"\nhashcode: %u\n", VAR_2->hash);
  FUNC_0 (VAR_3,"list of occurrences:\n");
  VAR_4 = VAR_2->avail_occr;
  while (VAR_4)
    {
      rtx VAR_5 = VAR_4->insn;
      FUNC_2 (VAR_3, VAR_5);
      FUNC_0 (VAR_3, "\n");
      VAR_4 = VAR_4->next;
    }
  FUNC_0 (VAR_3, "\n");
  return 1;
}

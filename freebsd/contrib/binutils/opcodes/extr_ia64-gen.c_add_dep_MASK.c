
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdep {int semantics; char* extra; int waw_special; int regnotes; int nregs; int regs; int chknotes; int nchks; int chks; } ;


 struct rdep* FUNC_0 (char const*,int) ;
 int FUNC_1 (char const*,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_2 (const char *VAR_0, const char *VAR_1, const char *VAR_2,
         int VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
  struct rdep *VAR_7;

  VAR_7 = FUNC_0 (VAR_0, VAR_4);

  FUNC_1 (VAR_1, &VAR_7->chks, &VAR_7->nchks, &VAR_7->chknotes);
  FUNC_1 (VAR_2, &VAR_7->regs, &VAR_7->nregs, &VAR_7->regnotes);

  VAR_7->semantics = VAR_3;
  VAR_7->extra = VAR_5;
  VAR_7->waw_special = VAR_6;
}

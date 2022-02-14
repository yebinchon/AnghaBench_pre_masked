
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reload {int dummy; } ;
struct insn_chain {int n_reloads; void* rld; } ;


 int FUNC_0 (void*,int ,int) ;
 int VAR_0 ;
 void* FUNC_1 (int *,int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (struct insn_chain *VAR_4)
{
  VAR_4->n_reloads = VAR_0;
  VAR_4->rld = FUNC_1 (&VAR_2,
         VAR_0 * sizeof (struct reload));
  FUNC_0 (VAR_4->rld, VAR_3, VAR_0 * sizeof (struct reload));
  VAR_1 = FUNC_1 (&VAR_2, 0);
}

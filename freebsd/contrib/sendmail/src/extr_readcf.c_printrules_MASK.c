
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rewrite {int r_rhs; int r_lhs; struct rewrite* r_next; } ;


 struct rewrite** VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;

void
FUNC_3()
{
 register struct rewrite *VAR_1;
 register int VAR_2;

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++)
 {
  if (VAR_0[VAR_2] == ((void*)0))
   continue;
  FUNC_2("\n----Rule Set %d:", VAR_2);

  for (VAR_1 = VAR_0[VAR_2]; VAR_1 != ((void*)0); VAR_1 = VAR_1->r_next)
  {
   FUNC_2("\nLHS:");
   FUNC_0(FUNC_1(), VAR_1->r_lhs);
   FUNC_2("RHS:");
   FUNC_0(FUNC_1(), VAR_1->r_rhs);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int depth; scalar_t__* pcs; } ;
typedef int namebuf ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int,void*,char*,long) ;
 int FUNC_2 (scalar_t__,char*,int,long*,int ) ;

void
FUNC_3(const struct stack *VAR_2)
{
 char VAR_3[64];
 long VAR_4;
 int VAR_5;

 FUNC_0(VAR_2->depth <= VAR_1, ("bogus stack"));
 for (VAR_5 = 0; VAR_5 < VAR_2->depth; VAR_5++) {
  (void)FUNC_2(VAR_2->pcs[VAR_5], VAR_3, sizeof(VAR_3),
      &VAR_4, VAR_0);
  FUNC_1("#%d %p at %s+%#lx\n", VAR_5, (void *)VAR_2->pcs[VAR_5],
      VAR_3, VAR_4);
 }
}

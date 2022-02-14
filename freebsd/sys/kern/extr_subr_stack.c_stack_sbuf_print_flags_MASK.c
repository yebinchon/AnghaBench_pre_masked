
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int depth; scalar_t__* pcs; } ;
struct sbuf {int dummy; } ;
typedef int namebuf ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct sbuf*,char*,int,void*,char*,long) ;
 int FUNC_2 (scalar_t__,char*,int,long*,int) ;

int
FUNC_3(struct sbuf *VAR_2, const struct stack *VAR_3, int VAR_4)
{
 char VAR_5[64];
 long VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_3->depth <= VAR_1, ("bogus stack"));
 for (VAR_7 = 0; VAR_7 < VAR_3->depth; VAR_7++) {
  VAR_8 = FUNC_2(VAR_3->pcs[VAR_7], VAR_5, sizeof(VAR_5),
      &VAR_6, VAR_4);
  if (VAR_8 == VAR_0)
   return (VAR_8);
  FUNC_1(VAR_2, "#%d %p at %s+%#lx\n", VAR_7, (void *)VAR_3->pcs[VAR_7],
      VAR_5, VAR_6);
 }
 return (0);
}

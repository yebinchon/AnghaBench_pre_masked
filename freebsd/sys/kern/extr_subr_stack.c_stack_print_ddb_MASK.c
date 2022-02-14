
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int depth; scalar_t__* pcs; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,void*,char const*,long) ;
 int FUNC_2 (scalar_t__,char const**,long*) ;

void
FUNC_3(const struct stack *VAR_1)
{
 const char *VAR_2;
 long VAR_3;
 int VAR_4;

 FUNC_0(VAR_1->depth <= VAR_0, ("bogus stack"));
 for (VAR_4 = 0; VAR_4 < VAR_1->depth; VAR_4++) {
  FUNC_2(VAR_1->pcs[VAR_4], &VAR_2, &VAR_3);
  FUNC_1("#%d %p at %s+%#lx\n", VAR_4, (void *)VAR_1->pcs[VAR_4],
      VAR_2, VAR_3);
 }
}

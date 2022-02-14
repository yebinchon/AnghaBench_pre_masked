
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdnames {unsigned int cnt; int * names; int alloc; } ;


 int FUNC_0 (int *,unsigned int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct cmdnames *VAR_0, struct cmdnames *VAR_1)
{
 unsigned int VAR_2;

 FUNC_0(VAR_0->names, VAR_0->cnt + VAR_1->cnt, VAR_0->alloc);

 for (VAR_2 = 0; VAR_2 < VAR_1->cnt; VAR_2++)
  VAR_0->names[VAR_0->cnt++] = VAR_1->names[VAR_2];
 FUNC_1(VAR_1->names);
 VAR_1->cnt = 0;
 VAR_1->names = ((void*)0);
}

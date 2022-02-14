
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int num; struct loop** parray; } ;
struct loop {int num; } ;


 struct loop** FUNC_0 (struct loop**,int) ;

__attribute__((used)) static void
FUNC_1 (struct loops *VAR_0, struct loop *VAR_1)
{
  VAR_0->parray =
    FUNC_0 (VAR_0->parray, (VAR_0->num + 1) * sizeof (struct loop *));
  VAR_0->parray[VAR_0->num] = VAR_1;

  VAR_1->num = VAR_0->num++;
}

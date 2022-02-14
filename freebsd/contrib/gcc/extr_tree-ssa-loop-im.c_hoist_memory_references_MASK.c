
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref {struct mem_ref* next; } ;
struct loop {int dummy; } ;
typedef int edge ;
typedef int bitmap ;


 int FUNC_0 (struct loop*,int *,unsigned int,int ,struct mem_ref*) ;

__attribute__((used)) static void
FUNC_1 (struct loop *VAR_0, struct mem_ref *VAR_1,
    bitmap VAR_2, edge *VAR_3, unsigned VAR_4)
{
  struct mem_ref *VAR_5;

  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
    FUNC_0 (VAR_0, VAR_3, VAR_4, VAR_2, VAR_5);
}

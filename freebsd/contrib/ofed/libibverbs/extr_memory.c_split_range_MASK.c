
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {uintptr_t start; uintptr_t end; int refcnt; } ;


 int FUNC_0 (struct ibv_mem_node*) ;
 struct ibv_mem_node* FUNC_1 (int) ;

__attribute__((used)) static struct ibv_mem_node *FUNC_2(struct ibv_mem_node *VAR_0,
     uintptr_t VAR_1)
{
 struct ibv_mem_node *VAR_2 = ((void*)0);

 VAR_2 = FUNC_1(sizeof *VAR_2);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->start = VAR_1;
 VAR_2->end = VAR_0->end;
 VAR_2->refcnt = VAR_0->refcnt;
 VAR_0->end = VAR_1 - 1;
 FUNC_0(VAR_2);

 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {int refcnt; int end; } ;


 int FUNC_0 (struct ibv_mem_node*) ;

__attribute__((used)) static struct ibv_mem_node *FUNC_1(struct ibv_mem_node *VAR_0,
      struct ibv_mem_node *VAR_1)
{
 VAR_1->end = VAR_0->end;
 VAR_1->refcnt = VAR_0->refcnt;
 FUNC_0(VAR_0);

 return VAR_1;
}

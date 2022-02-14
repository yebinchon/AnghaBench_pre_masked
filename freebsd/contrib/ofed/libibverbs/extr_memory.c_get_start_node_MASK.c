
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mem_node {uintptr_t start; scalar_t__ refcnt; } ;


 struct ibv_mem_node* FUNC_0 (uintptr_t,uintptr_t) ;
 struct ibv_mem_node* FUNC_1 (struct ibv_mem_node*) ;
 struct ibv_mem_node* FUNC_2 (struct ibv_mem_node*,struct ibv_mem_node*) ;
 struct ibv_mem_node* FUNC_3 (struct ibv_mem_node*,uintptr_t) ;

__attribute__((used)) static struct ibv_mem_node *FUNC_4(uintptr_t VAR_0, uintptr_t VAR_1,
        int VAR_2)
{
 struct ibv_mem_node *VAR_3, *VAR_4 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (VAR_3->start < VAR_0)
  VAR_3 = FUNC_3(VAR_3, VAR_0);
 else {
  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 && VAR_4->refcnt == VAR_3->refcnt + VAR_2)
   VAR_3 = FUNC_2(VAR_3, VAR_4);
 }
 return VAR_3;
}

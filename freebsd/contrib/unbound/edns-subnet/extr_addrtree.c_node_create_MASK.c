
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct addrtree {int node_count; } ;
struct addrnode {int * prev; int * next; int * parent_edge; int ** edge; int ttl; int scope; void* elem; } ;
typedef int addrlen_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct addrnode *
FUNC_1(struct addrtree *VAR_0, void *VAR_1, addrlen_t VAR_2,
 time_t VAR_3)
{
 struct addrnode* VAR_4 = (struct addrnode *)FUNC_0( sizeof (*VAR_4) );
 if (!VAR_4)
  return ((void*)0);
 VAR_4->elem = VAR_1;
 VAR_0->node_count++;
 VAR_4->scope = VAR_2;
 VAR_4->ttl = VAR_3;
 VAR_4->edge[0] = ((void*)0);
 VAR_4->edge[1] = ((void*)0);
 VAR_4->parent_edge = ((void*)0);
 VAR_4->next = ((void*)0);
 VAR_4->prev = ((void*)0);
 return VAR_4;
}

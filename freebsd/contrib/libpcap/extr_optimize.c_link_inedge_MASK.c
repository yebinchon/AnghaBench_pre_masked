
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edge {struct edge* next; } ;
struct block {struct edge* in_edges; } ;



__attribute__((used)) static inline void
FUNC_0(struct edge *VAR_0, struct block *VAR_1)
{
 VAR_0->next = VAR_1->in_edges;
 VAR_1->in_edges = VAR_0;
}

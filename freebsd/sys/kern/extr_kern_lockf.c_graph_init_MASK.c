
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owner_vertex {int dummy; } ;
struct owner_graph {int g_space; scalar_t__ g_gen; void* g_indexbuf; scalar_t__ g_size; void* g_vertices; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int ,int ) ;

__attribute__((used)) static struct owner_graph *
FUNC_1(struct owner_graph *VAR_2)
{

 VAR_2->g_vertices = FUNC_0(10 * sizeof(struct owner_vertex *),
     VAR_0, VAR_1);
 VAR_2->g_size = 0;
 VAR_2->g_space = 10;
 VAR_2->g_indexbuf = FUNC_0(VAR_2->g_space * sizeof(int), VAR_0, VAR_1);
 VAR_2->g_gen = 0;

 return (VAR_2);
}

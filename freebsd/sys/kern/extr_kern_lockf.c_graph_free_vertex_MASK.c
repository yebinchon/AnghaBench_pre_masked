
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owner_vertex {int v_order; int v_inedges; int v_outedges; } ;
struct owner_graph {int g_size; struct owner_vertex** g_vertices; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct owner_vertex*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct owner_graph *VAR_3, struct owner_vertex *VAR_4)
{
 struct owner_vertex *VAR_5;
 int VAR_6;

 FUNC_3(&VAR_2, VAR_1);

 FUNC_0(FUNC_1(&VAR_4->v_outedges), ("Freeing vertex with edges"));
 FUNC_0(FUNC_1(&VAR_4->v_inedges), ("Freeing vertex with edges"));





 for (VAR_6 = VAR_4->v_order + 1; VAR_6 < VAR_3->g_size; VAR_6++) {
  VAR_5 = VAR_3->g_vertices[VAR_6];
  VAR_5->v_order--;
  VAR_3->g_vertices[VAR_6 - 1] = VAR_5;
 }
 VAR_3->g_size--;

 FUNC_2(VAR_4, VAR_0);
}

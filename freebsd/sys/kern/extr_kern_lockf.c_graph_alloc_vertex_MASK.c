
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct owner_vertex {size_t v_order; struct lock_owner* v_owner; int v_inedges; int v_outedges; int v_gen; } ;
struct owner_graph {size_t g_size; size_t g_space; struct owner_vertex** g_vertices; int g_gen; void* g_indexbuf; } ;
struct lock_owner {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ) ;
 int VAR_3 ;
 void* FUNC_2 (int,int ,int ) ;
 struct owner_vertex** FUNC_3 (struct owner_vertex**,int,int ,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static struct owner_vertex *
FUNC_5(struct owner_graph *VAR_4, struct lock_owner *VAR_5)
{
 struct owner_vertex *VAR_6;

 FUNC_4(&VAR_3, VAR_2);

 VAR_6 = FUNC_2(sizeof(struct owner_vertex), VAR_0, VAR_1);
 if (VAR_4->g_size == VAR_4->g_space) {
  VAR_4->g_vertices = FUNC_3(VAR_4->g_vertices,
      2 * VAR_4->g_space * sizeof(struct owner_vertex *),
      VAR_0, VAR_1);
  FUNC_1(VAR_4->g_indexbuf, VAR_0);
  VAR_4->g_indexbuf = FUNC_2(2 * VAR_4->g_space * sizeof(int),
      VAR_0, VAR_1);
  VAR_4->g_space = 2 * VAR_4->g_space;
 }
 VAR_6->v_order = VAR_4->g_size;
 VAR_6->v_gen = VAR_4->g_gen;
 VAR_4->g_vertices[VAR_4->g_size] = VAR_6;
 VAR_4->g_size++;

 FUNC_0(&VAR_6->v_outedges);
 FUNC_0(&VAR_6->v_inedges);
 VAR_6->v_owner = VAR_5;

 return (VAR_6);
}

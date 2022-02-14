
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vmapinfo {int dummy; } ;
struct valnode {int dummy; } ;
struct icode {int root; } ;
struct edge {int id; struct block* pred; int * edom; } ;
struct block {int stmts; struct edge ef; struct edge et; int * closure; int * dom; } ;
struct TYPE_4__ {int n_blocks; int n_edges; int edgewords; int nodewords; int maxval; struct valnode* vnode_base; struct vmapinfo* vmap; struct block** blocks; struct edge** edges; int * all_edge_sets; int * all_closure_sets; int * all_dom_sets; int * space; struct block** levels; } ;
typedef TYPE_1__ opt_state_t ;
typedef int compiler_state_t ;
typedef int bpf_u_int32 ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (struct icode*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,struct icode*,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct icode*) ;

__attribute__((used)) static void
FUNC_7(compiler_state_t *VAR_0, opt_state_t *VAR_1, struct icode *VAR_2)
{
 bpf_u_int32 *VAR_3;
 int VAR_4, VAR_5, VAR_6;





 FUNC_6(VAR_2);
 VAR_5 = FUNC_2(VAR_2, VAR_2->root);
 VAR_1->blocks = (struct block **)FUNC_1(VAR_5, sizeof(*VAR_1->blocks));
 if (VAR_1->blocks == ((void*)0))
  FUNC_0(VAR_0, "malloc");
 FUNC_6(VAR_2);
 VAR_1->n_blocks = 0;
 FUNC_4(VAR_1, VAR_2, VAR_2->root);

 VAR_1->n_edges = 2 * VAR_1->n_blocks;
 VAR_1->edges = (struct edge **)FUNC_1(VAR_1->n_edges, sizeof(*VAR_1->edges));
 if (VAR_1->edges == ((void*)0))
  FUNC_0(VAR_0, "malloc");




 VAR_1->levels = (struct block **)FUNC_1(VAR_1->n_blocks, sizeof(*VAR_1->levels));
 if (VAR_1->levels == ((void*)0))
  FUNC_0(VAR_0, "malloc");

 VAR_1->edgewords = VAR_1->n_edges / (8 * sizeof(bpf_u_int32)) + 1;
 VAR_1->nodewords = VAR_1->n_blocks / (8 * sizeof(bpf_u_int32)) + 1;


 VAR_1->space = (bpf_u_int32 *)FUNC_3(2 * VAR_1->n_blocks * VAR_1->nodewords * sizeof(*VAR_1->space)
     + VAR_1->n_edges * VAR_1->edgewords * sizeof(*VAR_1->space));
 if (VAR_1->space == ((void*)0))
  FUNC_0(VAR_0, "malloc");
 VAR_3 = VAR_1->space;
 VAR_1->all_dom_sets = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  VAR_1->blocks[VAR_4]->dom = VAR_3;
  VAR_3 += VAR_1->nodewords;
 }
 VAR_1->all_closure_sets = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  VAR_1->blocks[VAR_4]->closure = VAR_3;
  VAR_3 += VAR_1->nodewords;
 }
 VAR_1->all_edge_sets = VAR_3;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4) {
  register struct block *VAR_7 = VAR_1->blocks[VAR_4];

  VAR_7->et.edom = VAR_3;
  VAR_3 += VAR_1->edgewords;
  VAR_7->ef.edom = VAR_3;
  VAR_3 += VAR_1->edgewords;
  VAR_7->et.id = VAR_4;
  VAR_1->edges[VAR_4] = &VAR_7->et;
  VAR_7->ef.id = VAR_1->n_blocks + VAR_4;
  VAR_1->edges[VAR_1->n_blocks + VAR_4] = &VAR_7->ef;
  VAR_7->et.pred = VAR_7;
  VAR_7->ef.pred = VAR_7;
 }
 VAR_6 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
  VAR_6 += FUNC_5(VAR_1->blocks[VAR_4]->stmts) + 1;





 VAR_1->maxval = 3 * VAR_6;
 VAR_1->vmap = (struct vmapinfo *)FUNC_1(VAR_1->maxval, sizeof(*VAR_1->vmap));
 VAR_1->vnode_base = (struct valnode *)FUNC_1(VAR_1->maxval, sizeof(*VAR_1->vnode_base));
 if (VAR_1->vmap == ((void*)0) || VAR_1->vnode_base == ((void*)0))
  FUNC_0(VAR_0, "malloc");
}

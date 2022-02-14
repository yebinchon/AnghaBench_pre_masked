
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {scalar_t__ dev; int nud_state; } ;
struct elist_cb_state {scalar_t__ dev; scalar_t__ t; scalar_t__ n; int* rs; int ptr; } ;
struct dn_neigh {int flags; int priority; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int* FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct neighbour *VAR_3, void *VAR_4)
{
 struct elist_cb_state *VAR_5 = VAR_4;
 struct dn_neigh *VAR_6;

 if (VAR_3->dev != VAR_5->dev)
  return;

 VAR_6 = (struct dn_neigh *) VAR_3;
 if (!(VAR_6->flags & (VAR_0|VAR_1)))
  return;

 if (VAR_5->t == VAR_5->n)
  VAR_5->rs = FUNC_1(VAR_5->ptr, VAR_5->n, VAR_6->priority);
 else
  VAR_5->t++;
 if (VAR_5->rs == ((void*)0))
  return;

 FUNC_0(VAR_5->rs, VAR_6->addr);
 VAR_5->rs += 6;
 *(VAR_5->rs) = VAR_3->nud_state & VAR_2 ? 0x80 : 0x0;
 *(VAR_5->rs) |= VAR_6->priority;
 VAR_5->rs++;
}

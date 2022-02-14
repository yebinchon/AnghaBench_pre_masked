
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2t_entry {scalar_t__ state; size_t hash; struct l2t_entry* next; struct l2t_entry* first; int refcnt; } ;
struct l2t_data {size_t l2t_size; struct l2t_entry* l2tab; int nfree; struct l2t_entry* rover; int lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

struct l2t_entry *
FUNC_3(struct l2t_data *VAR_3)
{
 struct l2t_entry *VAR_4, *VAR_5, **VAR_6;

 FUNC_2(&VAR_3->lock, VAR_2);

 if (!FUNC_0(&VAR_3->nfree))
  return (((void*)0));


 for (VAR_5 = VAR_3->rover, VAR_4 = &VAR_3->l2tab[VAR_3->l2t_size]; VAR_5 != VAR_4; ++VAR_5)
  if (FUNC_0(&VAR_5->refcnt) == 0)
   goto found;

 for (VAR_5 = VAR_3->l2tab; FUNC_0(&VAR_5->refcnt); ++VAR_5)
  continue;
found:
 VAR_3->rover = VAR_5 + 1;
 FUNC_1(&VAR_3->nfree, 1);





 if (VAR_5->state < VAR_0) {
  for (VAR_6 = &VAR_3->l2tab[VAR_5->hash].first; *VAR_6; VAR_6 = &(*VAR_6)->next) {
   if (*VAR_6 == VAR_5) {
    *VAR_6 = VAR_5->next;
    VAR_5->next = ((void*)0);
    break;
   }
  }
 }

 VAR_5->state = VAR_1;
 return (VAR_5);
}

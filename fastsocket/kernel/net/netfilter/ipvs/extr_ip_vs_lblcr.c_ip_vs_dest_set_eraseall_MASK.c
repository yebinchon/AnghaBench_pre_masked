
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ip_vs_dest_set {int lock; struct ip_vs_dest_list* list; } ;
struct ip_vs_dest_list {TYPE_1__* dest; struct ip_vs_dest_list* next; } ;
struct TYPE_2__ {int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_vs_dest_list*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct ip_vs_dest_set *VAR_0)
{
 struct ip_vs_dest_list *VAR_1, **VAR_2;

 FUNC_2(&VAR_0->lock);
 for (VAR_2=&VAR_0->list, VAR_1=*VAR_2; VAR_1!=((void*)0); VAR_1=*VAR_2) {
  *VAR_2 = VAR_1->next;




  FUNC_0(&VAR_1->dest->refcnt);
  FUNC_1(VAR_1);
 }
 FUNC_3(&VAR_0->lock);
}

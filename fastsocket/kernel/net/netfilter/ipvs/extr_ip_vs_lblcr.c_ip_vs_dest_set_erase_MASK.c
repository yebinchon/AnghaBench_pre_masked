
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest_set {int lastmod; int size; struct ip_vs_dest_list* list; } ;
struct ip_vs_dest_list {struct ip_vs_dest_list* next; struct ip_vs_dest* dest; } ;
struct ip_vs_dest {int refcnt; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct ip_vs_dest_list*) ;

__attribute__((used)) static void
FUNC_2(struct ip_vs_dest_set *VAR_1, struct ip_vs_dest *VAR_2)
{
 struct ip_vs_dest_list *VAR_3, **VAR_4;

 for (VAR_4=&VAR_1->list, VAR_3=*VAR_4; VAR_3!=((void*)0); VAR_3=*VAR_4) {
  if (VAR_3->dest == VAR_2) {

   *VAR_4 = VAR_3->next;
   FUNC_0(&VAR_1->size);
   VAR_1->lastmod = VAR_0;
   FUNC_0(&VAR_3->dest->refcnt);
   FUNC_1(VAR_3);
   break;
  }
  VAR_4 = &VAR_3->next;
 }
}

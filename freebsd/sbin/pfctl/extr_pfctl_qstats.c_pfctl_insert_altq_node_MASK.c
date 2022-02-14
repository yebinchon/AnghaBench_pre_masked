
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue_stats {int * parent; int ifname; } ;
struct pf_altq_node {struct pf_altq_node* next; struct pf_altq_node* children; int qstats; int altq; } ;
struct pf_altq {int * parent; int ifname; } ;
typedef int qstats ;


 struct pf_altq_node* FUNC_0 (int,int) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*,int *) ;
 int FUNC_3 (int *,struct queue_stats const*,int) ;
 struct pf_altq_node* FUNC_4 (struct pf_altq_node*,int *,int ) ;
 int FUNC_5 (struct pf_altq_node*) ;

void
FUNC_6(struct pf_altq_node **VAR_0,
    const struct pf_altq VAR_1, const struct queue_stats VAR_2)
{
 struct pf_altq_node *VAR_3;

 VAR_3 = FUNC_0(1, sizeof(struct pf_altq_node));
 if (VAR_3 == ((void*)0))
  FUNC_1(1, "pfctl_insert_altq_node: calloc");
 FUNC_3(&VAR_3->altq, &VAR_1, sizeof(struct pf_altq));
 FUNC_3(&VAR_3->qstats, &VAR_2, sizeof(VAR_2));
 VAR_3->next = VAR_3->children = ((void*)0);

 if (*VAR_0 == ((void*)0))
  *VAR_0 = VAR_3;
 else if (!VAR_1.parent[0]) {
  struct pf_altq_node *VAR_4 = *VAR_0;

  while (VAR_4->next != ((void*)0))
   VAR_4 = VAR_4->next;
  VAR_4->next = VAR_3;
 } else {
  struct pf_altq_node *VAR_5;

  VAR_5 = FUNC_4(*VAR_0, VAR_1.parent, VAR_1.ifname);
  if (VAR_5 == ((void*)0))
   FUNC_2(1, "parent %s not found", VAR_1.parent);
  if (VAR_5->children == ((void*)0))
   VAR_5->children = VAR_3;
  else {
   struct pf_altq_node *VAR_6 = VAR_5->children;

   while (VAR_6->next != ((void*)0))
    VAR_6 = VAR_6->next;
   VAR_6->next = VAR_3;
  }
 }
 FUNC_5(VAR_3);
}

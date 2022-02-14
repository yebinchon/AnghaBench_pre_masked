
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* qname; int qid; char* ifname; scalar_t__ ifbandwidth; } ;
struct pf_altq_node {struct pf_altq_node* next; struct pf_altq_node* children; TYPE_1__ altq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct pf_altq_node const*) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int *,int *) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (double) ;

void
FUNC_4(int VAR_2, const struct pf_altq_node *VAR_3,
    unsigned int VAR_4, int VAR_5)
{
 const struct pf_altq_node *VAR_6;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_1(&VAR_3->altq, VAR_4, ((void*)0), ((void*)0));

 if (VAR_3->children != ((void*)0)) {
  FUNC_2("{");
  for (VAR_6 = VAR_3->children; VAR_6 != ((void*)0);
      VAR_6 = VAR_6->next) {
   FUNC_2("%s", VAR_6->altq.qname);
   if (VAR_6->next != ((void*)0))
    FUNC_2(", ");
  }
  FUNC_2("}");
 }
 FUNC_2("\n");

 if (VAR_5 & VAR_1)
  FUNC_0(VAR_2, VAR_3);

 if (VAR_5 & VAR_0)
  FUNC_2("  [ qid=%u ifname=%s ifbandwidth=%s ]\n",
      VAR_3->altq.qid, VAR_3->altq.ifname,
      FUNC_3((double)(VAR_3->altq.ifbandwidth)));

 for (VAR_6 = VAR_3->children; VAR_6 != ((void*)0);
     VAR_6 = VAR_6->next)
  FUNC_4(VAR_2, VAR_6, VAR_4 + 1, VAR_5);
}

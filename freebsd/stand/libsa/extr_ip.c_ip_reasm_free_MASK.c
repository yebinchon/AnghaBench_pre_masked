
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_reasm {struct ip_reasm* ip_pkt; struct ip_reasm* ipq_pkt; int ip_queue; } ;
struct ip_queue {struct ip_queue* ip_pkt; struct ip_queue* ipq_pkt; int ip_queue; } ;


 struct ip_reasm* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct ip_reasm*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(struct ip_reasm *VAR_1)
{
 struct ip_queue *VAR_2;

 while ((VAR_2 = FUNC_0(&VAR_1->ip_queue)) != ((void*)0)) {
  FUNC_1(&VAR_1->ip_queue, VAR_0);
  FUNC_2(VAR_2->ipq_pkt);
  FUNC_2(VAR_2);
 }
 FUNC_2(VAR_1->ip_pkt);
 FUNC_2(VAR_1);
}

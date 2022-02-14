
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_vs_dest {int flags; int weight; } ;
struct ip_vs_conn {scalar_t__ cport; scalar_t__ vport; scalar_t__ dport; int refcnt; int daddr; int af; int vaddr; int caddr; int protocol; struct ip_vs_dest* dest; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,char*,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct ip_vs_conn*) ;
 scalar_t__ FUNC_6 (struct ip_vs_conn*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_1 ;

int FUNC_9(struct ip_vs_conn *VAR_2)
{
 struct ip_vs_dest *VAR_3 = VAR_2->dest;




 if ((VAR_3 == ((void*)0)) ||
     !(VAR_3->flags & VAR_0) ||
     (VAR_1 &&
      (FUNC_3(&VAR_3->weight) == 0))) {
  FUNC_1(9, "check_template: dest not available for "
         "protocol %s s:%s:%d v:%s:%d "
         "-> d:%s:%d\n",
         FUNC_7(VAR_2->protocol),
         FUNC_0(VAR_2->af, &VAR_2->caddr),
         FUNC_8(VAR_2->cport),
         FUNC_0(VAR_2->af, &VAR_2->vaddr),
         FUNC_8(VAR_2->vport),
         FUNC_0(VAR_2->af, &VAR_2->daddr),
         FUNC_8(VAR_2->dport));




  if (VAR_2->vport != FUNC_4(0xffff)) {
   if (FUNC_6(VAR_2)) {
    VAR_2->dport = FUNC_4(0xffff);
    VAR_2->vport = FUNC_4(0xffff);
    VAR_2->cport = 0;
    FUNC_5(VAR_2);
   }
  }





  FUNC_2(&VAR_2->refcnt);
  return 0;
 }
 return 1;
}

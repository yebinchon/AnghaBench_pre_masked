
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct lio_instr_queue {int br; } ;
struct TYPE_4__ {int link_up; } ;
struct TYPE_5__ {TYPE_1__ s; } ;
struct TYPE_6__ {TYPE_2__ link; } ;
struct lio {TYPE_3__ linfo; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_1 ;
 int FUNC_1 (struct ifnet*,int ) ;
 struct mbuf* FUNC_2 (struct ifnet*,int ) ;
 int FUNC_3 (struct ifnet*,int ,struct mbuf*) ;
 int FUNC_4 (struct ifnet*) ;
 struct lio* FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct lio*,struct lio_instr_queue*,struct mbuf**) ;

int
FUNC_7(struct ifnet *VAR_2, struct lio_instr_queue *VAR_3)
{
 struct lio *VAR_4 = FUNC_5(VAR_2);
 struct mbuf *VAR_5;
 int VAR_6 = 0;

 if (((FUNC_4(VAR_2) & VAR_1) == 0) ||
     (!VAR_4->linfo.link.s.link_up))
  return (-VAR_0);


 while ((VAR_5 = FUNC_2(VAR_2, VAR_3->br)) != ((void*)0)) {
  VAR_6 = FUNC_6(VAR_4, VAR_3, &VAR_5);
  if (VAR_6) {
   if (VAR_5 == ((void*)0))
    FUNC_1(VAR_2, VAR_3->br);
   else
    FUNC_3(VAR_2, VAR_3->br, VAR_5);
   break;
  }
  FUNC_1(VAR_2, VAR_3->br);

  FUNC_0(VAR_2, VAR_5);
  if (((FUNC_4(VAR_2) & VAR_1) == 0) ||
      (!VAR_4->linfo.link.s.link_up))
   break;
 }

 return (VAR_6);
}

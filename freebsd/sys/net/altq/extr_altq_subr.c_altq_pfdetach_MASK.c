
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pf_altq {scalar_t__ altq_disc; int ifname; } ;
struct TYPE_4__ {scalar_t__ altq_disc; } ;
struct ifnet {TYPE_1__ if_snd; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct ifnet* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

int
FUNC_6(struct pf_altq *VAR_1)
{
 struct ifnet *VAR_2;
 int VAR_3, VAR_4 = 0;

 if ((VAR_2 = FUNC_3(VAR_1->ifname)) == ((void*)0))
  return (VAR_0);



 if (VAR_1->altq_disc == ((void*)0) || VAR_1->altq_disc != VAR_2->if_snd.altq_disc)
  return (0);

 VAR_3 = FUNC_4();

 if (FUNC_0(&VAR_2->if_snd))
  VAR_4 = FUNC_2(&VAR_2->if_snd);
 if (VAR_4 == 0)
  VAR_4 = FUNC_1(&VAR_2->if_snd);
 FUNC_5(VAR_3);

 return (VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_xname; } ;
struct ifaltq {scalar_t__ ifq_maxlen; struct ifnet* altq_ifp; int * altq_tbr; int altq_flags; int * altq_disc; scalar_t__ altq_type; int ifq_mtx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ,char*,int ) ;

void
FUNC_1(struct ifaltq *VAR_3, struct ifnet *VAR_4)
{

 FUNC_0(&VAR_3->ifq_mtx, VAR_4->if_xname, "if send queue", VAR_1);

 if (VAR_3->ifq_maxlen == 0)
  VAR_3->ifq_maxlen = VAR_2;

 VAR_3->altq_type = 0;
 VAR_3->altq_disc = ((void*)0);
 VAR_3->altq_flags &= VAR_0;
 VAR_3->altq_tbr = ((void*)0);
 VAR_3->altq_ifp = VAR_4;
}

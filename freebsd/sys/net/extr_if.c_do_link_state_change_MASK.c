
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_link_state; scalar_t__ if_type; int if_xname; scalar_t__ if_lagg; int (* if_bridge_linkstate ) (struct ifnet*) ;scalar_t__ if_bridge; scalar_t__ if_carp; int * if_l2com; int * if_vlantrunk; int if_vnet; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ifnet*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (struct ifnet*) ;
 int VAR_3 ;
 int FUNC_5 (char*,int ,char*,int *) ;
 int FUNC_6 (struct ifnet*,char*,...) ;
 int VAR_4 ;
 int FUNC_7 (struct ifnet*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (struct ifnet*,int) ;
 int FUNC_9 (struct ifnet*) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*,int) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct ifnet*,int) ;
 int FUNC_15 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_16(void *VAR_6, int VAR_7)
{
 struct ifnet *VAR_8;
 int VAR_9;

 VAR_8 = VAR_6;
 VAR_9 = VAR_8->if_link_state;

 FUNC_1(VAR_8->if_vnet);
 FUNC_9(VAR_8);
 if (VAR_8->if_vlantrunk != ((void*)0))
  FUNC_15)(VAR_8);

 if ((VAR_8->if_type == VAR_0 || VAR_8->if_type == VAR_1) &&
     VAR_8->if_l2com != ((void*)0))
  FUNC_8)(VAR_8, VAR_9);
 if (VAR_8->if_carp)
  FUNC_4)(VAR_8);
 if (VAR_8->if_bridge)
  VAR_8->if_bridge_linkstate(VAR_8);
 if (VAR_8->if_lagg)
  FUNC_7)(VAR_8, VAR_9);

 if (FUNC_3(VAR_3))
  FUNC_5("IFNET", VAR_8->if_xname,
      (VAR_9 == VAR_2) ? "LINK_UP" : "LINK_DOWN",
      ((void*)0));
 if (VAR_7 > 1)
  FUNC_6(VAR_8, "%d link states coalesced\n", VAR_7);
 if (VAR_5)
  FUNC_6(VAR_8, "link state changed to %s\n",
      (VAR_9 == VAR_2) ? "UP" : "DOWN" );
 FUNC_2(VAR_4, VAR_8, VAR_9);
 FUNC_0();
}

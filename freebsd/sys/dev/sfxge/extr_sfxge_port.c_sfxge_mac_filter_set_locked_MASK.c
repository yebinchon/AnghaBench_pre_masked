
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfxge_port {scalar_t__ mcast_count; int lock; } ;
struct sfxge_softc {int enp; struct sfxge_port port; struct ifnet* ifnet; } ;
struct ifnet {int if_flags; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,int,int,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sfxge_softc*) ;

__attribute__((used)) static int
FUNC_3(struct sfxge_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->ifnet;
 struct sfxge_port *VAR_6 = &VAR_4->port;
 boolean_t VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6->lock, VAR_3);

 VAR_7 = !!(VAR_5->if_flags & (VAR_2 | VAR_1));

 VAR_8 = FUNC_2(VAR_4);

 if (VAR_8 != 0)
  VAR_7 = VAR_0;

 VAR_8 = FUNC_0(VAR_4->enp, !!(VAR_5->if_flags & VAR_2),
    (VAR_6->mcast_count > 0), VAR_7, VAR_0);

 return (VAR_8);
}

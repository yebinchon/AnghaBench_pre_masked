
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbareq {int ifba_flags; int ifba_vlan; int ifba_dst; int ifba_ifsname; } ;
struct bridge_softc {int dummy; } ;
struct bridge_iflist {int dummy; } ;


 int VAR_0 ;
 struct bridge_iflist* FUNC_0 (struct bridge_softc*,int ) ;
 int FUNC_1 (struct bridge_softc*,int ,int ,struct bridge_iflist*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct bridge_softc *VAR_1, void *VAR_2)
{
 struct ifbareq *VAR_3 = VAR_2;
 struct bridge_iflist *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_3->ifba_ifsname);
 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_5 = FUNC_1(VAR_1, VAR_3->ifba_dst, VAR_3->ifba_vlan, VAR_4, 1,
     VAR_3->ifba_flags);

 return (VAR_5);
}

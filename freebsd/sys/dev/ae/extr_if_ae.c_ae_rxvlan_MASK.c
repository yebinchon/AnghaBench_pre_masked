
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_capenable; } ;
struct TYPE_6__ {struct ifnet* ifp; } ;
typedef TYPE_1__ ae_softc_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(ae_softc_t *VAR_3)
{
 struct ifnet *VAR_4;
 uint32_t VAR_5;

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->ifp;
 VAR_5 = FUNC_1(VAR_3, VAR_0);
 VAR_5 &= ~VAR_1;
 if ((VAR_4->if_capenable & VAR_2) != 0)
  VAR_5 |= VAR_1;
 FUNC_2(VAR_3, VAR_0, VAR_5);
}

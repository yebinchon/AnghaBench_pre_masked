
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef struct dtsec_softc* t_Handle ;
struct mbuf {int dummy; } ;
struct dtsec_softc {TYPE_1__* sc_ifnet; } ;
typedef int e_RxStoreResponse ;
struct TYPE_3__ {int (* if_input ) (TYPE_1__*,struct mbuf*) ;} ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct mbuf* FUNC_1 (int *,int ,int ,TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,struct mbuf*) ;

__attribute__((used)) static e_RxStoreResponse
FUNC_3(t_Handle VAR_1, uint8_t *VAR_2, uint16_t VAR_3,
    uint16_t VAR_4, uint8_t VAR_5, t_Handle VAR_6)
{
 struct dtsec_softc *VAR_7;
 struct mbuf *VAR_8;


 VAR_7 = VAR_1;

 VAR_8 = FUNC_1(VAR_2, VAR_3, 0, VAR_7->sc_ifnet, ((void*)0));
 if (VAR_8)
  (*VAR_7->sc_ifnet->if_input)(VAR_7->sc_ifnet, VAR_8);

 FUNC_0(VAR_2);

 return (VAR_0);
}

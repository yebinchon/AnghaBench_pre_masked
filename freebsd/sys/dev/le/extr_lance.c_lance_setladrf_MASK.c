
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lance_softc {int sc_flags; struct ifnet* sc_ifp; } ;
struct lance_hash_maddr_ctx {int* member_1; struct lance_softc* member_0; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,int ,struct lance_hash_maddr_ctx*) ;
 int VAR_2 ;

void
FUNC_1(struct lance_softc *VAR_3, uint16_t *VAR_4)
{
 struct ifnet *VAR_5 = VAR_3->sc_ifp;
 struct lance_hash_maddr_ctx VAR_6 = { VAR_3, VAR_4 };
 if (VAR_5->if_flags & VAR_0 || VAR_3->sc_flags & VAR_1) {
  VAR_4[0] = VAR_4[1] = VAR_4[2] = VAR_4[3] = 0xffff;
  return;
 }

 VAR_4[0] = VAR_4[1] = VAR_4[2] = VAR_4[3] = 0x0000;
 FUNC_0(VAR_5, VAR_2, &VAR_6);
}

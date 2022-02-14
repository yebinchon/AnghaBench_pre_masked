
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct hn_softc {int hn_ifp; } ;
typedef int filter ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hn_softc*,int ,int *,int) ;
 int FUNC_1 (int ,char*,int ,...) ;

int
FUNC_2(struct hn_softc *VAR_2, uint32_t VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_0,
     &VAR_3, sizeof(VAR_3));
 if (VAR_4) {
  FUNC_1(VAR_2->hn_ifp, "set RX filter 0x%08x failed: %d\n",
      VAR_3, VAR_4);
 } else {
  if (VAR_1) {
   FUNC_1(VAR_2->hn_ifp, "set RX filter 0x%08x done\n",
       VAR_3);
  }
 }
 return (VAR_4);
}

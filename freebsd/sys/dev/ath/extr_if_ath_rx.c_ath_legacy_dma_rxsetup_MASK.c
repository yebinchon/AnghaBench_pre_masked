
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_rxbuf; int sc_rxdma; } ;
struct ath_desc {int dummy; } ;


 int FUNC_0 (struct ath_softc*,int *,int *,char*,int,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct ath_softc *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->sc_rxdma, &VAR_1->sc_rxbuf,
     "rx", sizeof(struct ath_desc), VAR_0, 1);
 if (VAR_2 != 0)
  return (VAR_2);

 return (0);
}

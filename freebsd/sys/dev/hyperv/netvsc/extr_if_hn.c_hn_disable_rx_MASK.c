
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_rx_filter; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct hn_softc *VAR_2)
{




 VAR_2->hn_rx_filter = VAR_0;
 FUNC_0(VAR_2, VAR_2->hn_rx_filter);




 FUNC_1("waitrx", (200 * VAR_1) / 1000);
}

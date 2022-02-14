
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct xl_stats {scalar_t__ xl_tx_late_collision; scalar_t__ xl_tx_single_collision; scalar_t__ xl_tx_multi_collision; scalar_t__ xl_rx_overrun; } ;
struct xl_softc {struct ifnet* xl_ifp; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (struct xl_softc*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xl_softc*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct ifnet*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct xl_softc *VAR_4)
{
 struct ifnet *VAR_5 = VAR_4->xl_ifp;
 struct xl_stats VAR_6;
 u_int8_t *VAR_7;
 int VAR_8;

 FUNC_1(VAR_4);

 FUNC_3((char *)&VAR_6, sizeof(struct xl_stats));

 VAR_7 = (u_int8_t *)&VAR_6;


 FUNC_2(6);

 for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
  *VAR_7++ = FUNC_0(VAR_4, VAR_3 + VAR_8);

 FUNC_4(VAR_5, VAR_1, VAR_6.xl_rx_overrun);

 FUNC_4(VAR_5, VAR_0,
     VAR_6.xl_tx_multi_collision +
     VAR_6.xl_tx_single_collision +
     VAR_6.xl_tx_late_collision);







 FUNC_2(4);
 FUNC_0(VAR_4, VAR_2);
 FUNC_2(7);
}

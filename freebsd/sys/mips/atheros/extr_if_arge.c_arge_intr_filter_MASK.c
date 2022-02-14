
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int intr_stray; int intr_ok; } ;
struct arge_softc {int arge_intr_status; TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arge_softc*,int ,char*,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct arge_softc*,int ) ;
 int FUNC_2 (struct arge_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(void *VAR_6)
{
 struct arge_softc *VAR_7 = VAR_6;
 uint32_t VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 VAR_9 = FUNC_1(VAR_7, VAR_0);

 FUNC_0(VAR_7, VAR_2, "int mask(filter) = %b\n", VAR_9,
     "\20\10RX_BUS_ERROR\7RX_OVERFLOW\5RX_PKT_RCVD"
     "\4TX_BUS_ERROR\2TX_UNDERRUN\1TX_PKT_SENT");
 FUNC_0(VAR_7, VAR_2, "status(filter) = %b\n", VAR_8,
     "\20\10RX_BUS_ERROR\7RX_OVERFLOW\5RX_PKT_RCVD"
     "\4TX_BUS_ERROR\2TX_UNDERRUN\1TX_PKT_SENT");

 if (VAR_8 & VAR_3) {
  VAR_7->arge_intr_status |= VAR_8;
  FUNC_2(VAR_7, VAR_0, 0);
  VAR_7->stats.intr_ok++;
  return (VAR_4);
 }

 VAR_7->arge_intr_status = 0;
 VAR_7->stats.intr_stray++;
 return (VAR_5);
}

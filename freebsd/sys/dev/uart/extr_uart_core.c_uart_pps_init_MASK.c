
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver_abi; int driver_mtx; int ppscap; } ;
struct uart_softc {TYPE_1__ sc_pps; int sc_pps_mode; int sc_dev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct uart_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (char*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct uart_softc*) ;
 int FUNC_9 (struct uart_softc*) ;

__attribute__((used)) static void
FUNC_10(struct uart_softc *VAR_10)
{
 struct sysctl_ctx_list *VAR_11;
 struct sysctl_oid *VAR_12;

 VAR_11 = FUNC_3(VAR_10->sc_dev);
 VAR_12 = FUNC_4(VAR_10->sc_dev);
 VAR_10->sc_pps_mode = VAR_6;

 FUNC_2("hw.uart.pps_mode", &VAR_10->sc_pps_mode);
 FUNC_0(VAR_11, FUNC_1(VAR_12), VAR_2, "pps_mode",
     VAR_1 | VAR_0, VAR_10, 0, VAR_9, "I",
     "pulse mode: 0/1/2=disabled/CTS/DCD; "
     "add 0x10 to invert, 0x20 for narrow pulse");

 if (!FUNC_7(VAR_10->sc_pps_mode)) {
  FUNC_5(VAR_10->sc_dev,
      "Invalid pps_mode 0x%02x configured; disabling PPS capture\n",
      VAR_10->sc_pps_mode);
  VAR_10->sc_pps_mode = VAR_7;
 } else if (VAR_8) {
  FUNC_8(VAR_10);
 }

 VAR_10->sc_pps.ppscap = VAR_4;
 VAR_10->sc_pps.driver_mtx = FUNC_9(VAR_10);
 VAR_10->sc_pps.driver_abi = VAR_3;
 FUNC_6(&VAR_10->sc_pps);
}

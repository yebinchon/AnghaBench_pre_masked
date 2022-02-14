
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rtwn_usb_softc {int uc_rx_buf_size; } ;
struct rtwn_softc {int sc_dev; } ;
typedef int str ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtwn_usb_softc* FUNC_1 (struct rtwn_softc*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int ,int*,int,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int,int) ;

__attribute__((used)) static void
FUNC_7(struct rtwn_softc *VAR_5)
{
 struct rtwn_usb_softc *VAR_6 = FUNC_1(VAR_5);
 struct sysctl_ctx_list *VAR_7 = FUNC_4(VAR_5->sc_dev);
 struct sysctl_oid *VAR_8 = FUNC_5(VAR_5->sc_dev);
 char VAR_9[64];
 int VAR_10;

 VAR_10 = FUNC_6(VAR_9, sizeof(VAR_9),
     "Rx buffer size, 512-byte units [%d...%d]",
     VAR_4, VAR_3);
 FUNC_0(VAR_10 > 0, ("ret (%d) <= 0!\n", VAR_10));
 (void) VAR_10;

 VAR_6->uc_rx_buf_size = VAR_2;
 FUNC_2(VAR_7, FUNC_3(VAR_8), VAR_1,
     "rx_buf_size", VAR_0, &VAR_6->uc_rx_buf_size,
     VAR_6->uc_rx_buf_size, VAR_9);
 if (VAR_6->uc_rx_buf_size < VAR_4)
  VAR_6->uc_rx_buf_size = VAR_4;
 if (VAR_6->uc_rx_buf_size > VAR_3)
  VAR_6->uc_rx_buf_size = VAR_3;
}

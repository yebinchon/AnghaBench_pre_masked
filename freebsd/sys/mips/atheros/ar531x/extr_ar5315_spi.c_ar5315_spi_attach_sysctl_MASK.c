
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ar5315_spi_softc {int sc_debug; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 struct ar5315_spi_softc* FUNC_2 (int ) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_2)
{
 struct ar5315_spi_softc *VAR_3;
 struct sysctl_ctx_list *VAR_4;
 struct sysctl_oid *VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_4(VAR_2);

 FUNC_0(VAR_4, FUNC_1(VAR_5), VAR_1,
  "debug", VAR_0, &VAR_3->sc_debug, 0,
  "ar5315_spi debugging flags");
}

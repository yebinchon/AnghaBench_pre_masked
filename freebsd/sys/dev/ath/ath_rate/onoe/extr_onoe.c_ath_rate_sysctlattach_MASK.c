
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ath_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ath_softc *VAR_5)
{
 struct sysctl_ctx_list *VAR_6 = FUNC_2(VAR_5->sc_dev);
 struct sysctl_oid *VAR_7 = FUNC_3(VAR_5->sc_dev);

 FUNC_0(VAR_6, FUNC_1(VAR_7), VAR_1,
  "rate_interval", VAR_0, &VAR_4, 0,
  "rate control: operation interval (ms)");

 FUNC_0(VAR_6, FUNC_1(VAR_7), VAR_1,
  "rate_raise", VAR_0, &VAR_2, 0,
  "rate control: retry threshold to credit rate raise (%%)");
 FUNC_0(VAR_6, FUNC_1(VAR_7), VAR_1,
  "rate_raise_threshold", VAR_0, &VAR_3,0,
  "rate control: # good periods before raising rate");
}

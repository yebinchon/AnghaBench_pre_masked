
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct sample_softc {int sc_dev; } ;
struct ath_softc {int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,struct sample_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_oid*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_ctx_list* FUNC_2 (int ) ;
 struct sysctl_oid* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ath_softc *VAR_6, struct sample_softc *VAR_7)
{
 struct sysctl_ctx_list *VAR_8 = FUNC_2(VAR_6->sc_dev);
 struct sysctl_oid *VAR_9 = FUNC_3(VAR_6->sc_dev);

 FUNC_0(VAR_8, FUNC_1(VAR_9), VAR_2,
     "smoothing_rate", VAR_1 | VAR_0, VAR_7, 0,
     VAR_4, "I",
     "sample: smoothing rate for avg tx time (%%)");
 FUNC_0(VAR_8, FUNC_1(VAR_9), VAR_2,
     "sample_rate", VAR_1 | VAR_0, VAR_7, 0,
     VAR_3, "I",
     "sample: percent air time devoted to sampling new rates (%%)");

 FUNC_0(VAR_8, FUNC_1(VAR_9), VAR_2,
     "sample_stats", VAR_1 | VAR_0, VAR_6, 0,
     VAR_5, "I", "sample: print statistics");
}

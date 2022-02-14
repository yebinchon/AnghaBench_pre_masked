
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmeParams {int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; int wmep_txopLimit; } ;
struct run_softc {int dummy; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct run_softc*,int ,char*) ;
 int FUNC_2 (struct run_softc*) ;
 int FUNC_3 (struct run_softc*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct ieee80211com*,struct chanAccParams*) ;
 int FUNC_5 (struct run_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211com *VAR_11)
{
 struct chanAccParams VAR_12;
 struct run_softc *VAR_13 = VAR_11->ic_softc;
 const struct wmeParams *VAR_14;
 int VAR_15, VAR_16 = 0;

 FUNC_4(VAR_11, &VAR_12);
 VAR_14 = VAR_12.cap_wmeParams;


 FUNC_2(VAR_13);
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
  VAR_16 = FUNC_5(VAR_13, FUNC_0(VAR_15),
      VAR_14[VAR_15].wmep_logcwmax << 16 |
      VAR_14[VAR_15].wmep_logcwmin << 12 |
      VAR_14[VAR_15].wmep_aifsn << 8 |
      VAR_14[VAR_15].wmep_txopLimit);
  if (VAR_16) goto err;
 }


 VAR_16 = FUNC_5(VAR_13, VAR_0,
     VAR_14[VAR_9].wmep_aifsn << 12 |
     VAR_14[VAR_8].wmep_aifsn << 8 |
     VAR_14[VAR_7].wmep_aifsn << 4 |
     VAR_14[VAR_6].wmep_aifsn);
 if (VAR_16) goto err;
 VAR_16 = FUNC_5(VAR_13, VAR_2,
     VAR_14[VAR_9].wmep_logcwmin << 12 |
     VAR_14[VAR_8].wmep_logcwmin << 8 |
     VAR_14[VAR_7].wmep_logcwmin << 4 |
     VAR_14[VAR_6].wmep_logcwmin);
 if (VAR_16) goto err;
 VAR_16 = FUNC_5(VAR_13, VAR_1,
     VAR_14[VAR_9].wmep_logcwmax << 12 |
     VAR_14[VAR_8].wmep_logcwmax << 8 |
     VAR_14[VAR_7].wmep_logcwmax << 4 |
     VAR_14[VAR_6].wmep_logcwmax);
 if (VAR_16) goto err;
 VAR_16 = FUNC_5(VAR_13, VAR_3,
     VAR_14[VAR_7].wmep_txopLimit << 16 |
     VAR_14[VAR_6].wmep_txopLimit);
 if (VAR_16) goto err;
 VAR_16 = FUNC_5(VAR_13, VAR_4,
     VAR_14[VAR_9].wmep_txopLimit << 16 |
     VAR_14[VAR_8].wmep_txopLimit);

err:
 FUNC_3(VAR_13);
 if (VAR_16)
  FUNC_1(VAR_13, VAR_5, "WME update failed\n");

 return (VAR_16);
}

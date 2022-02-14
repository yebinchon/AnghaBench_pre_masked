
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmeParams {int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; int wmep_txopLimit; } ;
struct rt2860_softc {int dummy; } ;
struct ieee80211com {struct rt2860_softc* ic_softc; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;


 int FUNC_0 (struct rt2860_softc*,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ieee80211com*,struct chanAccParams*) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211com *VAR_10)
{
 struct rt2860_softc *VAR_11 = VAR_10->ic_softc;
 struct chanAccParams VAR_12;
 const struct wmeParams *VAR_13;
 int VAR_14;

 FUNC_2(VAR_10, &VAR_12);

 VAR_13 = VAR_12.cap_wmeParams;


 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++) {
  FUNC_0(VAR_11, FUNC_1(VAR_14),
      VAR_13[VAR_14].wmep_logcwmax << 16 |
      VAR_13[VAR_14].wmep_logcwmin << 12 |
      VAR_13[VAR_14].wmep_aifsn << 8 |
      VAR_13[VAR_14].wmep_txopLimit);
 }


 FUNC_0(VAR_11, VAR_0,
     VAR_13[VAR_8].wmep_aifsn << 12 |
     VAR_13[VAR_7].wmep_aifsn << 8 |
     VAR_13[VAR_6].wmep_aifsn << 4 |
     VAR_13[VAR_5].wmep_aifsn);
 FUNC_0(VAR_11, VAR_2,
     VAR_13[VAR_8].wmep_logcwmin << 12 |
     VAR_13[VAR_7].wmep_logcwmin << 8 |
     VAR_13[VAR_6].wmep_logcwmin << 4 |
     VAR_13[VAR_5].wmep_logcwmin);
 FUNC_0(VAR_11, VAR_1,
     VAR_13[VAR_8].wmep_logcwmax << 12 |
     VAR_13[VAR_7].wmep_logcwmax << 8 |
     VAR_13[VAR_6].wmep_logcwmax << 4 |
     VAR_13[VAR_5].wmep_logcwmax);
 FUNC_0(VAR_11, VAR_3,
     VAR_13[VAR_6].wmep_txopLimit << 16 |
     VAR_13[VAR_5].wmep_txopLimit);
 FUNC_0(VAR_11, VAR_4,
     VAR_13[VAR_8].wmep_txopLimit << 16 |
     VAR_13[VAR_7].wmep_txopLimit);

 return 0;
}

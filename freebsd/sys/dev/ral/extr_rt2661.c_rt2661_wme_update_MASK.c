
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmeParams {int wmep_txopLimit; int wmep_logcwmin; int wmep_logcwmax; int wmep_aifsn; } ;
struct rt2661_softc {int dummy; } ;
struct ieee80211com {struct rt2661_softc* ic_softc; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;


 int FUNC_0 (struct rt2661_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (struct ieee80211com*,struct chanAccParams*) ;

__attribute__((used)) static int
FUNC_2(struct ieee80211com *VAR_9)
{
 struct rt2661_softc *VAR_10 = VAR_9->ic_softc;
 struct chanAccParams VAR_11;
 const struct wmeParams *VAR_12;

 FUNC_1(VAR_9, &VAR_11);

 VAR_12 = VAR_11.cap_wmeParams;





 FUNC_0(VAR_10, VAR_0,
     VAR_12[VAR_5].wmep_txopLimit << 16 |
     VAR_12[VAR_6].wmep_txopLimit);
 FUNC_0(VAR_10, VAR_1,
     VAR_12[VAR_7].wmep_txopLimit << 16 |
     VAR_12[VAR_8].wmep_txopLimit);


 FUNC_0(VAR_10, VAR_4,
     VAR_12[VAR_5].wmep_logcwmin << 12 |
     VAR_12[VAR_6].wmep_logcwmin << 8 |
     VAR_12[VAR_7].wmep_logcwmin << 4 |
     VAR_12[VAR_8].wmep_logcwmin);


 FUNC_0(VAR_10, VAR_3,
     VAR_12[VAR_5].wmep_logcwmax << 12 |
     VAR_12[VAR_6].wmep_logcwmax << 8 |
     VAR_12[VAR_7].wmep_logcwmax << 4 |
     VAR_12[VAR_8].wmep_logcwmax);


 FUNC_0(VAR_10, VAR_2,
     VAR_12[VAR_5].wmep_aifsn << 12 |
     VAR_12[VAR_6].wmep_aifsn << 8 |
     VAR_12[VAR_7].wmep_aifsn << 4 |
     VAR_12[VAR_8].wmep_aifsn);

 return 0;
}

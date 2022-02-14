
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmeParams {int wmep_txopLimit; int wmep_aifsn; int wmep_logcwmin; int wmep_logcwmax; } ;
struct ieee80211com {int dummy; } ;
struct otus_softc {struct ieee80211com sc_ic; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct otus_softc*) ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_3 (struct ieee80211com*,struct chanAccParams*) ;
 int FUNC_4 (struct otus_softc*,int ,int) ;
 int FUNC_5 (struct otus_softc*) ;

__attribute__((used)) static void
FUNC_6(struct otus_softc *VAR_13)
{


 struct chanAccParams VAR_14;
 struct ieee80211com *VAR_15 = &VAR_13->sc_ic;
 const struct wmeParams *VAR_16;

 FUNC_3(VAR_15, &VAR_14);

 FUNC_2(VAR_13);

 VAR_16 = VAR_14.cap_wmeParams;


 FUNC_4(VAR_13, VAR_0,
     ((1 << (VAR_16[VAR_9].wmep_logcwmax)) - 1) << 16 |
     ((1 << (VAR_16[VAR_9].wmep_logcwmin)) - 1));
 FUNC_4(VAR_13, VAR_3,
     ((1 << (VAR_16[VAR_10].wmep_logcwmax)) - 1) << 16 |
     ((1 << (VAR_16[VAR_10].wmep_logcwmin)) - 1));
 FUNC_4(VAR_13, VAR_4,
     ((1 << (VAR_16[VAR_11].wmep_logcwmax)) - 1) << 16 |
     ((1 << (VAR_16[VAR_11].wmep_logcwmin)) - 1));
 FUNC_4(VAR_13, VAR_7,
     ((1 << (VAR_16[VAR_12].wmep_logcwmax)) - 1) << 16 |
     ((1 << (VAR_16[VAR_12].wmep_logcwmin)) - 1));
 FUNC_4(VAR_13, VAR_8,
     ((1 << (VAR_16[VAR_12].wmep_logcwmax)) - 1) << 16 |
     ((1 << (VAR_16[VAR_12].wmep_logcwmin)) - 1));


 FUNC_4(VAR_13, VAR_1,
     ((VAR_16[VAR_11].wmep_aifsn) * 9 + 10) << 24 |
     ((VAR_16[VAR_10].wmep_aifsn) * 9 + 10) << 12 |
     ((VAR_16[VAR_9].wmep_aifsn) * 9 + 10));
 FUNC_4(VAR_13, VAR_5,
     ((VAR_16[VAR_12].wmep_aifsn) * 9 + 10) << 16 |
     ((VAR_16[VAR_12].wmep_aifsn) * 9 + 10) << 4 |
     ((VAR_16[VAR_11].wmep_aifsn) * 9 + 10) >> 8);


 FUNC_4(VAR_13, VAR_2,
     VAR_16[VAR_10].wmep_txopLimit << 16 |
     VAR_16[VAR_9].wmep_txopLimit);
 FUNC_4(VAR_13, VAR_6,
     VAR_16[VAR_12].wmep_txopLimit << 16 |
     VAR_16[VAR_11].wmep_txopLimit);



 (void)FUNC_5(VAR_13);



}

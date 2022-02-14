
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uath_softc {int dummy; } ;
struct uath_cmd_rateset {int dummy; } ;
struct TYPE_2__ {int * set; int length; } ;
struct uath_cmd_rates {TYPE_1__ rateset; void* size; void* connid; } ;
struct ieee80211_rateset {int rs_nrates; int rs_rates; } ;
typedef int rates ;


 int FUNC_0 (struct uath_softc*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct uath_cmd_rates*,int ,int) ;
 int FUNC_4 (struct uath_softc*,int ,struct uath_cmd_rates*,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct uath_softc *VAR_3, const struct ieee80211_rateset *VAR_4)
{
 struct uath_cmd_rates VAR_5;

 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.connid = FUNC_2(VAR_1);
 VAR_5.size = FUNC_2(sizeof(struct uath_cmd_rateset));

 VAR_5.rateset.length = VAR_4->rs_nrates;
 FUNC_1(VAR_4->rs_rates, &VAR_5.rateset.set[0], VAR_4->rs_nrates);

 FUNC_0(VAR_3, VAR_0,
     "setting supported rates nrates=%d\n", VAR_4->rs_nrates);
 return FUNC_4(VAR_3, VAR_2,
     &VAR_5, sizeof VAR_5, 0);
}

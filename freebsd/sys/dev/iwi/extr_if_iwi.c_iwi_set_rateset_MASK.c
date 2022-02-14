
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int dummy; } ;
struct iwi_rateset {int mode; int type; scalar_t__ nrates; int rates; } ;
struct ieee80211_rateset {scalar_t__ rs_nrates; int rs_rates; } ;
typedef int rs ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwi_softc*,int ,struct iwi_rateset*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct iwi_rateset*,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct iwi_softc *VAR_4, const struct ieee80211_rateset *VAR_5,
    int VAR_6, int VAR_7)
{
 struct iwi_rateset VAR_8;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.mode = VAR_6;
 VAR_8.type = VAR_7;
 VAR_8.nrates = VAR_5->rs_nrates;
 if (VAR_8.nrates > FUNC_4(VAR_8.rates)) {
  FUNC_0(("Truncating negotiated rate set from %u\n",
      VAR_8.nrates));
  VAR_8.nrates = FUNC_4(VAR_8.rates);
 }
 FUNC_2(VAR_8.rates, VAR_5->rs_rates, VAR_8.nrates);
 FUNC_0(("Setting .11%c%s %s rates (%u)\n",
     VAR_6 == VAR_1 ? 'a' : 'b',
     VAR_6 == VAR_2 ? "g" : "",
     VAR_7 == VAR_3 ? "supported" : "negotiated",
     VAR_8.nrates));

 return (FUNC_1(VAR_4, VAR_0, &VAR_8, sizeof(VAR_8)));
}

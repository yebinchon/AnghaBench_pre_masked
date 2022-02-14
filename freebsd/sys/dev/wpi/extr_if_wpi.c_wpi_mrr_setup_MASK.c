
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct ieee80211com {scalar_t__ ic_curmode; } ;
struct wpi_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct wpi_mrr_setup {void* which; TYPE_1__* rates; } ;
struct TYPE_2__ {size_t next; void* ntries; void* plcp; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,char*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct wpi_softc*,int ,struct wpi_mrr_setup*,int,int ) ;
 void** VAR_10 ;

__attribute__((used)) static int
FUNC_3(struct wpi_softc *VAR_11)
{
 struct ieee80211com *VAR_12 = &VAR_11->sc_ic;
 struct wpi_mrr_setup VAR_13;
 uint8_t VAR_14;
 int VAR_15;


 for (VAR_14 = VAR_5; VAR_14 <= VAR_6; VAR_14++) {
  VAR_13.rates[VAR_14].flags = 0;
  VAR_13.rates[VAR_14].plcp = VAR_10[VAR_14];

  VAR_13.rates[VAR_14].next =
      (VAR_14 == VAR_5) ? VAR_5 : VAR_14 - 1;

  VAR_13.rates[VAR_14].ntries = VAR_4;
 }

 for (VAR_14 = VAR_9; VAR_14 <= VAR_8; VAR_14++) {
  VAR_13.rates[VAR_14].flags = 0;
  VAR_13.rates[VAR_14].plcp = VAR_10[VAR_14];


  VAR_13.rates[VAR_14].next = (VAR_14 == VAR_9) ?
      ((VAR_12->ic_curmode == VAR_0) ?
   VAR_9 : VAR_7) :
      VAR_14 - 1;

  VAR_13.rates[VAR_14].ntries = VAR_4;
 }

 VAR_13.which = FUNC_1(VAR_2);
 VAR_15 = FUNC_2(VAR_11, VAR_1, &VAR_13, sizeof VAR_13, 0);
 if (VAR_15 != 0) {
  FUNC_0(VAR_11->sc_dev,
      "could not setup MRR for control frames\n");
  return VAR_15;
 }

 VAR_13.which = FUNC_1(VAR_3);
 VAR_15 = FUNC_2(VAR_11, VAR_1, &VAR_13, sizeof VAR_13, 0);
 if (VAR_15 != 0) {
  FUNC_0(VAR_11->sc_dev,
      "could not setup MRR for data frames\n");
  return VAR_15;
 }
 return 0;
}

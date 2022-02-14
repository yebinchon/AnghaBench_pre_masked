
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct iwm_softc {TYPE_2__* cfg; TYPE_1__* nvm_data; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_4__ {scalar_t__ device_family; } ;
struct TYPE_3__ {int* nvm_ch_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int ,char*,int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int ,int ,int ,int ,int const*) ;
 int FUNC_2 (int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (int const* const) ;

__attribute__((used)) static void
FUNC_4(struct iwm_softc *VAR_6, struct ieee80211_channel VAR_7[],
    int VAR_8, int *VAR_9, int VAR_10, size_t VAR_11,
    const uint8_t VAR_12[])
{
 const uint16_t * const VAR_13 = VAR_6->nvm_data->nvm_ch_flags;
 uint32_t VAR_14;
 uint16_t VAR_15;
 uint8_t VAR_16;
 int VAR_17;

 for (; VAR_10 < VAR_11; VAR_10++) {
  VAR_15 = FUNC_3(VAR_13 + VAR_10);
  if (VAR_6->cfg->device_family == VAR_1)
   VAR_16 = VAR_4[VAR_10];
  else
   VAR_16 = VAR_5[VAR_10];

  if (!(VAR_15 & VAR_3)) {
   FUNC_0(VAR_6, VAR_0,
       "Ch. %d Flags %x [%sGHz] - No traffic\n",
       VAR_16, VAR_15,
       (VAR_10 >= VAR_2) ?
       "5.2" : "2.4");
   continue;
  }

  VAR_14 = FUNC_2(VAR_15);
  VAR_17 = FUNC_1(VAR_7, VAR_8, VAR_9,
      VAR_16, 0, 0, VAR_14, VAR_12);
  if (VAR_17 != 0)
   break;

  FUNC_0(VAR_6, VAR_0,
      "Ch. %d Flags %x [%sGHz] - Added\n",
      VAR_16, VAR_15,
      (VAR_10 >= VAR_2) ?
      "5.2" : "2.4");
 }
}

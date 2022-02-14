
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int val ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int const* ic_macaddr; } ;
struct bwi_softc {TYPE_2__ sc_ic; TYPE_1__* sc_cur_regwin; } ;
struct bwi_myaddr_bssid {int bssid; int myaddr; } ;
struct bwi_mac {int dummy; } ;
typedef int buf ;
struct TYPE_3__ {scalar_t__ rw_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;
 int FUNC_2 (int const*,int ,int) ;
 int FUNC_3 (struct bwi_softc*,int ,int const*) ;

__attribute__((used)) static void
FUNC_4(struct bwi_softc *VAR_2, const uint8_t *VAR_3)
{
 struct bwi_mac *VAR_4;
 struct bwi_myaddr_bssid VAR_5;
 const uint8_t *VAR_6;
 uint32_t VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_2->sc_cur_regwin->rw_type == VAR_1,
     ("current regwin type %d", VAR_2->sc_cur_regwin->rw_type));
 VAR_4 = (struct bwi_mac *)VAR_2->sc_cur_regwin;

 FUNC_3(VAR_2, VAR_0, VAR_3);

 FUNC_2(VAR_2->sc_ic.ic_macaddr, VAR_5.myaddr, sizeof(VAR_5.myaddr));
 FUNC_2(VAR_3, VAR_5.bssid, sizeof(VAR_5.bssid));

 VAR_8 = sizeof(VAR_5) / sizeof(VAR_7);
 VAR_6 = (const uint8_t *)&VAR_5;
 for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9) {
  int VAR_10;

  VAR_7 = 0;
  for (VAR_10 = 0; VAR_10 < sizeof(VAR_7); ++VAR_10)
   VAR_7 |= ((uint32_t)(*VAR_6++)) << (VAR_10 * 8);

  FUNC_1(VAR_4, 0x20 + (VAR_9 * sizeof(VAR_7)), VAR_7);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwi_softc {TYPE_1__* sc_cur_regwin; } ;
struct bwi_rxbuf_hdr {int dummy; } ;
struct bwi_mac {int dummy; } ;
struct TYPE_2__ {scalar_t__ rw_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_mac*,struct bwi_rxbuf_hdr const*) ;

__attribute__((used)) static int
FUNC_2(struct bwi_softc *VAR_1, const struct bwi_rxbuf_hdr *VAR_2)
{
 struct bwi_mac *VAR_3;

 FUNC_0(VAR_1->sc_cur_regwin->rw_type == VAR_0,
     ("current regwin type %d", VAR_1->sc_cur_regwin->rw_type));
 VAR_3 = (struct bwi_mac *)VAR_1->sc_cur_regwin;

 return FUNC_1(VAR_3, VAR_2);
}

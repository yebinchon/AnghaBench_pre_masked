
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alc_rr_ring_map; int alc_rr_ring_tag; scalar_t__ alc_rr_cons; } ;
struct alc_ring_data {int alc_rr_ring; } ;
struct alc_softc {TYPE_1__ alc_cdata; struct alc_ring_data alc_rdata; } ;


 int FUNC_0 (struct alc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct alc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct alc_softc *VAR_3)
{
 struct alc_ring_data *VAR_4;

 FUNC_0(VAR_3);

 VAR_3->alc_cdata.alc_rr_cons = 0;
 FUNC_1(VAR_3);

 VAR_4 = &VAR_3->alc_rdata;
 FUNC_3(VAR_4->alc_rr_ring, VAR_0);
 FUNC_2(VAR_3->alc_cdata.alc_rr_ring_tag,
     VAR_3->alc_cdata.alc_rr_ring_map,
     VAR_1 | VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alc_cmb_map; int alc_cmb_tag; } ;
struct alc_ring_data {int alc_cmb; } ;
struct alc_softc {TYPE_1__ alc_cdata; struct alc_ring_data alc_rdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_3)
{
 struct alc_ring_data *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = &VAR_3->alc_rdata;
 FUNC_2(VAR_4->alc_cmb, VAR_0);
 FUNC_1(VAR_3->alc_cdata.alc_cmb_tag, VAR_3->alc_cdata.alc_cmb_map,
     VAR_1 | VAR_2);
}

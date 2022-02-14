
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int jme_ssb_map; int jme_ssb_tag; } ;
struct jme_ring_data {int jme_ssb_block; } ;
struct jme_softc {TYPE_1__ jme_cdata; struct jme_ring_data jme_rdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct jme_softc *VAR_3)
{
 struct jme_ring_data *VAR_4;

 VAR_4 = &VAR_3->jme_rdata;
 FUNC_1(VAR_4->jme_ssb_block, VAR_2);
 FUNC_0(VAR_3->jme_cdata.jme_ssb_tag, VAR_3->jme_cdata.jme_ssb_map,
     VAR_0 | VAR_1);
}

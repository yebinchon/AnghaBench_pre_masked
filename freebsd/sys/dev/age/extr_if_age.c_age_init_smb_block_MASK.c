
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int age_smb_block_map; int age_smb_block_tag; } ;
struct age_ring_data {int age_smb_block; } ;
struct age_softc {TYPE_1__ age_cdata; struct age_ring_data age_rdata; } ;


 int FUNC_0 (struct age_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct age_softc *VAR_3)
{
 struct age_ring_data *VAR_4;

 FUNC_0(VAR_3);

 VAR_4 = &VAR_3->age_rdata;
 FUNC_2(VAR_4->age_smb_block, VAR_0);
 FUNC_1(VAR_3->age_cdata.age_smb_block_tag,
     VAR_3->age_cdata.age_smb_block_map,
     VAR_1 | VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int ue_dev; } ;
struct urndis_softc {TYPE_1__ sc_ue; } ;
struct rndis_comp_hdr {int rm_type; int rm_status; } ;


 int FUNC_0 (char*) ;





 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct urndis_softc*,struct rndis_comp_hdr*) ;
 int FUNC_4 (struct urndis_softc*,struct rndis_comp_hdr*,void const**,scalar_t__*) ;
 int FUNC_5 (struct urndis_softc*,struct rndis_comp_hdr*) ;

__attribute__((used)) static uint32_t
FUNC_6(struct urndis_softc *VAR_1, struct rndis_comp_hdr *VAR_2,
    const void **VAR_3, uint16_t *VAR_4)
{
 uint32_t VAR_5;

 FUNC_0("\n");

 if (VAR_3 != ((void*)0) && VAR_4 != ((void*)0)) {
  *VAR_3 = ((void*)0);
  *VAR_4 = 0;
 }
 switch (FUNC_2(VAR_2->rm_type)) {
 case 132:
  VAR_5 = FUNC_3(VAR_1, VAR_2);
  break;

 case 130:
  VAR_5 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);
  break;

 case 129:
  VAR_5 = FUNC_5(VAR_1, VAR_2);
  break;

 case 131:
 case 128:
  VAR_5 = FUNC_2(VAR_2->rm_status);
  break;

 default:
  FUNC_1(VAR_1->sc_ue.ue_dev,
      "ctrl message error: unknown event 0x%x\n",
      FUNC_2(VAR_2->rm_type));
  VAR_5 = VAR_0;
  break;
 }
 return (VAR_5);
}

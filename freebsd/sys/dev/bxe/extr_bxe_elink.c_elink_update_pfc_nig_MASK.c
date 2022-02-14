
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct elink_vars {int dummy; } ;
struct elink_params {size_t port; int feature_config_flags; struct bxe_softc* sc; } ;
struct elink_nig_brb_pfc_port_params {int llfc_out_en; int llfc_enable; int pause_enable; int pkt_priority_to_cos; size_t num_of_rx_cos_priority_mask; int llfc_high_priority_classes; int llfc_low_priority_classes; int * rx_cos_priority_mask; } ;
struct bxe_softc {int dummy; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (struct bxe_softc*,int ) ;
 int FUNC_3 (struct bxe_softc*,int ,int) ;
 int FUNC_4 (struct bxe_softc*,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_5(struct elink_params *VAR_27,
  struct elink_vars *VAR_28,
  struct elink_nig_brb_pfc_port_params *VAR_29)
{
 uint32_t VAR_30 = 0, VAR_31 = 0, VAR_32 = 0, VAR_33 = 0;
 uint32_t VAR_34 = 0, VAR_35 = 0, VAR_36 = 0;
 uint32_t VAR_37 = 0;
 struct bxe_softc *VAR_38 = VAR_27->sc;
 uint8_t VAR_39 = VAR_27->port;

 int VAR_40 = VAR_27->feature_config_flags &
  VAR_0;
 FUNC_1(VAR_38, "updating pfc nig parameters\n");





 VAR_30 = FUNC_2(VAR_38, VAR_39 ? VAR_16 :
     VAR_15);



 if (VAR_40) {
  VAR_32 = 0;
  VAR_33 = 0;
  VAR_34 = 0;
  if (FUNC_0(VAR_38))
   VAR_31 = 0;
  else
   VAR_31 = 1;
  VAR_30 &= ~(VAR_39 ? VAR_2 :
         VAR_1);
  VAR_35 = 0;
  VAR_36 = 1;
 } else {
  if (VAR_29) {
   VAR_33 = VAR_29->llfc_out_en;
   VAR_34 = VAR_29->llfc_enable;
   VAR_32 = VAR_29->pause_enable;
  } else
   VAR_32 = 1;

  VAR_30 |= (VAR_39 ? VAR_2 :
   VAR_1);
  VAR_35 = 1;
 }

 if (FUNC_0(VAR_38))
  FUNC_3(VAR_38, VAR_39 ? VAR_4 :
         VAR_3, VAR_32);
 FUNC_3(VAR_38, VAR_39 ? VAR_14 :
        VAR_13, VAR_33);
 FUNC_3(VAR_38, VAR_39 ? VAR_8 :
        VAR_7, VAR_34);
 FUNC_3(VAR_38, VAR_39 ? VAR_22 :
        VAR_21, VAR_32);

 FUNC_3(VAR_38, VAR_39 ? VAR_24 :
        VAR_23, VAR_31);

 FUNC_3(VAR_38, VAR_39 ? VAR_16 :
        VAR_15, VAR_30);

 FUNC_3(VAR_38, VAR_39 ? VAR_6 :
        VAR_5, 0x7);


 FUNC_3(VAR_38, VAR_39 ? VAR_26 :
        VAR_25, VAR_35);


 FUNC_3(VAR_38, VAR_39 ? VAR_19 :
        VAR_17, VAR_36);

 if (VAR_29) {
  uint8_t VAR_41 = 0;
  VAR_37 = VAR_29->pkt_priority_to_cos;

  for (VAR_41 = 0; VAR_41 < VAR_29->num_of_rx_cos_priority_mask; VAR_41++)
   FUNC_4(VAR_38, VAR_41,
  VAR_29->rx_cos_priority_mask[VAR_41], VAR_39);

  FUNC_3(VAR_38, VAR_39 ? VAR_10 :
         VAR_9,
         VAR_29->llfc_high_priority_classes);

  FUNC_3(VAR_38, VAR_39 ? VAR_12 :
         VAR_11,
         VAR_29->llfc_low_priority_classes);
 }
 FUNC_3(VAR_38, VAR_39 ? VAR_20 :
        VAR_18,
        VAR_37);
}

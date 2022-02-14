
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct ums_softc {size_t sc_buttons; struct ums_info* sc_info; } ;
struct TYPE_2__ {int pos; } ;
struct ums_info {int sc_flags; size_t sc_buttons; int sc_iid_x; int * sc_iid_btn; TYPE_1__* sc_loc_btn; int sc_iid_t; TYPE_1__ sc_loc_t; int sc_iid_z; TYPE_1__ sc_loc_z; int sc_iid_w; TYPE_1__ sc_loc_w; int sc_iid_y; TYPE_1__ sc_loc_y; TYPE_1__ sc_loc_x; } ;
typedef int device_t ;


 int FUNC_0 (int ,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,char*,size_t,char*,char*,char*,char*,char*,int ) ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (size_t const*,int ,int ,int ,size_t,TYPE_1__*,int*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ums_softc *VAR_19, device_t VAR_20, const uint8_t *VAR_21,
    uint16_t VAR_22, uint8_t VAR_23)
{
 struct ums_info *VAR_24 = &VAR_19->sc_info[VAR_23];
 uint32_t VAR_25;
 uint8_t VAR_26;
 uint8_t VAR_27;

 if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8, VAR_3),
     VAR_18, VAR_23, &VAR_24->sc_loc_x, &VAR_25, &VAR_24->sc_iid_x)) {

  if ((VAR_25 & VAR_11) == VAR_10) {
   VAR_24->sc_flags |= VAR_15;
  }
 }
 if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8, VAR_4),
     VAR_18, VAR_23, &VAR_24->sc_loc_y, &VAR_25, &VAR_24->sc_iid_y)) {

  if ((VAR_25 & VAR_11) == VAR_10) {
   VAR_24->sc_flags |= VAR_16;
  }
 }

 if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8,
     VAR_2), VAR_18, VAR_23, &VAR_24->sc_loc_z, &VAR_25,
     &VAR_24->sc_iid_z) ||
     FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8,
     VAR_1), VAR_18, VAR_23, &VAR_24->sc_loc_z, &VAR_25,
     &VAR_24->sc_iid_z)) {
  if ((VAR_25 & VAR_11) == VAR_10) {
   VAR_24->sc_flags |= VAR_17;
  }




  if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8,
      VAR_5), VAR_18, VAR_23, &VAR_24->sc_loc_w, &VAR_25,
      &VAR_24->sc_iid_w)) {

   if ((VAR_25 & VAR_11) == VAR_10) {
    VAR_24->sc_flags |= VAR_14;
   }
  }
 } else if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8,
     VAR_5), VAR_18, VAR_23, &VAR_24->sc_loc_z, &VAR_25,
     &VAR_24->sc_iid_z)) {

  if ((VAR_25 & VAR_11) == VAR_10) {
   VAR_24->sc_flags |= VAR_17;
  }
 }







 if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_8,
     VAR_1), VAR_18, VAR_23, &VAR_24->sc_loc_t,
     &VAR_25, &VAR_24->sc_iid_t)) {

  VAR_24->sc_loc_t.pos += 8;

  if ((VAR_25 & VAR_11) == VAR_10) {
   VAR_24->sc_flags |= VAR_13;
  }
 } else if (FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_7,
  VAR_0), VAR_18, VAR_23, &VAR_24->sc_loc_t,
  &VAR_25, &VAR_24->sc_iid_t)) {

  if ((VAR_25 & VAR_11) == VAR_10)
   VAR_24->sc_flags |= VAR_13;
 }


 for (VAR_26 = 0; VAR_26 < VAR_12; VAR_26++) {
  if (!FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_6, (VAR_26 + 1)),
      VAR_18, VAR_23, &VAR_24->sc_loc_btn[VAR_26], ((void*)0),
      &VAR_24->sc_iid_btn[VAR_26])) {
   break;
  }
 }



 for (VAR_27 = 0; (VAR_26 < VAR_12) && (VAR_27 < 2); VAR_26++, VAR_27++) {
  if (!FUNC_2(VAR_21, VAR_22, FUNC_0(VAR_9, (VAR_27 + 1)),
      VAR_18, VAR_23, &VAR_24->sc_loc_btn[VAR_26], ((void*)0),
      &VAR_24->sc_iid_btn[VAR_26])) {
   break;
  }
 }

 VAR_24->sc_buttons = VAR_26;

 if (VAR_26 > VAR_19->sc_buttons)
  VAR_19->sc_buttons = VAR_26;

 if (VAR_24->sc_flags == 0)
  return;


 FUNC_1(VAR_20, "%d buttons and [%s%s%s%s%s] coordinates ID=%u\n",
     (VAR_24->sc_buttons),
     (VAR_24->sc_flags & VAR_15) ? "X" : "",
     (VAR_24->sc_flags & VAR_16) ? "Y" : "",
     (VAR_24->sc_flags & VAR_17) ? "Z" : "",
     (VAR_24->sc_flags & VAR_13) ? "T" : "",
     (VAR_24->sc_flags & VAR_14) ? "W" : "",
     VAR_24->sc_iid_x);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_vars {int dummy; } ;
struct elink_params {scalar_t__ port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


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
 int VAR_27 ;
 int FUNC_0 (struct bxe_softc*,int ,int) ;
 int FUNC_1 (struct elink_params const*,int const) ;
 int FUNC_2 (struct elink_vars const*) ;

__attribute__((used)) static void FUNC_3(const struct elink_params *VAR_28,
     const struct elink_vars *VAR_29)
{
 struct bxe_softc *VAR_30 = VAR_28->sc;
 const uint8_t VAR_31 = VAR_28->port;
 const uint32_t VAR_32 = FUNC_2(VAR_29);





 if (VAR_31) {
  FUNC_0(VAR_30, VAR_26, 0x543210);
  FUNC_0(VAR_30, VAR_27, 0x0);
 } else {
  FUNC_0(VAR_30, VAR_13, 0x76543210);
  FUNC_0(VAR_30, VAR_14, 0x8);
 }



 FUNC_0(VAR_30, (VAR_31) ? VAR_25 :
     VAR_25, 0x100);



 if (VAR_31) {

  FUNC_0(VAR_30, VAR_15, 0x210543);
  FUNC_0(VAR_30, VAR_16, 0x0);
 } else {

  FUNC_0(VAR_30, VAR_0,
         0x43210876);
  FUNC_0(VAR_30, VAR_1, 0x5);
 }
 if (VAR_31)
  FUNC_0(VAR_30, VAR_17, 0x3f);
 else
  FUNC_0(VAR_30, VAR_2, 0x1ff);

 FUNC_0(VAR_30, (VAR_31) ? VAR_18 :
     VAR_3, 0);







 FUNC_0(VAR_30, (VAR_31) ? VAR_19 :
     VAR_4, 0x0);
 FUNC_0(VAR_30, (VAR_31) ? VAR_20 :
     VAR_5, 0x0);
 FUNC_0(VAR_30, (VAR_31) ? VAR_21 :
     VAR_6, 0x0);
 FUNC_0(VAR_30, (VAR_31) ? VAR_22 :
     VAR_7, 0x0);
 FUNC_0(VAR_30, (VAR_31) ? VAR_23 :
     VAR_8, 0x0);
 FUNC_0(VAR_30, (VAR_31) ? VAR_24 :
     VAR_9, 0x0);
 if (!VAR_31) {
  FUNC_0(VAR_30, VAR_10, 0x0);
  FUNC_0(VAR_30, VAR_11, 0x0);
  FUNC_0(VAR_30, VAR_12, 0x0);
 }

 FUNC_1(VAR_28, VAR_32);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
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
 int FUNC_0 (struct bxe_softc*,int ,int const) ;
 int FUNC_1 (int const) ;

__attribute__((used)) static void FUNC_2(
 const struct elink_params *VAR_15,
 const uint32_t VAR_16)
{
 struct bxe_softc *VAR_17 = VAR_15->sc;
 const uint8_t VAR_18 = VAR_15->port;
 const uint32_t VAR_19 =
     FUNC_1(VAR_16);

 FUNC_0(VAR_17, (VAR_18) ? VAR_9 :
  VAR_0, VAR_19);
 FUNC_0(VAR_17, (VAR_18) ? VAR_10 :
     VAR_1, VAR_19);
 FUNC_0(VAR_17, (VAR_18) ? VAR_11 :
     VAR_2, VAR_19);
 FUNC_0(VAR_17, (VAR_18) ? VAR_12 :
     VAR_3, VAR_19);
 FUNC_0(VAR_17, (VAR_18) ? VAR_13 :
     VAR_4, VAR_19);
 FUNC_0(VAR_17, (VAR_18) ? VAR_14 :
     VAR_5, VAR_19);

 if (!VAR_18) {
  FUNC_0(VAR_17, VAR_6,
   VAR_19);
  FUNC_0(VAR_17, VAR_7,
   VAR_19);
  FUNC_0(VAR_17, VAR_8,
   VAR_19);
 }
}

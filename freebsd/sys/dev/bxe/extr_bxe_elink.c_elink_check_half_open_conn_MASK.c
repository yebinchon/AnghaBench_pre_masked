
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct elink_vars {int phy_flags; } ;
struct elink_params {int port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct bxe_softc*,scalar_t__) ;
 int FUNC_3 (struct bxe_softc*,scalar_t__,scalar_t__*,int) ;
 int FUNC_4 (struct bxe_softc*,scalar_t__,int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (struct elink_params*,struct elink_vars*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static
elink_status_t FUNC_6(struct elink_params *VAR_18,
    struct elink_vars *VAR_19,
    uint8_t VAR_20)
{
 struct bxe_softc *VAR_21 = VAR_18->sc;
 uint32_t VAR_22 = 0;
 uint32_t VAR_23;

 if (((VAR_19->phy_flags & VAR_13) == 0) ||
     (FUNC_2(VAR_21, VAR_9 + VAR_18->port*4)))
  return VAR_2;

 if (FUNC_1(VAR_21) &&
     (FUNC_2(VAR_21, VAR_8) &
       (VAR_7))) {





  VAR_23 = (VAR_18->port) ? VAR_4 : VAR_3;


  FUNC_4(VAR_21, VAR_23 + VAR_16, 0);
  FUNC_4(VAR_21, VAR_23 + VAR_16,
         VAR_14 |
         VAR_15);
  if (FUNC_2(VAR_21, VAR_23 + VAR_17))
   VAR_22 = 1;

  FUNC_5(VAR_18, VAR_19, VAR_22,
      VAR_12,
      VAR_5, VAR_20);
 } else if (FUNC_2(VAR_21, VAR_8) &
     (VAR_6 << VAR_18->port)) {

  uint32_t VAR_24;
  uint32_t VAR_25[2];
  VAR_23 = VAR_18->port ? VAR_11 :
   VAR_10;

  if (FUNC_0(VAR_21))
   VAR_24 = VAR_0;
  else
   VAR_24 = VAR_1;

  FUNC_3(VAR_21, VAR_23 + VAR_24, VAR_25, 2);
  VAR_22 = (VAR_25[0] > 0);

  FUNC_5(VAR_18, VAR_19, VAR_22,
      VAR_12,
      VAR_5, VAR_20);
 }
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct elink_phy {int supported; int flags; int req_line_speed; } ;
struct elink_params {int loopback_mode; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int ) ;
 int FUNC_1 (struct bxe_softc*,char*,int ,int ) ;
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
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;
 int FUNC_5 (struct elink_phy*,struct elink_params*) ;
 int FUNC_6 (struct elink_params*,struct elink_phy*) ;

__attribute__((used)) static void FUNC_7(struct elink_phy *VAR_10,
     struct elink_params *VAR_11)
{
 struct bxe_softc *VAR_12 = VAR_11->sc;
 uint16_t VAR_13;
 uint32_t VAR_14;
 FUNC_1(VAR_12, "Setting Warpcore loopback type %x, speed %d\n",
         VAR_11->loopback_mode, VAR_10->req_line_speed);

 if (VAR_10->req_line_speed < VAR_1 ||
     VAR_10->supported & VAR_2) {



  FUNC_0(VAR_12, VAR_10, VAR_4,
      VAR_3, 0);

  FUNC_3(VAR_12, VAR_10, VAR_5,
      VAR_8,
      0x10);

  VAR_14 = FUNC_5(VAR_10, VAR_11);
  FUNC_2(VAR_12, VAR_10, VAR_5,
    VAR_9, &VAR_13);
  VAR_13 |= (1<<VAR_14);
  if (VAR_10->flags & VAR_0)
   VAR_13 |= (2<<VAR_14);
  FUNC_4(VAR_12, VAR_10, VAR_5,
     VAR_9,
     VAR_13);


  FUNC_6(VAR_11, VAR_10);
 } else {

  FUNC_3(VAR_12, VAR_10, VAR_5,
      VAR_6,
      0x4000);
  FUNC_3(VAR_12, VAR_10, VAR_5,
      VAR_7, 0x1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct elink_vars {int flow_ctrl; } ;
struct elink_params {int feature_config_flags; scalar_t__ port; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bxe_softc*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct bxe_softc*,int,int*,int) ;

__attribute__((used)) static void FUNC_3(struct elink_params *VAR_10,
       struct elink_vars *VAR_11,
       uint8_t VAR_12)
{



 uint32_t VAR_13[2];
 struct bxe_softc *VAR_14 = VAR_10->sc;
 uint32_t VAR_15 = VAR_10->port ? VAR_9 :
  VAR_8;
 uint32_t VAR_16 = 0x14;

 if ((!(VAR_10->feature_config_flags &
       VAR_5)) &&
  (VAR_11->flow_ctrl & VAR_6))

  VAR_16 |= (1<<5);
 VAR_13[0] = VAR_16;
 VAR_13[1] = 0;
 FUNC_2(VAR_14, VAR_15 + VAR_2, VAR_13, 2);
 FUNC_0(30);


 VAR_16 = 0xc0;
 if (!(VAR_10->feature_config_flags &
    VAR_5) &&
     (VAR_11->flow_ctrl & VAR_7))
  VAR_16 |= 0x800000;
 VAR_13[0] = VAR_16;
 VAR_13[1] = 0;
 FUNC_2(VAR_14, VAR_15 + VAR_3, VAR_13, 2);

 if (VAR_10->feature_config_flags & VAR_5) {
  FUNC_1(VAR_14, "PFC is enabled\n");

  VAR_13[0] = 0x0;
  VAR_13[0] |= (1<<0);
  VAR_13[0] |= (1<<1);
  VAR_13[0] |= (1<<2);
  VAR_13[0] |= (1<<3);
  VAR_13[0] |= (1<<5);
  VAR_13[1] = 0;
  FUNC_2(VAR_14, VAR_15 + VAR_1,
       VAR_13, 2);

  VAR_13[0] &= ~(1<<2);
 } else {
  FUNC_1(VAR_14, "PFC is disabled\n");

  VAR_13[0] = 0x8;
  VAR_13[1] = 0;
 }

 FUNC_2(VAR_14, VAR_15 + VAR_1, VAR_13, 2);






 VAR_16 = 0x8000;
 if (VAR_10->feature_config_flags & VAR_5)
  VAR_16 |= (1<<16);

 VAR_13[0] = VAR_16;
 VAR_13[1] = 0;
 FUNC_2(VAR_14, VAR_15 + VAR_4,
      VAR_13, 2);


 VAR_16 = 0x3;
 if (VAR_12) {
  VAR_16 |= 0x4;
  FUNC_1(VAR_14, "enable bmac loopback\n");
 }

 if (VAR_10->feature_config_flags & VAR_5)
  VAR_16 |= ((1<<6)|(1<<5));

 VAR_13[0] = VAR_16;
 VAR_13[1] = 0;
 FUNC_2(VAR_14, VAR_15 + VAR_0, VAR_13, 2);
}

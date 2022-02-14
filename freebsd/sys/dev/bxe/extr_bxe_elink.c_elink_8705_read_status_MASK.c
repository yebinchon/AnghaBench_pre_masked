
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_vars {int line_speed; } ;
struct elink_phy {int dummy; } ;
struct elink_params {struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int,int*) ;
 int FUNC_3 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static uint8_t FUNC_4(struct elink_phy *VAR_5,
     struct elink_params *VAR_6,
     struct elink_vars *VAR_7)
{
 uint8_t VAR_8 = 0;
 uint16_t VAR_9, VAR_10;
 struct bxe_softc *VAR_11 = VAR_6->sc;
 FUNC_0(VAR_11, "read status 8705\n");
 FUNC_2(VAR_11, VAR_5,
        VAR_3, VAR_4, &VAR_9);
 FUNC_1(VAR_11, "8705 LASI status 0x%x\n", VAR_9);

 FUNC_2(VAR_11, VAR_5,
        VAR_3, VAR_4, &VAR_9);
 FUNC_1(VAR_11, "8705 LASI status 0x%x\n", VAR_9);

 FUNC_2(VAR_11, VAR_5,
        VAR_1, VAR_2, &VAR_10);

 FUNC_2(VAR_11, VAR_5,
        VAR_1, 0xc809, &VAR_9);
 FUNC_2(VAR_11, VAR_5,
        VAR_1, 0xc809, &VAR_9);

 FUNC_1(VAR_11, "8705 1.c809 val=0x%x\n", VAR_9);
 VAR_8 = ((VAR_10 & 0x1) && (VAR_9 & (1<<9)) && ((VAR_9 & (1<<8)) == 0));
 if (VAR_8) {
  VAR_7->line_speed = VAR_0;
  FUNC_3(VAR_5, VAR_6, VAR_7);
 }
 return VAR_8;
}

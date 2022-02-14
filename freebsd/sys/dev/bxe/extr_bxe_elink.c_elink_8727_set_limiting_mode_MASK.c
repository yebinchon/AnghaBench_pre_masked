
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bxe_softc*,struct elink_phy*,int ,int ,int*) ;
 int FUNC_1 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static elink_status_t FUNC_2(struct bxe_softc *VAR_4,
     struct elink_phy *VAR_5,
     uint16_t VAR_6)
{
 uint16_t VAR_7;
 uint16_t VAR_8;
 FUNC_0(VAR_4, VAR_5,
   VAR_1,
   VAR_2,
   &VAR_7);

 FUNC_1(VAR_4, VAR_5,
    VAR_1,
    VAR_2,
    (VAR_7 & ~(1<<9)));

 FUNC_0(VAR_4, VAR_5,
   VAR_1,
   VAR_3,
   &VAR_8);

 FUNC_1(VAR_4, VAR_5,
    VAR_1,
    VAR_3,
    (VAR_8 & 0xff00) | (VAR_6 & 0x00ff));

 FUNC_1(VAR_4, VAR_5,
    VAR_1,
    VAR_2,
    (VAR_7 | (1<<9)));

 return VAR_0;
}

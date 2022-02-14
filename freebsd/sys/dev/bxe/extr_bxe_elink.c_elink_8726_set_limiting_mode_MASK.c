
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct elink_phy {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*) ;
 int FUNC_1 (struct bxe_softc*,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bxe_softc*,struct elink_phy*,int ,int ,scalar_t__*) ;
 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int ,int ,int) ;

__attribute__((used)) static elink_status_t FUNC_4(struct bxe_softc *VAR_6,
     struct elink_phy *VAR_7,
     uint16_t VAR_8)
{
 uint16_t VAR_9;

 FUNC_2(VAR_6, VAR_7,
   VAR_2,
   VAR_5,
   &VAR_9);
 FUNC_1(VAR_6, "Current Limiting mode is 0x%x\n",
   VAR_9);

 if (VAR_8 == VAR_0) {
  FUNC_0(VAR_6, "Setting LIMITING MODE\n");
  FUNC_3(VAR_6, VAR_7,
     VAR_2,
     VAR_5,
     VAR_0);
 } else {

  FUNC_0(VAR_6, "Setting LRM MODE\n");




  if (VAR_9 != VAR_0)
   return VAR_1;

  FUNC_3(VAR_6, VAR_7,
     VAR_2,
     VAR_3,
     0);
  FUNC_3(VAR_6, VAR_7,
     VAR_2,
     VAR_5,
     0x128);
  FUNC_3(VAR_6, VAR_7,
     VAR_2,
     VAR_4,
     0x4008);
  FUNC_3(VAR_6, VAR_7,
     VAR_2,
     VAR_3,
     0xaaaa);
 }
 return VAR_1;
}

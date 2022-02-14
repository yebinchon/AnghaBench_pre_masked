
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 int FUNC_0 (struct bxe_softc*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct bxe_softc*,int*,int*,int ,int) ;
 scalar_t__ FUNC_2 (struct bxe_softc*,int*,int*,int ,int) ;
 scalar_t__ FUNC_3 (struct bxe_softc*,int*,int*,int ,int) ;
 scalar_t__ FUNC_4 (struct bxe_softc*,int*,int*,int ,int) ;
 int FUNC_5 (struct bxe_softc*,int ,int ) ;

__attribute__((used)) static elink_status_t FUNC_6(struct bxe_softc *VAR_3, uint32_t VAR_4[],
         uint32_t VAR_5[], uint8_t VAR_6,
         uint32_t VAR_7, uint32_t VAR_8)
{
 elink_status_t VAR_9 = VAR_2;

 switch (VAR_7) {
 case 136:
  VAR_9 = FUNC_1(VAR_3, VAR_4,
      VAR_5,
      VAR_6, VAR_8);
  break;
 case 132:
 case 130:
 case 129:
  VAR_9 = FUNC_4(VAR_3, VAR_4,
      VAR_5,
      VAR_6, VAR_8);
  break;

 case 131:



  VAR_9 = FUNC_3(VAR_3, VAR_4,
      VAR_5,
      VAR_6, VAR_8);
  break;
 case 135:
 case 134:
 case 133:



  VAR_9 = FUNC_2(VAR_3, VAR_4,
      VAR_5,
      VAR_6, VAR_8);
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 default:
  FUNC_0(VAR_3,
      "ext_phy 0x%x common init not required\n",
      VAR_7);
  break;
 }

 if (VAR_9 != VAR_2)
  FUNC_5(VAR_3, VAR_0, 0);


 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct bxe_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bxe_softc*,int ) ;






__attribute__((used)) static uint32_t FUNC_1(struct bxe_softc *VAR_3,
          uint32_t VAR_4, uint8_t VAR_5)
{
 uint32_t VAR_6 = 0;
 switch (VAR_4) {
 case 129:
  break;
 case 131:
  if (FUNC_0(VAR_3, VAR_2))
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_0;
  break;
 case 130:
  if (FUNC_0(VAR_3, VAR_2))
   VAR_6 = VAR_0;
  else
   VAR_6 = VAR_1;
  break;
 case 132:
  VAR_6 = (VAR_5) ? VAR_1 : VAR_0;
  break;
 case 128:
  VAR_6 = (VAR_5) ? VAR_0 : VAR_1;
  break;
 default:
  break;
 }
 return VAR_6;

}

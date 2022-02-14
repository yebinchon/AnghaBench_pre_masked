
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct muge_softc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct muge_softc*,int,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(struct muge_softc *VAR_4, uint16_t VAR_5, uint8_t *VAR_6,
    uint16_t VAR_7)
{
 uint8_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_4, VAR_3, &VAR_8, 1);
 if (VAR_9 == 0) {
  if (VAR_8 == VAR_1) {
  } else if (VAR_8 == VAR_2) {
   VAR_5 += 0x100;
  } else {
   VAR_9 = -VAR_0;
  }
  if (!VAR_9)
   VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7);
 }
 return (VAR_9);
}

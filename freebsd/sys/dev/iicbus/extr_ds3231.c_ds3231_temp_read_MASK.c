
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ds3231_softc {int sc_dev; } ;
typedef int int16_t ;
typedef int buf8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int*,int,int ) ;

__attribute__((used)) static int
FUNC_1(struct ds3231_softc *VAR_7, int *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12[2];
 uint16_t VAR_13;

 VAR_9 = FUNC_0(VAR_7->sc_dev, VAR_3, VAR_12, sizeof(VAR_12),
     VAR_5);
 if (VAR_9 != 0)
  return (VAR_9);
 VAR_13 = (VAR_12[0] << 8) | (VAR_12[1] & 0xff);
 VAR_10 = 0;
 if (VAR_13 & VAR_2) {
  VAR_13 = ~(VAR_13 & VAR_4) + 1;
  VAR_10 = 1;
 }
 *VAR_8 = ((int16_t)VAR_13 >> 8) * 10;
 VAR_11 = 0;
 if (VAR_13 & VAR_0)
  VAR_11 += 250;
 if (VAR_13 & VAR_1)
  VAR_11 += 500;
 VAR_11 /= 100;
 *VAR_8 += VAR_11;
 if (VAR_10)
  *VAR_8 = -(*VAR_8);
 *VAR_8 += VAR_6;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rt2661_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt2661_softc*,int ) ;
 int FUNC_1 (struct rt2661_softc*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct rt2661_softc *VAR_6, uint8_t VAR_7, uint16_t VAR_8)
{
 if (FUNC_0(VAR_6, VAR_2) & VAR_1)
  return VAR_0;

 FUNC_1(VAR_6, VAR_2,
     VAR_1 | VAR_5 << 16 | VAR_8);

 FUNC_1(VAR_6, VAR_3, VAR_4 | VAR_7);

 return 0;
}

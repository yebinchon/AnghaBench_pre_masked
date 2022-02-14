
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ig4iic_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(ig4iic_softc_t *VAR_5, uint32_t VAR_6)
{
 int VAR_7;
 int VAR_8;
 uint32_t VAR_9;





 FUNC_0(VAR_5, 0);
 if (VAR_6 & VAR_0)
  FUNC_2(VAR_5, VAR_1);

 FUNC_3(VAR_5, VAR_3, VAR_6);
 VAR_8 = VAR_4;

 for (VAR_7 = 100; VAR_7 > 0; --VAR_7) {
  VAR_9 = FUNC_2(VAR_5, VAR_2);
  if (((VAR_9 ^ VAR_6) & VAR_0) == 0) {
   VAR_8 = 0;
   break;
  }
  FUNC_1("i2cslv", 1);
 }
 return (VAR_8);
}

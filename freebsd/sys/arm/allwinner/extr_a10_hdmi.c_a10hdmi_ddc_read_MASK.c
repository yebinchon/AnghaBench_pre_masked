
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct a10hdmi_softc {int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct a10hdmi_softc*,int ,int,int,int) ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct a10hdmi_softc *VAR_4, int VAR_5, uint8_t *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;
 uint8_t *VAR_11;

 VAR_11 = VAR_6;
 VAR_7 = VAR_3;
 VAR_8 = (VAR_5 & 1) ? VAR_3 : 0;

 while (VAR_7 > 0) {
  VAR_9 = FUNC_2(VAR_7, VAR_1);
  VAR_10 = FUNC_0(VAR_4, VAR_0, VAR_5 >> 1, VAR_8, VAR_9);
  if (VAR_10 != 0)
   return (VAR_10);

  FUNC_1(VAR_4->res, VAR_2, VAR_11, VAR_9);

  VAR_11 += VAR_9;
  VAR_8 += VAR_9;
  VAR_7 -= VAR_9;
 }

 return (0);
}

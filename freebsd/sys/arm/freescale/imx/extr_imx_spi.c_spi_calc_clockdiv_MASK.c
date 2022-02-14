
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct spi_softc {int basefreq; int debug; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,int,int) ;

__attribute__((used)) static u_int
FUNC_1(struct spi_softc *VAR_2, u_int VAR_3)
{
 u_int VAR_4, VAR_5;


 if (VAR_2->basefreq <= VAR_3)
  return (0);





 for (VAR_4 = 0; VAR_4 < 16; ++VAR_4) {
  VAR_5 = ((VAR_2->basefreq >> VAR_4) / VAR_3) - 1;
  if (VAR_5 < 16)
   break;
 }
 if (VAR_4 == 16) {

  VAR_5 = 15;
  VAR_4 = 15;
 }

 if (VAR_2->debug >= 2) {
  FUNC_0(VAR_2->dev,
      "base %u bus %u; pre %u, post %u; actual busfreq %u\n",
      VAR_2->basefreq, VAR_3, VAR_5, VAR_4,
      (VAR_2->basefreq / (VAR_5 + 1)) / (1 << VAR_4));
 }

 return (VAR_5 << VAR_1) | (VAR_4 << VAR_0);
}

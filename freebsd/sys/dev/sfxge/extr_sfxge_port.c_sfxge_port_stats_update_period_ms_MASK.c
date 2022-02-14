
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sfxge_softc {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_1 ;

__attribute__((used)) static uint16_t
FUNC_1(struct sfxge_softc *VAR_2)
{
 int VAR_3 = VAR_1;

 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev,
   "treat negative stats update period %d as 0 (disable)\n",
    VAR_3);
  VAR_3 = 0;
 } else if (VAR_3 > VAR_0) {
  FUNC_0(VAR_2->dev,
   "treat too big stats update period %d as %u\n",
   VAR_3, VAR_0);
  VAR_3 = VAR_0;
 }

 return VAR_3;
}

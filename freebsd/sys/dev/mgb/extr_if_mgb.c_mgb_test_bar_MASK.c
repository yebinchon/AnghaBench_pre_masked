
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mgb_softc {int dev; } ;


 int FUNC_0 (struct mgb_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct mgb_softc *VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6;

 VAR_4 = FUNC_0(VAR_3, 0);
 VAR_5 = VAR_4 >> 16;
 VAR_6 = VAR_4 & 0xFFFF;
 if (VAR_5 == VAR_1 ||
     VAR_5 == VAR_2) {
  return 0;
 } else {
  FUNC_1(VAR_3->dev, "ID check failed.\n");
  return VAR_0;
 }
}

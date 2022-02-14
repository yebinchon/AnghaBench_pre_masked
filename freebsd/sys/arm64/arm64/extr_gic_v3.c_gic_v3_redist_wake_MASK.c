
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gic_v3_softc {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct gic_v3_softc*,int,int ) ;
 int FUNC_4 (struct gic_v3_softc*,int,int ,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int
FUNC_6(struct gic_v3_softc *VAR_5)
{
 uint32_t VAR_6;
 size_t VAR_7 = 1000000;

 VAR_6 = FUNC_3(VAR_5, 4, VAR_0);

 VAR_6 &= ~VAR_2;
 FUNC_4(VAR_5, 4, VAR_0, VAR_6);




 while ((FUNC_3(VAR_5, 4, VAR_0) & VAR_1) != 0) {
  FUNC_0(1);
  if (VAR_7-- == 0) {
   FUNC_5("Could not wake Re-Distributor for CPU%u",
       FUNC_1(VAR_4));
  }
 }

 if (VAR_3) {
  FUNC_2(VAR_5->dev, "CPU%u Re-Distributor woke up\n",
      FUNC_1(VAR_4));
 }

 return (0);
}

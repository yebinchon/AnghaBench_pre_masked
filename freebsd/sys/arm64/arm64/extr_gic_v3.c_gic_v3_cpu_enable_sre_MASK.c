
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
struct gic_v3_softc {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_4 () ;

__attribute__((used)) static int
FUNC_5(struct gic_v3_softc *VAR_4)
{
 uint64_t VAR_5;
 u_int VAR_6;

 VAR_6 = FUNC_0(VAR_6);




 VAR_5 = FUNC_1(VAR_3);
 VAR_5 |= VAR_1;
 FUNC_2(VAR_3, VAR_5);
 FUNC_4();



 VAR_5 = FUNC_1(VAR_3);
 if ((VAR_5 & VAR_1) == 0) {

  FUNC_3(VAR_4->dev, "ERROR: CPU%u cannot enable CPU interface "
      "via system registers\n", VAR_6);
  return (VAR_0);
 } else if (VAR_2) {
  FUNC_3(VAR_4->dev,
      "CPU%u enabled CPU interface via system registers\n",
      VAR_6);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct bfe_softc {int bfe_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct bfe_softc*,int ,int*) ;
 int FUNC_2 (struct bfe_softc*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct bfe_softc *VAR_2)
{
 u_int32_t VAR_3;

 FUNC_2(VAR_2, 0, VAR_0);
 FUNC_0(100);
 FUNC_1(VAR_2, 0, &VAR_3);
 if (VAR_3 & VAR_0) {
  FUNC_3(VAR_2->bfe_dev, "PHY Reset would not complete.\n");
  return (VAR_1);
 }
 return (0);
}

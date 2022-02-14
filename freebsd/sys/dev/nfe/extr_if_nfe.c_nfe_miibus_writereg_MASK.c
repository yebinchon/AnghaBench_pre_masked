
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nfe_softc {int nfe_dev; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfe_softc*,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct nfe_softc*,int ,int) ;
 struct nfe_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct nfe_softc *VAR_12 = FUNC_3(VAR_8);
 uint32_t VAR_13;
 int VAR_14;

 FUNC_2(VAR_12, VAR_4, 0xf);

 if (FUNC_1(VAR_12, VAR_2) & VAR_1) {
  FUNC_2(VAR_12, VAR_2, VAR_1);
  FUNC_0(100);
 }

 FUNC_2(VAR_12, VAR_3, VAR_11);
 VAR_13 = VAR_5 | (VAR_9 << VAR_0) | VAR_10;
 FUNC_2(VAR_12, VAR_2, VAR_13);

 for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++) {
  FUNC_0(100);
  if (!(FUNC_1(VAR_12, VAR_2) & VAR_1))
   break;
 }




 return (0);
}

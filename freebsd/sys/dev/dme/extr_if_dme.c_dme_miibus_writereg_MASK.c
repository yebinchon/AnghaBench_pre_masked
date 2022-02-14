
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dme_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dme_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct dme_softc*,int ) ;
 int FUNC_3 (struct dme_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_8, int VAR_9, int VAR_10, int VAR_11)
{
 struct dme_softc *VAR_12;
 int VAR_13;


 if (VAR_9 > 3)
  return (0);

 VAR_12 = FUNC_1(VAR_8);


 FUNC_3(VAR_12, VAR_0, (VAR_9 << 6) | VAR_10);
 FUNC_3(VAR_12, VAR_3, VAR_11 & 0xFF);
 FUNC_3(VAR_12, VAR_2, (VAR_11 >> 8) & 0xFF);

 FUNC_3(VAR_12, VAR_1, VAR_5 | VAR_6);


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  if ((FUNC_2(VAR_12, VAR_1) & VAR_7) == 0)
   break;
  FUNC_0(1);
 }


 FUNC_3(VAR_12, VAR_1, 0);

 return (0);
}

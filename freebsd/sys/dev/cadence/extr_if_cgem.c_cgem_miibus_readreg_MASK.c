
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgem_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct cgem_softc*,int ) ;
 int FUNC_2 (struct cgem_softc*,int ,int) ;
 struct cgem_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_12, int VAR_13, int VAR_14)
{
 struct cgem_softc *VAR_15 = FUNC_3(VAR_12);
 int VAR_16, VAR_17;

 FUNC_2(VAR_15, VAR_2,
     VAR_3 | VAR_5 |
     VAR_6 |
     (VAR_13 << VAR_7) |
     (VAR_14 << VAR_8));


 VAR_16=0;
 while ((FUNC_1(VAR_15, VAR_0) & VAR_1) == 0) {
  FUNC_0(5);
  if (++VAR_16 > 200) {
   FUNC_4(VAR_12, "phy read timeout: %d\n", VAR_14);
   return (-1);
  }
 }

 VAR_17 = FUNC_1(VAR_15, VAR_2) & VAR_4;

 if (VAR_14 == VAR_11)




  VAR_17 &= ~(VAR_10 | VAR_9);

 return (VAR_17);
}

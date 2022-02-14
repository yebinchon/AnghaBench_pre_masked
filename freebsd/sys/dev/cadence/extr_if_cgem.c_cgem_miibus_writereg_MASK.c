
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
 int FUNC_1 (struct cgem_softc*,int ) ;
 int FUNC_2 (struct cgem_softc*,int ,int) ;
 struct cgem_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
 struct cgem_softc *VAR_13 = FUNC_3(VAR_9);
 int VAR_14;

 FUNC_2(VAR_13, VAR_2,
     VAR_3 | VAR_5 |
     VAR_6 |
     (VAR_10 << VAR_7) |
     (VAR_11 << VAR_8) |
     (VAR_12 & VAR_4));


 VAR_14 = 0;
 while ((FUNC_1(VAR_13, VAR_0) & VAR_1) == 0) {
  FUNC_0(5);
  if (++VAR_14 > 200) {
   FUNC_4(VAR_9, "phy write timeout: %d\n", VAR_11);
   return (-1);
  }
 }

 return (0);
}

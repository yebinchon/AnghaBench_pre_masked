
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
struct cbb_softc {int irq_res; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct resource* FUNC_0 (int ,int ,int,int*,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_2 (int ,int,int,struct resource*) ;
 int FUNC_3 (int ,int,int,struct resource*) ;
 int FUNC_4 (struct cbb_softc*,struct resource*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ) ;
 struct cbb_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static struct resource *
FUNC_11(device_t VAR_6, device_t VAR_7, int VAR_8,
    int *VAR_9, rman_res_t VAR_10, rman_res_t VAR_11, rman_res_t VAR_12, u_int VAR_13)
{
 struct cbb_softc *VAR_14 = FUNC_6(VAR_6);
 int VAR_15;
 struct resource *VAR_16;
 rman_res_t VAR_17;

 switch (VAR_8) {
 case 129:
  VAR_15 = FUNC_9(VAR_14->irq_res);
  if (VAR_10 > VAR_15 || VAR_11 < VAR_15 || VAR_12 != 1) {
   FUNC_7(VAR_7, "requested interrupt %jd-%jd,"
       "count = %jd not supported by cbb\n",
       VAR_10, VAR_11, VAR_12);
   return (((void*)0));
  }
  VAR_10 = VAR_11 = VAR_15;
  VAR_13 |= VAR_3;
  break;
 case 130:
  if (VAR_10 <= VAR_4)
   VAR_10 = VAR_4;
  if (VAR_11 < VAR_10)
   VAR_11 = VAR_10;
  if (VAR_12 > (1 << FUNC_1(VAR_13)))
   VAR_13 = (VAR_13 & ~VAR_2) |
       FUNC_10(VAR_12);
  break;
 case 128:
  if (VAR_10 <= VAR_5)
   VAR_10 = VAR_5;
  if (VAR_11 < VAR_10)
   VAR_11 = VAR_10;
  if (VAR_12 < VAR_0)
   VAR_17 = VAR_0;
  else
   VAR_17 = VAR_12;
  if (VAR_17 > (1 << FUNC_1(VAR_13)))
   VAR_13 = (VAR_13 & ~VAR_2) |
       FUNC_10(VAR_17);
  break;
 }
 VAR_16 = FUNC_0(FUNC_5(VAR_6), VAR_7, VAR_8, VAR_9,
     VAR_10, VAR_11, VAR_12, VAR_13 & ~VAR_1);
 if (VAR_16 == ((void*)0)) {
  FUNC_8("cbb alloc res fail type %d rid %x\n", VAR_8, *VAR_9);
  return (((void*)0));
 }
 FUNC_4(VAR_14, VAR_16, VAR_8, *VAR_9);
 if (VAR_13 & VAR_1)
  if (FUNC_2(VAR_7, VAR_8, *VAR_9, VAR_16) != 0) {
   FUNC_3(VAR_7, VAR_8, *VAR_9, VAR_16);
   return (((void*)0));
  }

 return (VAR_16);
}

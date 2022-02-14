
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cbb_softc {int * exca; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cbb_softc*,int ) ;
 int FUNC_4 (int ,int ) ;
 struct cbb_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_12)
{
 struct cbb_softc *VAR_13 = FUNC_5(VAR_12);
 uint32_t VAR_14, VAR_15;
 uint32_t VAR_16;


 FUNC_7(&VAR_13->exca[0], VAR_8, VAR_9);

 VAR_14 = FUNC_2(VAR_12);
 VAR_15 = FUNC_1(VAR_12);
 VAR_16 = FUNC_3(VAR_13, VAR_5);
 if ((VAR_16 & VAR_6) && (VAR_14 & VAR_15))
  return 0;

 FUNC_4(VAR_12, VAR_2);
 if (VAR_14 & VAR_4)
  FUNC_4(VAR_12, FUNC_0(VAR_11));
 else if (VAR_14 & VAR_3)
  FUNC_4(VAR_12, FUNC_0(VAR_10));
 else if (VAR_14 & VAR_0)
  FUNC_4(VAR_12, FUNC_0(3));
 else if (VAR_14 & VAR_1)
  FUNC_4(VAR_12, FUNC_0(5));
 else {
  FUNC_6(VAR_12, "Unknown card voltage\n");
  return (VAR_7);
 }
 return (0);
}

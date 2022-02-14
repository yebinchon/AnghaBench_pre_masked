
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tmc_softc {int res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct tmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct tmc_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = FUNC_2(VAR_4);

 if (FUNC_0(VAR_5->res, VAR_2) & VAR_0)
  return (-1);


 FUNC_1(VAR_5->res, VAR_2, VAR_0);
 if ((FUNC_0(VAR_5->res, VAR_2) & VAR_0) == 0)
  FUNC_3("Not enabled\n");

 do {
  VAR_6 = FUNC_0(VAR_5->res, VAR_3);
 } while ((VAR_6 & VAR_1) == 1);

 if ((FUNC_0(VAR_5->res, VAR_2) & VAR_0) == 0)
  FUNC_3("Not enabled\n");

 return (0);
}

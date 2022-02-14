
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int e6000sw_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, e6000sw_softc_t *VAR_6, int VAR_7)
{
 uint32_t VAR_8;

 if (VAR_7 == VAR_3)
  return (0);

 if (FUNC_0(VAR_6, VAR_0, VAR_1)) {
  FUNC_1(VAR_5, "ATU unit is busy, cannot access\n");
  return (VAR_2);
 }
 VAR_8 = FUNC_2(VAR_6, VAR_4, VAR_0);
 FUNC_3(VAR_6, VAR_4, VAR_0,
     (VAR_8 | VAR_1 | VAR_7));
 if (FUNC_0(VAR_6, VAR_0, VAR_1))
  FUNC_1(VAR_5, "Timeout while flushing ATU\n");

 return (0);
}

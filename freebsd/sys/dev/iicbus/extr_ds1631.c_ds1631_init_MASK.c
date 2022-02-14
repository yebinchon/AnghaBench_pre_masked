
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ds1631_softc {int init_done; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ds1631_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_5, uint32_t VAR_6)
{
 uint8_t VAR_7;
 int VAR_8;
 struct ds1631_softc *VAR_9;

 VAR_9 = FUNC_0(VAR_5);

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_0, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_1(VAR_5, "ds1631 read config failed: %x\n", VAR_8);
  return (-1);
 }


 if (VAR_7 & ~VAR_2)
  VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_4, &VAR_7, 0);





 VAR_7 = VAR_1;

 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_0, &VAR_7, 1);
 if (VAR_8 < 0) {
  FUNC_1(VAR_5, "ds1631 write config failed: %x\n", VAR_8);
  return (-1);
 }


 VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_3, &VAR_7, 0);

 if (VAR_8 < 0) {
  FUNC_1(VAR_5, "ds1631 write start failed: %x\n", VAR_8);
  return (-1);
 }

 VAR_9->init_done = 1;

 return (0);

}

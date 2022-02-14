
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct iicoc_softc {int i2cdev_addr; int sc_mtx; } ;
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
 struct iicoc_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_9, u_char VAR_10, int VAR_11)
{
 int VAR_12 = VAR_0;
 struct iicoc_softc *VAR_13;

 VAR_13 = FUNC_0(VAR_9);
 FUNC_6(&VAR_13->sc_mtx);
 VAR_13->i2cdev_addr = (VAR_10 >> 1);


 if (FUNC_4(VAR_9, VAR_8) < 0)
  goto i2c_stx_error;


 if (FUNC_5(VAR_9, VAR_10, VAR_3)) {
  FUNC_1(VAR_9,
      "I2C write slave address [0x%x] failed.\n", VAR_10);
  VAR_12 = VAR_1;
  goto i2c_stx_error;
 }


 if (FUNC_2(VAR_9, VAR_6) & VAR_7) {
  FUNC_1(VAR_9, "I2C Bus Arbitration Lost, Aborting.\n");
  VAR_12 = VAR_0;
  goto i2c_stx_error;
 }
 VAR_12 = VAR_2;
 FUNC_7(&VAR_13->sc_mtx);
 return (VAR_12);
i2c_stx_error:
 FUNC_3(VAR_9, VAR_5, VAR_4);
 FUNC_4(VAR_9, VAR_8);
 FUNC_7(&VAR_13->sc_mtx);
 return (VAR_12);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct adt746x_softc {int device_id; int enum_hook; int sc_addr; int sc_dev; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (int ,int ,int ,int*) ;
 int FUNC_4 (int *) ;
 struct adt746x_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 uint8_t VAR_6, VAR_7, VAR_8, VAR_9;

 struct adt746x_softc *VAR_10;

 device_t VAR_11 = (device_t)VAR_5;

 VAR_10 = FUNC_5(VAR_11);

 FUNC_2(VAR_10->sc_dev, VAR_10->sc_addr, VAR_3, &VAR_6);
 FUNC_2(VAR_10->sc_dev, VAR_10->sc_addr, VAR_1, &VAR_7);
 FUNC_2(VAR_10->sc_dev, VAR_10->sc_addr, VAR_4, &VAR_8);
 FUNC_2(VAR_10->sc_dev, VAR_10->sc_addr, VAR_2, &VAR_9);

 FUNC_6(VAR_11, "Dev ID %#x, Company ID %#x, Rev ID %#x CNF: %#x\n",
        VAR_6, VAR_7, VAR_8, VAR_9);





 VAR_10->device_id = VAR_6;

 VAR_9 = 1;

 if (VAR_10->device_id == VAR_0)
  FUNC_3(VAR_10->sc_dev, VAR_10->sc_addr, VAR_2, &VAR_9);


 FUNC_0(VAR_11);
 FUNC_1(VAR_11);
 FUNC_4(&VAR_10->enum_hook);
}

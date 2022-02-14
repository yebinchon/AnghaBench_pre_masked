
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct syr827_softc {int intr_hook; } ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 struct syr827_softc* FUNC_1 (void*) ;
 int FUNC_2 (void*,char*,int,...) ;
 int FUNC_3 (void*,int ,int*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_7)
{
 struct syr827_softc *VAR_8;
 device_t VAR_9;
 uint8_t VAR_10;

 VAR_9 = VAR_7;
 VAR_8 = FUNC_1(VAR_9);

 if (VAR_6) {
  FUNC_3(VAR_9, VAR_0, &VAR_10, 1);
  FUNC_2(VAR_9, "Vendor ID: %x, DIE ID: %x\n",
      (VAR_10 & VAR_2) >> VAR_3,
      VAR_10 & VAR_1);
  FUNC_3(VAR_9, VAR_4, &VAR_10, 1);
  FUNC_2(VAR_9, "DIE Rev: %x\n", VAR_10 & VAR_5);
 }

 FUNC_0(&VAR_8->intr_hook);
}

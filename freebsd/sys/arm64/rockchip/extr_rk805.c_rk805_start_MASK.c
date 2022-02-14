
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rk805_softc {scalar_t__ type; int intr_hook; void* dev; } ;
typedef void* device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 struct rk805_softc* FUNC_1 (void*) ;
 int FUNC_2 (void*,char*,...) ;
 int FUNC_3 (void*,int ,int*,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct rk805_softc *VAR_5;
 device_t VAR_6;
 uint8_t VAR_7[2];
 int VAR_8;

 VAR_6 = VAR_4;
 VAR_5 = FUNC_1(VAR_6);
 VAR_5->dev = VAR_6;


 if (VAR_3 && VAR_5->type == VAR_0) {
  VAR_8 = FUNC_3(VAR_6, VAR_1, VAR_7, 1);
  if (VAR_8 != 0) {
   FUNC_2(VAR_6, "Cannot read chip name reg\n");
   return;
  }
  VAR_8 = FUNC_3(VAR_6, VAR_2, VAR_7 + 1, 1);
  if (VAR_8 != 0) {
   FUNC_2(VAR_6, "Cannot read chip version reg\n");
   return;
  }
  FUNC_2(VAR_6, "Chip Name: %x\n",
      VAR_7[0] << 4 | ((VAR_7[1] >> 4) & 0xf));
  FUNC_2(VAR_6, "Chip Version: %x\n", VAR_7[1] & 0xf);
 }

 FUNC_0(&VAR_5->intr_hook);
}

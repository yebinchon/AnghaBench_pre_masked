
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sfxge_softc {int dev; } ;
typedef int efsys_identifier_t ;
typedef int device_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ,int ) ;

void
FUNC_3(efsys_identifier_t *VAR_2, unsigned int VAR_3, uint32_t VAR_4,
   uint32_t VAR_5)
{
 struct sfxge_softc *VAR_6 = (struct sfxge_softc *)VAR_2;
 device_t VAR_7 = VAR_6->dev;

 FUNC_2(VAR_0, "[%s%d] FATAL ERROR: %s (0x%08x%08x)",
     FUNC_0(VAR_7), FUNC_1(VAR_7),
  VAR_1[VAR_3], VAR_5, VAR_4);
}

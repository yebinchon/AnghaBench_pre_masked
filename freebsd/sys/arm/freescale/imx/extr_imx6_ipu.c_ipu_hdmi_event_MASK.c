
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct videomode {int dummy; } ;
struct ipu_softc {int * sc_mode; int sc_dev; } ;
struct edid_info {int dummy; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int **,scalar_t__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,struct edid_info*) ;
 int FUNC_4 (struct edid_info*) ;
 int FUNC_5 (struct ipu_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, device_t VAR_2)
{
 struct ipu_softc *VAR_3;
 uint8_t *VAR_4;
 uint32_t VAR_5;



 const struct videomode *VAR_6;

 VAR_3 = VAR_1;

 VAR_4 = ((void*)0);
 VAR_5 = 0;
 if (FUNC_0(VAR_2, &VAR_4, &VAR_5) != 0) {
  FUNC_2(VAR_3->sc_dev, "failed to get EDID info from HDMI framer\n");
 }

 VAR_6 = ((void*)0);
 VAR_3->sc_mode = &VAR_0;
 FUNC_5(VAR_3);

 FUNC_1(VAR_2, VAR_3->sc_mode);
}

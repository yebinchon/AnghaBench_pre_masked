
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_hdmi_softc {int * eh_tag; int i2c_xref; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int * FUNC_1 (int ,void (*) (void*),void*,int ) ;
 int * FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct imx_hdmi_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3)
{
 struct imx_hdmi_softc *VAR_4;

 VAR_4 = FUNC_3((device_t)VAR_3);

 if (FUNC_2(VAR_4->i2c_xref) != ((void*)0)) {
  if (VAR_4->eh_tag != ((void*)0)) {
   FUNC_0(VAR_2,
       VAR_4->eh_tag);
  }
  FUNC_5(VAR_3);
  return;
 }

 if (VAR_1)
  FUNC_4((device_t)VAR_3, "Waiting for DDC i2c device\n");

 if (VAR_4->eh_tag == ((void*)0)) {
  VAR_4->eh_tag = FUNC_1(VAR_2,
      FUNC_6, VAR_3, VAR_0);
 }
}

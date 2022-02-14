
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imcsmb_softc {int imcsmb_pci; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;


 struct imcsmb_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, int VAR_3, void *VAR_4)
{
 struct imcsmb_softc *VAR_5;
 int *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2);
 VAR_6 = (int *) VAR_4;

 switch (VAR_3) {
 case 128: {
  if (*VAR_6 != VAR_1) {
   VAR_7 = VAR_0;
   goto out;
  }
  VAR_7 = FUNC_2(VAR_5->imcsmb_pci);
  break;
 }
 case 129:
  FUNC_1(VAR_5->imcsmb_pci);
  VAR_7 = 0;
  break;
 default:
  VAR_7 = VAR_0;
  break;
 }

out:
 return (VAR_7);
}

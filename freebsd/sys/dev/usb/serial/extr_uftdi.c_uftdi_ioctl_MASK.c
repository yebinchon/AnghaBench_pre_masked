
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uftdi_softc {int sc_bcdDevice; } ;
struct uftdi_eeio {int dummy; } ;
struct uftdi_bitmode {int iomask; int mode; } ;
struct ucom_softc {struct uftdi_softc* sc_parent; } ;
struct thread {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ucom_softc*,int) ;
 int FUNC_1 (struct ucom_softc*,int *,int *) ;
 int FUNC_2 (struct ucom_softc*,int*) ;
 int FUNC_3 (struct ucom_softc*,struct uftdi_eeio*) ;
 int FUNC_4 (struct ucom_softc*,int ) ;
 int FUNC_5 (struct ucom_softc*,int ,int ) ;
 int FUNC_6 (struct ucom_softc*,int) ;
 int FUNC_7 (struct ucom_softc*,int) ;
 int FUNC_8 (struct ucom_softc*,int) ;
 int FUNC_9 (struct ucom_softc*,struct uftdi_eeio*) ;

__attribute__((used)) static int
FUNC_10(struct ucom_softc *VAR_6, uint32_t VAR_7, caddr_t VAR_8,
    int VAR_9, struct thread *VAR_10)
{
 struct uftdi_softc *VAR_11 = VAR_6->sc_parent;
 int VAR_12;
 struct uftdi_bitmode * VAR_13;

 switch (VAR_7) {
 case 135:
 case 134:
 case 133:
  VAR_12 = FUNC_4(VAR_6,
      VAR_7 == 135 ? VAR_4 :
      (VAR_7 == 134 ? VAR_2 :
      VAR_3));
  break;
 case 132:
  VAR_13 = (struct uftdi_bitmode *)VAR_8;
  VAR_12 = FUNC_5(VAR_6, VAR_13->mode, VAR_13->iomask);
  break;
 case 139:
  VAR_13 = (struct uftdi_bitmode *)VAR_8;
  VAR_12 = FUNC_1(VAR_6, &VAR_13->mode, &VAR_13->iomask);
  break;
 case 129:
  VAR_12 = FUNC_8(VAR_6, *((int *)VAR_8));
  break;
 case 137:
  VAR_12 = FUNC_2(VAR_6, (int *)VAR_8);
  break;
 case 131:
  VAR_12 = FUNC_6(VAR_6, *(int *)VAR_8);
  break;
 case 130:
  VAR_12 = FUNC_7(VAR_6, *(int *)VAR_8);
  break;
 case 138:
  *(int *)VAR_8 = VAR_11->sc_bcdDevice;
  VAR_12 = 0;
  break;
 case 136:
  VAR_12 = FUNC_3(VAR_6, (struct uftdi_eeio *)VAR_8);
  break;
 case 128:
  VAR_12 = FUNC_9(VAR_6, (struct uftdi_eeio *)VAR_8);
  break;
 case 140:
  VAR_12 = FUNC_0(VAR_6, *(int *)VAR_8);
  break;
 default:
  return (VAR_1);
 }
 if (VAR_12 != VAR_5)
  return (VAR_0);
 return (0);
}

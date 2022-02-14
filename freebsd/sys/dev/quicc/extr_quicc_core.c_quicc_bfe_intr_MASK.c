
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct quicc_softc {int sc_dev; struct quicc_device* sc_device; int sc_rres; } ;
struct quicc_device {int (* qd_ih ) (int ) ;int qd_ih_arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2)
{
 struct quicc_device *VAR_3;
 struct quicc_softc *VAR_4 = VAR_2;
 uint32_t VAR_5;

 VAR_5 = FUNC_1(VAR_4->sc_rres, VAR_1);
 if (VAR_5 & 0x00f00000)
  VAR_3 = VAR_4->sc_device;
 else
  VAR_3 = ((void*)0);

 if (VAR_3 == ((void*)0) || VAR_3->qd_ih == ((void*)0)) {
  FUNC_0(VAR_4->sc_dev, "Stray interrupt %08x\n", VAR_5);
  return (VAR_0);
 }

 return ((*VAR_3->qd_ih)(VAR_3->qd_ih_arg));
}

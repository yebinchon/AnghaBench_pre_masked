
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hme_softc {int sc_lock; } ;
struct hme_pci_softc {int hsc_sres; int hsc_ires; int hsc_ih; struct hme_softc hsc_hme; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct hme_pci_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct hme_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct hme_pci_softc *VAR_3;
 struct hme_softc *VAR_4;

 VAR_3 = FUNC_2(VAR_2);
 VAR_4 = &VAR_3->hsc_hme;
 FUNC_1(VAR_2, VAR_3->hsc_ires, VAR_3->hsc_ih);
 FUNC_3(VAR_4);
 FUNC_0(VAR_2, VAR_0,
     FUNC_5(VAR_3->hsc_ires), VAR_3->hsc_ires);
 FUNC_0(VAR_2, VAR_1,
     FUNC_5(VAR_3->hsc_sres), VAR_3->hsc_sres);
 FUNC_4(&VAR_4->sc_lock);
 return (0);
}

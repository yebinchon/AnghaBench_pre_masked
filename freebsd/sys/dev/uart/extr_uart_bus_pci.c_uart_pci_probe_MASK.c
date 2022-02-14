
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_softc {int * sc_class; } ;
struct pci_id {scalar_t__ desc; int rid; int rclk; int regshft; } ;
typedef int device_t ;


 int VAR_0 ;
 struct uart_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 struct pci_id* FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct uart_softc *VAR_4;
 const struct pci_id *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);

 VAR_5 = FUNC_3(VAR_3, VAR_1);
 if (VAR_5 != ((void*)0)) {
  VAR_4->sc_class = &VAR_2;
  goto match;
 }

 return (VAR_0);

 match:
 VAR_6 = FUNC_2(VAR_3, VAR_5->regshft, 0, VAR_5->rclk, VAR_5->rid, 0, 0);

 if (VAR_6 > 0)
  return (VAR_6);

 if (VAR_5->desc)
  FUNC_1(VAR_3, VAR_5->desc);
 return (VAR_6);
}

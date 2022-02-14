
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pcib_softc {int flags; } ;
typedef enum pci_id_type { ____Placeholder_pci_id_type } pci_id_type ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,uintptr_t*) ;
 uintptr_t FUNC_1 (int ,int ) ;
 int VAR_1 ;
 uintptr_t FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;
 struct pcib_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_2, device_t VAR_3, enum pci_id_type VAR_4,
    uintptr_t *VAR_5)
{
 struct pcib_softc *VAR_6;
 device_t VAR_7;
 uint8_t VAR_8, VAR_9, VAR_10;

 if (VAR_4 != VAR_1) {
  VAR_7 = FUNC_3(VAR_2);
  return (FUNC_0(FUNC_3(VAR_7), VAR_3, VAR_4, VAR_5));
 }

 VAR_6 = FUNC_4(VAR_2);

 if (VAR_6->flags & VAR_0) {
  VAR_8 = FUNC_5(VAR_3);
  VAR_10 = FUNC_6(VAR_3);

  *VAR_5 = (FUNC_1(VAR_8, VAR_10));
 } else {
  VAR_8 = FUNC_5(VAR_3);
  VAR_9 = FUNC_7(VAR_3);
  VAR_10 = FUNC_6(VAR_3);

  *VAR_5 = (FUNC_2(VAR_8, VAR_9, VAR_10));
 }

 return (0);
}

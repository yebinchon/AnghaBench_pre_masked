
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_nmsix_resources; int vtpci_dev; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vtpci_softc *VAR_0, int VAR_1)
{
 device_t VAR_2;
 int VAR_3, VAR_4, VAR_5;

 VAR_2 = VAR_0->vtpci_dev;


 VAR_5 = VAR_1 + 1;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < VAR_5)
  return (1);

 VAR_4 = VAR_5;
 if (FUNC_0(VAR_2, &VAR_4) == 0 && VAR_4 >= VAR_5) {
  VAR_0->vtpci_nmsix_resources = VAR_5;
  return (0);
 }

 FUNC_2(VAR_2);

 return (1);
}

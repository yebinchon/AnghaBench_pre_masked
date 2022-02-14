
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_dev; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct vtpci_softc *VAR_0)
{
 device_t VAR_1;
 int VAR_2, VAR_3, VAR_4;

 VAR_1 = VAR_0->vtpci_dev;
 VAR_4 = 1;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < VAR_4)
  return (1);

 VAR_3 = VAR_4;
 if (FUNC_0(VAR_1, &VAR_3) == 0 && VAR_3 >= VAR_4)
  return (0);

 FUNC_2(VAR_1);

 return (1);
}

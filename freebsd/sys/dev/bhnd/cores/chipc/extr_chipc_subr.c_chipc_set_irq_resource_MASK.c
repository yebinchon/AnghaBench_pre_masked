
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct chipc_softc {scalar_t__ dev; } ;
struct chipc_devinfo {int irq_mapped; int irq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (int ,int ,int,int ,int) ;
 struct chipc_devinfo* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,char*,...) ;

int
FUNC_7(struct chipc_softc *VAR_2, device_t VAR_3, int VAR_4,
    u_int VAR_5)
{
 struct chipc_devinfo *VAR_6;
 int VAR_7;

 FUNC_0(FUNC_5(VAR_3) == VAR_2->dev, ("not a direct child"));
 VAR_6 = FUNC_4(VAR_3);


 if (VAR_6->irq_mapped) {
  FUNC_6(VAR_2->dev, "irq already mapped for child\n");
  return (VAR_0);
 }


 if ((VAR_7 = FUNC_1(VAR_2->dev, VAR_5, &VAR_6->irq))) {
  FUNC_6(VAR_2->dev, "failed to map intr %u: %d\n", VAR_5,
      VAR_7);
  return (VAR_7);
 }

 VAR_6->irq_mapped = 1;


 VAR_7 = FUNC_3(VAR_3, VAR_1, VAR_4, VAR_6->irq, 1);
 if (VAR_7) {
  FUNC_6(VAR_2->dev, "failed to set child irq resource %d to "
      "%ju: %d\n", VAR_4, VAR_6->irq, VAR_7);

  FUNC_2(VAR_2->dev, VAR_6->irq);
  return (VAR_7);
 }

 return (0);
}

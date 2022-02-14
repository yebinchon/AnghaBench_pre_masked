
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct nicvf {TYPE_1__* msix_entries; int dev; scalar_t__ msix_enabled; } ;
struct TYPE_2__ {struct resource* irq_res; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct resource* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int ,struct resource*) ;
 int FUNC_2 (int ,struct resource*,int,int *,int ,struct nicvf*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;
 scalar_t__ FUNC_5 (struct nicvf*) ;
 int VAR_7 ;
 int FUNC_6 (struct resource*) ;

__attribute__((used)) static int
FUNC_7(struct nicvf *VAR_8)
{
 struct resource *VAR_9;
 int VAR_10, VAR_11;
 int VAR_12 = 0;


 if (VAR_8->msix_enabled)
  return (0);


 if (FUNC_5(VAR_8) != 0)
  return (VAR_0);

 VAR_10 = VAR_3;
 VAR_11 = VAR_10 + 1;
 VAR_8->msix_entries[VAR_10].irq_res = FUNC_0(VAR_8->dev,
     VAR_6, &VAR_11, (VAR_5 | VAR_4));
 if (VAR_8->msix_entries[VAR_10].irq_res == ((void*)0)) {
  FUNC_4(VAR_8->dev,
      "Could not allocate Mbox interrupt for VF%d\n",
      FUNC_3(VAR_8->dev));
  return (VAR_0);
 }

 VAR_12 = FUNC_2(VAR_8->dev, VAR_8->msix_entries[VAR_10].irq_res,
     (VAR_1 | VAR_2), ((void*)0), VAR_7, VAR_8,
     &VAR_8->msix_entries[VAR_10].handle);
 if (VAR_12 != 0) {
  VAR_9 = VAR_8->msix_entries[VAR_10].irq_res;
  FUNC_1(VAR_8->dev, VAR_6,
       FUNC_6(VAR_9), VAR_9);
  VAR_8->msix_entries[VAR_10].irq_res = ((void*)0);
  return (VAR_12);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct nicvf {int num_vec; TYPE_1__* msix_entries; int dev; } ;
struct TYPE_2__ {struct resource* irq_res; int * handle; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,struct resource*) ;
 int FUNC_2 (int ,struct resource*,int *) ;
 int FUNC_3 (struct nicvf*) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static void
FUNC_5(struct nicvf *VAR_1)
{
 struct resource *VAR_2;
 int VAR_3;
 int VAR_4;


 for (VAR_3 = 0; VAR_3 < VAR_1->num_vec; VAR_3++) {
  VAR_2 = VAR_1->msix_entries[VAR_3].irq_res;
  if (VAR_2 == ((void*)0))
   continue;

  if (VAR_1->msix_entries[VAR_3].handle != ((void*)0)) {
   VAR_4 = FUNC_2(VAR_1->dev,
       VAR_1->msix_entries[VAR_3].irq_res,
       VAR_1->msix_entries[VAR_3].handle);
   FUNC_0(VAR_4 == 0,
       ("ERROR: Unable to teardown interrupt %d", VAR_3));
   VAR_1->msix_entries[VAR_3].handle = ((void*)0);
  }

  FUNC_1(VAR_1->dev, VAR_0,
       FUNC_4(VAR_2), VAR_1->msix_entries[VAR_3].irq_res);
  VAR_1->msix_entries[VAR_3].irq_res = ((void*)0);
 }

 FUNC_3(VAR_1);
}

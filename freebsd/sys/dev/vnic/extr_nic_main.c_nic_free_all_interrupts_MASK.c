
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicpf {int num_vec; TYPE_1__* msix_entries; int dev; } ;
struct TYPE_2__ {int * irq_res; int * handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_2(struct nicpf *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_vec; VAR_2++) {
  if (VAR_1->msix_entries[VAR_2].irq_res == ((void*)0))
   continue;
  if (VAR_1->msix_entries[VAR_2].handle != ((void*)0)) {
   FUNC_1(VAR_1->dev,
       VAR_1->msix_entries[VAR_2].irq_res,
       VAR_1->msix_entries[VAR_2].handle);
  }

  FUNC_0(VAR_1->dev, VAR_0, VAR_2 + 1,
      VAR_1->msix_entries[VAR_2].irq_res);
 }
}

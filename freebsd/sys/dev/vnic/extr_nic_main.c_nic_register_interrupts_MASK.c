
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nicpf {TYPE_1__* msix_entries; int dev; } ;
struct TYPE_2__ {int handle; int * irq_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int *,int ,struct nicpf*,int *) ;
 int FUNC_2 (struct nicpf*) ;
 int FUNC_3 (struct nicpf*) ;
 int FUNC_4 (struct nicpf*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_5(struct nicpf *VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13;


 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13 != 0)
  return (VAR_13);


 VAR_11 = VAR_3;
 VAR_12 = VAR_11 + 1;
 VAR_10->msix_entries[VAR_11].irq_res = FUNC_0(VAR_10->dev,
     VAR_7, &VAR_12, (VAR_6 | VAR_5));
 if (VAR_10->msix_entries[VAR_11].irq_res == ((void*)0)) {
  VAR_13 = VAR_0;
  goto fail;
 }
 VAR_13 = FUNC_1(VAR_10->dev, VAR_10->msix_entries[VAR_11].irq_res,
     (VAR_1 | VAR_2), ((void*)0), VAR_8, VAR_10,
     &VAR_10->msix_entries[VAR_11].handle);
 if (VAR_13 != 0)
  goto fail;

 VAR_11 = VAR_4;
 VAR_12 = VAR_11 + 1;
 VAR_10->msix_entries[VAR_11].irq_res = FUNC_0(VAR_10->dev,
     VAR_7, &VAR_12, (VAR_6 | VAR_5));
 if (VAR_10->msix_entries[VAR_11].irq_res == ((void*)0)) {
  VAR_13 = VAR_0;
  goto fail;
 }
 VAR_13 = FUNC_1(VAR_10->dev, VAR_10->msix_entries[VAR_11].irq_res,
     (VAR_1 | VAR_2), ((void*)0), VAR_9, VAR_10,
     &VAR_10->msix_entries[VAR_11].handle);
 if (VAR_13 != 0)
  goto fail;


 FUNC_2(VAR_10);
 return (0);

fail:
 FUNC_4(VAR_10);
 return (VAR_13);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct vm {int dummy; } ;
struct TYPE_7__ {int num_msgs; int startrid; int msix_table_rid; int msix_pba_rid; int ** res; int ** cookie; TYPE_4__* arg; int * msix_pba_res; int * msix_table_res; } ;
struct pptdev {TYPE_3__ msix; int dev; struct vm* vm; } ;
struct TYPE_5__ {int msix_table_bar; int msix_pba_bar; } ;
struct TYPE_6__ {TYPE_1__ msix; } ;
struct pci_devinfo {TYPE_2__ cfg; } ;
struct TYPE_8__ {void* msg_data; void* addr; struct pptdev* pptdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (int ,int *,int,int ,int *,TYPE_4__*,int **) ;
 struct pci_devinfo* FUNC_3 (int ) ;
 void* FUNC_4 (size_t,int ,int) ;
 int FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 struct pptdev* FUNC_7 (int,int,int) ;
 int FUNC_8 (struct pptdev*) ;
 int FUNC_9 (struct pptdev*,int) ;
 int VAR_14 ;

int
FUNC_10(struct vm *VAR_15, int VAR_16, int VAR_17, int VAR_18, int VAR_19,
        int VAR_20, uint64_t VAR_21, uint64_t VAR_22, uint32_t VAR_23)
{
 struct pptdev *VAR_24;
 struct pci_devinfo *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;
 size_t VAR_30, VAR_31, VAR_32;

 VAR_24 = FUNC_7(VAR_17, VAR_18, VAR_19);
 if (VAR_24 == ((void*)0))
  return (VAR_2);
 if (VAR_24->vm != VAR_15)
  return (VAR_0);

 VAR_25 = FUNC_3(VAR_24->dev);
 if (!VAR_25)
  return (VAR_4);







 if (VAR_24->msix.num_msgs == 0) {
  VAR_26 = FUNC_6(VAR_24->dev);
  if (VAR_26 <= 0)
   return (VAR_1);

  VAR_24->msix.startrid = 1;
  VAR_24->msix.num_msgs = VAR_26;

  VAR_30 = VAR_26 * sizeof(VAR_24->msix.res[0]);
  VAR_31 = VAR_26 * sizeof(VAR_24->msix.cookie[0]);
  VAR_32 = VAR_26 * sizeof(VAR_24->msix.arg[0]);

  VAR_24->msix.res = FUNC_4(VAR_30, VAR_7, VAR_8 | VAR_9);
  VAR_24->msix.cookie = FUNC_4(VAR_31, VAR_7,
       VAR_8 | VAR_9);
  VAR_24->msix.arg = FUNC_4(VAR_32, VAR_7, VAR_8 | VAR_9);

  VAR_28 = VAR_25->cfg.msix.msix_table_bar;
  VAR_24->msix.msix_table_res = FUNC_0(VAR_24->dev,
            VAR_13, &VAR_28, VAR_11);

  if (VAR_24->msix.msix_table_res == ((void*)0)) {
   FUNC_8(VAR_24);
   return (VAR_3);
  }
  VAR_24->msix.msix_table_rid = VAR_28;

  if (VAR_25->cfg.msix.msix_table_bar !=
      VAR_25->cfg.msix.msix_pba_bar) {
   VAR_28 = VAR_25->cfg.msix.msix_pba_bar;
   VAR_24->msix.msix_pba_res = FUNC_0(
       VAR_24->dev, VAR_13, &VAR_28, VAR_11);

   if (VAR_24->msix.msix_pba_res == ((void*)0)) {
    FUNC_8(VAR_24);
    return (VAR_3);
   }
   VAR_24->msix.msix_pba_rid = VAR_28;
  }

  VAR_27 = VAR_26;
  VAR_29 = FUNC_5(VAR_24->dev, &VAR_27);
  if (VAR_29 || VAR_27 != VAR_26) {
   FUNC_8(VAR_24);
   return (VAR_29 == 0 ? VAR_3: VAR_29);
  }
 }

 if ((VAR_23 & VAR_10) == 0) {

  FUNC_9(VAR_24, VAR_20);


  VAR_24->msix.cookie[VAR_20] = ((void*)0);
  VAR_28 = VAR_24->msix.startrid + VAR_20;
  VAR_24->msix.res[VAR_20] = FUNC_0(VAR_24->dev, VAR_12,
           &VAR_28, VAR_11);
  if (VAR_24->msix.res[VAR_20] == ((void*)0))
   return (VAR_4);

  VAR_24->msix.arg[VAR_20].pptdev = VAR_24;
  VAR_24->msix.arg[VAR_20].addr = VAR_21;
  VAR_24->msix.arg[VAR_20].msg_data = VAR_22;


  VAR_29 = FUNC_2(VAR_24->dev, VAR_24->msix.res[VAR_20],
           VAR_6 | VAR_5,
           VAR_14, ((void*)0), &VAR_24->msix.arg[VAR_20],
           &VAR_24->msix.cookie[VAR_20]);

  if (VAR_29 != 0) {
   FUNC_1(VAR_24->dev, VAR_12, VAR_28, VAR_24->msix.res[VAR_20]);
   VAR_24->msix.cookie[VAR_20] = ((void*)0);
   VAR_24->msix.res[VAR_20] = ((void*)0);
   return (VAR_4);
  }
 } else {

  FUNC_9(VAR_24, VAR_20);
 }

 return (0);
}

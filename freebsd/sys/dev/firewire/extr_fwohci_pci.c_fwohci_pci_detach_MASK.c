
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * bdev; } ;
struct TYPE_6__ {TYPE_5__ fc; scalar_t__ bsh; scalar_t__ bst; int * bsr; int * irq_res; int * ih; } ;
typedef TYPE_1__ fwohci_softc_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ,int *) ;
 TYPE_1__* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_5)
{
 fwohci_softc_t *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_11();

 if (VAR_6->bsr)
  FUNC_9(VAR_6, VAR_5);

 FUNC_1(VAR_5);

 if (VAR_6->fc.bdev) {
  FUNC_5(VAR_5, VAR_6->fc.bdev);
  VAR_6->fc.bdev = ((void*)0);
 }


 if (VAR_6->bst && VAR_6->bsh)
  FUNC_3(VAR_6->bst, VAR_6->bsh,
      VAR_0, VAR_1);

 if (VAR_6->irq_res) {
  int VAR_8;
  if (VAR_6->ih) {
   VAR_8 = FUNC_4(VAR_5, VAR_6->irq_res, VAR_6->ih);
   if (VAR_8)
    FUNC_7(VAR_5,
      "Could not tear down irq, %d\n", VAR_8);
   VAR_6->ih = ((void*)0);
  }
  FUNC_2(VAR_5, VAR_3, 0, VAR_6->irq_res);
  VAR_6->irq_res = ((void*)0);
 }

 if (VAR_6->bsr) {
  FUNC_2(VAR_5, VAR_4, VAR_2, VAR_6->bsr);
  VAR_6->bsr = ((void*)0);
  VAR_6->bst = 0;
  VAR_6->bsh = 0;
 }

 FUNC_8(VAR_6, VAR_5);
 FUNC_10(FUNC_0(&VAR_6->fc));
 FUNC_12(VAR_7);

 return 0;
}

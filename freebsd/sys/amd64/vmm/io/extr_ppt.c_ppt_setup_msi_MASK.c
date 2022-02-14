
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct vm {int dummy; } ;
struct TYPE_3__ {int startrid; int num_msgs; int ** cookie; TYPE_2__* arg; int ** res; } ;
struct pptdev {TYPE_1__ msi; int dev; struct vm* vm; } ;
struct TYPE_4__ {void* msg_data; void* addr; struct pptdev* pptdev; } ;


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
 int * FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int *,int,int ,int *,TYPE_2__*,int **) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct pptdev* FUNC_5 (int,int,int) ;
 int FUNC_6 (struct pptdev*) ;
 int VAR_11 ;

int
FUNC_7(struct vm *VAR_12, int VAR_13, int VAR_14, int VAR_15, int VAR_16,
       uint64_t VAR_17, uint64_t VAR_18, int VAR_19)
{
 int VAR_20, VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26;
 struct pptdev *VAR_27;

 if (VAR_19 < 0 || VAR_19 > VAR_7)
  return (VAR_1);

 VAR_27 = FUNC_5(VAR_14, VAR_15, VAR_16);
 if (VAR_27 == ((void*)0))
  return (VAR_2);
 if (VAR_27->vm != VAR_12)
  return (VAR_0);


 FUNC_6(VAR_27);

 if (VAR_19 == 0)
  return (0);

 VAR_22 = VAR_8;
 VAR_23 = FUNC_3(VAR_27->dev);
 if (VAR_23 == 0) {
  VAR_24 = 0;
  VAR_23 = 1;
  VAR_22 |= VAR_9;
 } else
  VAR_24 = 1;





 if (VAR_19 > VAR_23)
  return (VAR_1);





 if (VAR_24 == 1) {
  VAR_26 = VAR_19;
  VAR_25 = FUNC_2(VAR_27->dev, &VAR_26);
  if (VAR_25)
   return (VAR_25);
  else if (VAR_26 != VAR_19) {
   FUNC_4(VAR_27->dev);
   return (VAR_3);
  } else {

  }
 }

 VAR_27->msi.startrid = VAR_24;




 for (VAR_20 = 0; VAR_20 < VAR_19; VAR_20++) {
  VAR_27->msi.num_msgs = VAR_20 + 1;
  VAR_27->msi.cookie[VAR_20] = ((void*)0);

  VAR_21 = VAR_24 + VAR_20;
  VAR_27->msi.res[VAR_20] = FUNC_0(VAR_27->dev, VAR_10,
        &VAR_21, VAR_22);
  if (VAR_27->msi.res[VAR_20] == ((void*)0))
   break;

  VAR_27->msi.arg[VAR_20].pptdev = VAR_27;
  VAR_27->msi.arg[VAR_20].addr = VAR_17;
  VAR_27->msi.arg[VAR_20].msg_data = VAR_18 + VAR_20;

  VAR_25 = FUNC_1(VAR_27->dev, VAR_27->msi.res[VAR_20],
           VAR_6 | VAR_5,
           VAR_11, ((void*)0), &VAR_27->msi.arg[VAR_20],
           &VAR_27->msi.cookie[VAR_20]);
  if (VAR_25 != 0)
   break;
 }

 if (VAR_20 < VAR_19) {
  FUNC_6(VAR_27);
  return (VAR_4);
 }

 return (0);
}

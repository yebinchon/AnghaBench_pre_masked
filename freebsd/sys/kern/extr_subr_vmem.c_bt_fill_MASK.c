
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ vm_nfreetags; int vm_freetags; struct TYPE_7__* vm_arg; } ;
typedef TYPE_1__ vmem_t ;
typedef int bt_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int * FUNC_4 (int ,int) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_5(vmem_t *VAR_9, int VAR_10)
{
 bt_t *VAR_11;

 FUNC_1(VAR_9);





 VAR_10 &= VAR_0;
 if (VAR_9 != VAR_7 && VAR_9->vm_arg != VAR_7)
  VAR_10 &= ~VAR_5;







 while (VAR_9->vm_nfreetags < VAR_1) {
  VAR_11 = FUNC_4(VAR_8,
      (VAR_10 & VAR_5) | VAR_4 | VAR_3);
  if (VAR_11 == ((void*)0)) {
   FUNC_3(VAR_9);
   VAR_11 = FUNC_4(VAR_8, VAR_10);
   FUNC_2(VAR_9);
   if (VAR_11 == ((void*)0))
    break;
  }
  FUNC_0(&VAR_9->vm_freetags, VAR_11, VAR_6);
  VAR_9->vm_nfreetags++;
 }

 if (VAR_9->vm_nfreetags < VAR_1)
  return VAR_2;

 return 0;
}

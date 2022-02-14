
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;


struct TYPE_25__ {scalar_t__ vm_quantum_mask; } ;
typedef TYPE_1__ vmem_t ;
typedef int vmem_size_t ;
typedef scalar_t__ vmem_addr_t ;
struct TYPE_26__ {scalar_t__ bt_start; scalar_t__ bt_size; scalar_t__ bt_type; } ;
typedef TYPE_2__ bt_t ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_8 (TYPE_1__*,scalar_t__) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int VAR_3 ;
 scalar_t__ FUNC_12 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,int) ;

void
FUNC_14(vmem_t *VAR_5, vmem_addr_t VAR_6, vmem_size_t VAR_7)
{
 bt_t *VAR_8;
 bt_t *VAR_9;

 FUNC_1(VAR_7 > 0);

 FUNC_5(VAR_5);
 VAR_8 = FUNC_8(VAR_5, VAR_6);
 FUNC_1(VAR_8 != ((void*)0));
 FUNC_1(VAR_8->bt_start == VAR_6);
 FUNC_1(VAR_8->bt_size == FUNC_12(VAR_5, VAR_7) ||
     VAR_8->bt_size - FUNC_12(VAR_5, VAR_7) <= VAR_5->vm_quantum_mask);
 FUNC_1(VAR_8->bt_type == VAR_1);
 FUNC_9(VAR_5, VAR_8);
 VAR_8->bt_type = VAR_2;


 VAR_9 = FUNC_2(VAR_8, VAR_3);
 if (VAR_9 != ((void*)0) && VAR_9->bt_type == VAR_2) {
  FUNC_1(FUNC_0(VAR_8) < VAR_9->bt_start);
  VAR_8->bt_size += VAR_9->bt_size;
  FUNC_10(VAR_5, VAR_9);
  FUNC_11(VAR_5, VAR_9);
 }
 VAR_9 = FUNC_3(VAR_8, VAR_4, VAR_3);
 if (VAR_9 != ((void*)0) && VAR_9->bt_type == VAR_2) {
  FUNC_1(FUNC_0(VAR_9) < VAR_8->bt_start);
  VAR_8->bt_size += VAR_9->bt_size;
  VAR_8->bt_start = VAR_9->bt_start;
  FUNC_10(VAR_5, VAR_9);
  FUNC_11(VAR_5, VAR_9);
 }

 if (!FUNC_13(VAR_5, VAR_8, 0)) {
  FUNC_7(VAR_5, VAR_8);
  FUNC_4(VAR_5);
  FUNC_6(VAR_5, VAR_0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ vm_quantum_mask; } ;
typedef TYPE_1__ vmem_t ;
typedef scalar_t__ vmem_size_t ;
typedef scalar_t__ vmem_addr_t ;
struct TYPE_18__ {scalar_t__ bt_type; scalar_t__ bt_size; scalar_t__ bt_start; } ;
typedef TYPE_2__ bt_t ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(vmem_t *VAR_4, bt_t *VAR_5, vmem_addr_t VAR_6, vmem_size_t VAR_7)
{
 bt_t *VAR_8;
 bt_t *VAR_9;

 FUNC_2(VAR_4);
 FUNC_0(VAR_5->bt_type == VAR_1);
 FUNC_0(VAR_5->bt_size >= VAR_7);
 FUNC_7(VAR_4, VAR_5);
 if (VAR_5->bt_start != VAR_6) {
  VAR_9 = FUNC_3(VAR_4);
  VAR_9->bt_type = VAR_1;
  VAR_9->bt_start = VAR_5->bt_start;
  VAR_9->bt_size = VAR_6 - VAR_5->bt_start;
  VAR_5->bt_start = VAR_6;
  VAR_5->bt_size -= VAR_9->bt_size;
  FUNC_5(VAR_4, VAR_9);
  FUNC_6(VAR_4, VAR_9,
      FUNC_1(VAR_5, VAR_3, VAR_2));
 }
 FUNC_0(VAR_5->bt_start == VAR_6);
 if (VAR_5->bt_size != VAR_7 && VAR_5->bt_size - VAR_7 > VAR_4->vm_quantum_mask) {

  VAR_8 = FUNC_3(VAR_4);
  VAR_8->bt_type = VAR_0;
  VAR_8->bt_start = VAR_5->bt_start;
  VAR_8->bt_size = VAR_7;
  VAR_5->bt_start = VAR_5->bt_start + VAR_7;
  VAR_5->bt_size -= VAR_7;
  FUNC_5(VAR_4, VAR_5);
  FUNC_6(VAR_4, VAR_8,
      FUNC_1(VAR_5, VAR_3, VAR_2));
  FUNC_4(VAR_4, VAR_8);
  VAR_5 = VAR_8;
 } else {
  VAR_5->bt_type = VAR_0;
  FUNC_4(VAR_4, VAR_5);
 }
 FUNC_0(VAR_5->bt_size >= VAR_7);
}

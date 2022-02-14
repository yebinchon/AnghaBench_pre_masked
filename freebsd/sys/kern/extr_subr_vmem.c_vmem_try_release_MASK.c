
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vm_arg; int (* vm_releasefn ) (int ,scalar_t__,scalar_t__) ;int vm_size; } ;
typedef TYPE_1__ vmem_t ;
typedef scalar_t__ vmem_size_t ;
typedef scalar_t__ vmem_addr_t ;
struct vmem_btag {scalar_t__ bt_type; scalar_t__ bt_size; scalar_t__ bt_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 struct vmem_btag* FUNC_1 (struct vmem_btag*,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,struct vmem_btag*) ;
 int FUNC_5 (TYPE_1__*,struct vmem_btag*) ;
 int VAR_3 ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(vmem_t *VAR_5, struct vmem_btag *VAR_6, const bool VAR_7)
{
 struct vmem_btag *VAR_8;

 FUNC_0(VAR_6->bt_type == VAR_1);

 if (VAR_5->vm_releasefn == ((void*)0))
  return (0);

 VAR_8 = FUNC_1(VAR_6, VAR_4, VAR_3);
 FUNC_0(VAR_8 != ((void*)0));
 FUNC_0(VAR_8->bt_type != VAR_1);

 if (VAR_8->bt_type == VAR_2 && VAR_8->bt_size == VAR_6->bt_size) {
  vmem_addr_t VAR_9;
  vmem_size_t VAR_10;

  FUNC_0(VAR_8->bt_start == VAR_6->bt_start);
  VAR_9 = VAR_8->bt_start;
  VAR_10 = VAR_8->bt_size;
  if (VAR_7)
   FUNC_4(VAR_5, VAR_6);
  FUNC_5(VAR_5, VAR_6);
  FUNC_5(VAR_5, VAR_8);
  VAR_5->vm_size -= VAR_10;
  FUNC_2(VAR_5);
  FUNC_3(VAR_5, VAR_0);
  VAR_5->vm_releasefn(VAR_5->vm_arg, VAR_9, VAR_10);
  return (1);
 }
 return (0);
}

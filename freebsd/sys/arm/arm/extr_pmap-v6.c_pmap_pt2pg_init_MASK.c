
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_paddr_t ;
typedef int vm_offset_t ;
typedef int pt2_entry_t ;
typedef scalar_t__ pmap_t ;
struct TYPE_7__ {scalar_t__ pat_mode; } ;
struct TYPE_8__ {TYPE_1__ md; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static __inline vm_paddr_t
FUNC_8(pmap_t VAR_2, vm_offset_t VAR_3, vm_page_t VAR_4)
{
 vm_paddr_t VAR_5;
 pt2_entry_t *VAR_6;


 if (VAR_4->md.pat_mode != VAR_1)
  FUNC_3(VAR_4, VAR_1);


 VAR_5 = FUNC_4(VAR_4);
 FUNC_6(VAR_4);





 if (VAR_2 == VAR_0)
  FUNC_2(VAR_3, FUNC_0(VAR_5));
 else {
  VAR_6 = FUNC_5(VAR_2, VAR_3);
  FUNC_7(VAR_6, FUNC_1(VAR_5));
 }

 return (VAR_5);
}

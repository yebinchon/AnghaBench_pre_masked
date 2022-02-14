
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_2__* vm_object_t ;
struct vm_area_struct {scalar_t__ vm_private_data; scalar_t__ vm_len; int vm_pfn; int * vm_ops; } ;
struct TYPE_15__ {scalar_t__ handle; int memattr; } ;
struct TYPE_14__ {int flags; int pindex; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 struct vm_area_struct* FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_11(vm_object_t VAR_3, vm_ooffset_t VAR_4, int VAR_5,
    vm_page_t *VAR_6)
{
 struct vm_area_struct *VAR_7;

 VAR_7 = FUNC_5(VAR_3->handle);

 FUNC_1(VAR_7 != ((void*)0));
 FUNC_1(VAR_7->vm_private_data == VAR_3->handle);

 if (FUNC_4(VAR_7->vm_ops != ((void*)0) && VAR_4 < VAR_7->vm_len)) {
  vm_paddr_t VAR_8 = FUNC_0(VAR_7->vm_pfn) + VAR_4;
  vm_page_t VAR_9;

  if (((*VAR_6)->flags & VAR_0) != 0) {





   VAR_9 = *VAR_6;
   FUNC_9(VAR_9, VAR_8, VAR_3->memattr);
  } else {





   FUNC_3(VAR_3);
   VAR_9 = FUNC_7(VAR_8, VAR_3->memattr);
   FUNC_2(VAR_3);

   FUNC_8(VAR_9, VAR_3,
       (*VAR_6)->pindex, *VAR_6);

   FUNC_6(*VAR_6);
   *VAR_6 = VAR_9;
  }
  FUNC_10(VAR_9);
  return (VAR_2);
 }
 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_offset_t ;
typedef int pd_entry_t ;
struct TYPE_4__ {scalar_t__ ref_count; } ;


 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int* FUNC_5 (int ) ;
 int FUNC_6 (int*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(void *VAR_3, vm_offset_t VAR_4)
{
 vm_page_t VAR_5;
 pd_entry_t *VAR_6;

 FUNC_3(VAR_2);
 VAR_5 = FUNC_2(FUNC_0((uintptr_t)VAR_3));
 FUNC_1(VAR_5->ref_count > 0);
 if (FUNC_4(VAR_5)) {
  VAR_6 = FUNC_5(VAR_4);
  FUNC_1((*VAR_6 & (VAR_0 | VAR_1)) == VAR_1);
  *VAR_6 = 0;
  FUNC_6(VAR_6, 0);
 }
}

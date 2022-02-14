
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_4__ {int ref_count; } ;


 int FUNC_0 (uintptr_t) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(void *VAR_1, bool VAR_2)
{
 vm_page_t VAR_3;

 FUNC_3(VAR_0);
 VAR_3 = FUNC_2(FUNC_0((uintptr_t)VAR_1));
 FUNC_1(VAR_3->ref_count > 0);
 FUNC_1(VAR_2 || VAR_3->ref_count > 1);
 FUNC_4(VAR_3);
}

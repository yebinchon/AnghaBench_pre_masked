
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
struct TYPE_3__ {int ref_count; } ;


 int FUNC_0 (uintptr_t) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 vm_page_t VAR_2;

 FUNC_2(VAR_0);
 VAR_2 = FUNC_1(FUNC_0((uintptr_t)VAR_1));
 VAR_2->ref_count++;
}

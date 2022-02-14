
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* api_list_ptr; } ;
struct TYPE_3__ {int null_func; int * func_ptr; int * name; } ;


 TYPE_2__ FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    int VAR_1;

    for (VAR_1 = 0; FUNC_0(VAR_0).api_list_ptr[VAR_1].name != ((void*)0); VAR_1++)
        *FUNC_0(VAR_0).api_list_ptr[VAR_1].func_ptr = FUNC_0(VAR_0).api_list_ptr[VAR_1].null_func;
}

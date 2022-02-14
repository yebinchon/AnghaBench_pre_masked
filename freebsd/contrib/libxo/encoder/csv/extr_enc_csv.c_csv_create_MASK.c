
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xo_handle_t ;
struct TYPE_5__ {int c_stack_buf; int c_value_buf; int c_name_buf; int c_data; } ;
typedef TYPE_1__ csv_private_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4 (xo_handle_t *VAR_0)
{
    csv_private_t *VAR_1 = FUNC_2(((void*)0), sizeof(*VAR_1));
    if (VAR_1 == ((void*)0))
 return -1;

    FUNC_0(VAR_1, sizeof(*VAR_1));
    FUNC_1(&VAR_1->c_data);
    FUNC_1(&VAR_1->c_name_buf);
    FUNC_1(&VAR_1->c_value_buf);




    FUNC_3(VAR_0, VAR_1);

    return 0;
}

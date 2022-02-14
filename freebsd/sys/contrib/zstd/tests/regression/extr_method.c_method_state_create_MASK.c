
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* data; } ;
typedef TYPE_1__ method_state_t ;
typedef int data_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static method_state_t* FUNC_1(data_t const* VAR_0) {
    method_state_t* VAR_1 = (method_state_t*)FUNC_0(sizeof(method_state_t));
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_1->data = VAR_0;
    return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int const* data; } ;
typedef TYPE_1__ method_state_t ;
typedef int data_t ;
struct TYPE_5__ {TYPE_1__ base; void* decompressed; void* compressed; int inputs; int dictionary; } ;
typedef TYPE_2__ buffer_state_t ;


 size_t const FUNC_0 (size_t const) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 void* FUNC_3 (size_t const) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;

__attribute__((used)) static method_state_t* FUNC_6(data_t const* VAR_0) {
    buffer_state_t* VAR_1 = (buffer_state_t*)FUNC_2(1, sizeof(buffer_state_t));
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    VAR_1->base.data = VAR_0;
    VAR_1->inputs = FUNC_5(VAR_0);
    VAR_1->dictionary = FUNC_4(VAR_0);
    size_t const VAR_2 = FUNC_1(VAR_1->inputs);
    VAR_1->compressed = FUNC_3(FUNC_0(VAR_2));
    VAR_1->decompressed = FUNC_3(VAR_2);
    return &VAR_1->base;
}

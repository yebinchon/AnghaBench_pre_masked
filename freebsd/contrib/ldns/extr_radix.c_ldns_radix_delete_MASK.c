
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int radix_strlen_t ;
struct TYPE_8__ {int count; } ;
typedef TYPE_1__ ldns_radix_t ;
struct TYPE_9__ {int * data; } ;
typedef TYPE_2__ ldns_radix_node_t ;


 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int const*,int ) ;

void* FUNC_2(ldns_radix_t* VAR_0, const uint8_t* VAR_1, radix_strlen_t VAR_2)
{
    ldns_radix_node_t* VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    void* VAR_4 = ((void*)0);
    if (VAR_3) {
        VAR_0->count--;
        VAR_4 = VAR_3->data;
        VAR_3->data = ((void*)0);
        FUNC_0(VAR_0, VAR_3);
        return VAR_4;
    }
    return ((void*)0);
}

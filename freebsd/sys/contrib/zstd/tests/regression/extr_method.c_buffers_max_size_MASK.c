
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t size; TYPE_1__* buffers; } ;
typedef TYPE_2__ data_buffers_t ;
struct TYPE_4__ {size_t size; } ;



__attribute__((used)) static size_t FUNC_0(data_buffers_t VAR_0) {
    size_t VAR_1 = 0;
    for (size_t VAR_2 = 0; VAR_2 < VAR_0.size; ++VAR_2) {
        if (VAR_0.buffers[VAR_2].size > VAR_1)
            VAR_1 = VAR_0.buffers[VAR_2].size;
    }
    return VAR_1;
}

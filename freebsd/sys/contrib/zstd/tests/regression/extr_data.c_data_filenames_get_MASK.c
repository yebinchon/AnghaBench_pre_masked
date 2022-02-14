
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* path; } ;
struct TYPE_7__ {TYPE_1__ data; } ;
typedef TYPE_2__ data_t ;
struct TYPE_8__ {int size; int * buffer; int filenames; } ;
typedef TYPE_3__ data_filenames_t ;


 int FUNC_0 (char const**,int,int **,int *,int ) ;

data_filenames_t FUNC_1(data_t const* VAR_0) {
    data_filenames_t VAR_1 = {.buffer = ((void*)0), .size = 0};
    char const* VAR_2 = VAR_0->data.path;

    VAR_1.filenames = FUNC_0(
        &VAR_2,
        1,
        &VAR_1.buffer,
        &VAR_1.size,
                          0);
    return VAR_1;
}

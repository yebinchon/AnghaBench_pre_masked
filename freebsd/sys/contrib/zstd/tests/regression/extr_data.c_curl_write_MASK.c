
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int xxhash64; int file; } ;
typedef TYPE_1__ curl_data_t ;


 int FUNC_0 (int *,void*,size_t const) ;
 size_t FUNC_1 (void*,size_t,size_t,int ) ;

__attribute__((used)) static size_t FUNC_2(void* VAR_0, size_t VAR_1, size_t VAR_2, void* VAR_3) {
    curl_data_t* VAR_4 = (curl_data_t*)VAR_3;
    size_t const VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4->file);
    FUNC_0(&VAR_4->xxhash64, VAR_0, VAR_5 * VAR_1);
    return VAR_5;
}

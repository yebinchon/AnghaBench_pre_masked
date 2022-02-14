
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int dsl_dataset_t ;
struct TYPE_2__ {int ds_compressed_bytes; int ds_uncompressed_bytes; } ;


 TYPE_1__* FUNC_0 (int *) ;

uint64_t
FUNC_1(dsl_dataset_t *VAR_0)
{
 uint64_t VAR_1 = FUNC_0(VAR_0)->ds_compressed_bytes == 0 ? 100 :
     (FUNC_0(VAR_0)->ds_uncompressed_bytes * 100 /
     FUNC_0(VAR_0)->ds_compressed_bytes);
 return (VAR_1);
}

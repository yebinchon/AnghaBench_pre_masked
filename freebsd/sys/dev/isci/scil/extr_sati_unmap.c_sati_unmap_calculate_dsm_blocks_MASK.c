
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {int logical_block_size; } ;
typedef int TRIM_PAIR ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;



U32 FUNC_0(
   SATI_TRANSLATOR_SEQUENCE_T * VAR_0,
   U32 VAR_1
)
{
   U32 VAR_2 = (VAR_1 * sizeof(TRIM_PAIR))/VAR_0->device->logical_block_size;
   if ((VAR_1 * sizeof(TRIM_PAIR)) % VAR_0->device->logical_block_size)
   {
       VAR_2++;
   }
   return VAR_2;
}

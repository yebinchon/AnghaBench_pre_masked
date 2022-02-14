
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_5__ {TYPE_1__* device; } ;
struct TYPE_4__ {scalar_t__ descriptor_sense_enable; } ;
typedef TYPE_2__ SATI_TRANSLATOR_SEQUENCE_T ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
U8 FUNC_0(SATI_TRANSLATOR_SEQUENCE_T * VAR_2)
{
    if (VAR_2->device->descriptor_sense_enable)
    {
       return VAR_0;
    }
    else
    {
       return VAR_1;
    }
}

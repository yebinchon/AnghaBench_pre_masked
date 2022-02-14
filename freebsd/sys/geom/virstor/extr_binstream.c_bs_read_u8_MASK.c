
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ data; } ;
typedef TYPE_1__ bin_stream_t ;



uint8_t
FUNC_0(bin_stream_t * VAR_0)
{
 uint8_t VAR_1 = *((uint8_t *) (VAR_0->data + VAR_0->pos));
 VAR_0->pos++;
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ pos; scalar_t__ data; } ;
typedef TYPE_1__ bin_stream_t ;


 int FUNC_0 (scalar_t__) ;

uint32_t
FUNC_1(bin_stream_t * VAR_0)
{
 uint32_t VAR_1 = FUNC_0(VAR_0->data + VAR_0->pos);
 VAR_0->pos += 4;
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int data; int pos; } ;
typedef TYPE_1__ bin_stream_t ;


 int FUNC_0 (int,int ) ;

unsigned
FUNC_1(bin_stream_t * VAR_0, uint32_t VAR_1)
{
 FUNC_0(VAR_0->data + VAR_0->pos, VAR_1);
 return (VAR_0->pos += 4);
}

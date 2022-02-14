
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char const* ptr; scalar_t__ count; scalar_t__ byte; } ;
typedef TYPE_1__ unpack_t ;



__attribute__((used)) static unsigned short FUNC_0 (unpack_t *VAR_0, const unsigned char *VAR_1)
{
 unsigned short VAR_2;

 VAR_2 = *VAR_1++;
 VAR_2 |= *VAR_1++ << 8;
 VAR_0->ptr = VAR_1;
 VAR_0->byte = 0;
 VAR_0->count = 0;
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cell; } ;
typedef TYPE_1__ _BIG5EncodingInfo ;



__attribute__((used)) static __inline int
FUNC_0(_BIG5EncodingInfo *VAR_0, unsigned int VAR_1)
{

 return ((VAR_0->cell[VAR_1 & 0xFF] & 0x1) ? 2 : 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int instruction; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (unsigned VAR_1)
{
  VAR_0.instruction |= VAR_1 & 0xf;
  VAR_0.instruction |= ((VAR_1 >> 4) & 0x7) << 16;
  VAR_0.instruction |= ((VAR_1 >> 7) & 0x1) << 24;
}

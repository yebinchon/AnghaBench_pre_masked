
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bitfield {size_t max_bits; int * bits; } ;


 struct bitfield* FUNC_0 (int) ;

struct bitfield * FUNC_1(size_t VAR_0)
{
 struct bitfield *VAR_1;

 VAR_1 = FUNC_0(sizeof(*VAR_1) + (VAR_0 + 7) / 8);
 if (VAR_1 == ((void*)0))
  return ((void*)0);
 VAR_1->bits = (u8 *) (VAR_1 + 1);
 VAR_1->max_bits = VAR_0;
 return VAR_1;
}

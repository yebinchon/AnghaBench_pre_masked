
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ebt_mac_wormhash {scalar_t__* table; scalar_t__ poolsize; } ;



__attribute__((used)) static int FUNC_0(const struct ebt_mac_wormhash
         *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
  if (VAR_0->table[VAR_1] > VAR_0->table[VAR_1 + 1])
   return -0x100 - VAR_1;
  if (VAR_0->table[VAR_1] < 0)
   return -0x200 - VAR_1;
  if (VAR_0->table[VAR_1] > VAR_0->poolsize)
   return -0x300 - VAR_1;
 }
 if (VAR_0->table[256] > VAR_0->poolsize)
  return -0xc00;
 return 0;
}

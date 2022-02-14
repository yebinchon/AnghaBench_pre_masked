
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* rose_addr; } ;
typedef TYPE_1__ rose_address ;



int FUNC_0(rose_address *VAR_0, rose_address *VAR_1, unsigned short VAR_2)
{
 unsigned int VAR_3, VAR_4;

 if (VAR_2 > 10)
  return 1;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = VAR_3 / 2;

  if ((VAR_3 % 2) != 0) {
   if ((VAR_0->rose_addr[VAR_4] & 0x0F) != (VAR_1->rose_addr[VAR_4] & 0x0F))
    return 1;
  } else {
   if ((VAR_0->rose_addr[VAR_4] & 0xF0) != (VAR_1->rose_addr[VAR_4] & 0xF0))
    return 1;
  }
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* rose_addr; } ;
typedef TYPE_1__ rose_address ;



int FUNC_0(rose_address *VAR_0, rose_address *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 5; VAR_2++)
  if (VAR_0->rose_addr[VAR_2] != VAR_1->rose_addr[VAR_2])
   return 1;

 return 0;
}

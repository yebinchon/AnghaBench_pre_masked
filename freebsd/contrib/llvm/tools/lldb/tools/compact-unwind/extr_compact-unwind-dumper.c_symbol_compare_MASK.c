
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int file_address; } ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
  return (int)((struct symbol *)VAR_0)->file_address -
         ((struct symbol *)VAR_1)->file_address;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer_address {int size; void* address; } ;





__attribute__((used)) static inline int FUNC_0(int VAR_0, void *VAR_1,
           struct peer_address *VAR_2)
{
 switch (VAR_0) {
 case 129:
  VAR_2->address = VAR_1 + 12;
  VAR_2->size = 4;
  break;
 case 128:
  VAR_2->address = VAR_1;
  VAR_2->size = 16;
  break;
 default:
  return -1;
 }

 return 0;
}

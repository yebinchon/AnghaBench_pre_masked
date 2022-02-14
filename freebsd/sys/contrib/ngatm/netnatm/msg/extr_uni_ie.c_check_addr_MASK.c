
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct uni_addr {int plan; int len; int* addr; int type; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct uni_addr *VAR_2)
{
 u_int VAR_3;

 switch(VAR_2->plan) {
   default:
  return -1;

   case 128:
  if(VAR_2->type != VAR_0)
   return -1;
  if(VAR_2->len > 15 || VAR_2->len == 0)
   return -1;
  for(VAR_3 = 0; VAR_3 < VAR_2->len; VAR_3++)
   if(VAR_2->addr[VAR_3] == 0 || (VAR_2->addr[VAR_3] & 0x80))
    return -1;
  break;

   case 129:
  if(VAR_2->type != VAR_1)
   return -1;
  if(VAR_2->len != 20)
   return -1;
  break;
 }

 return 0;
}

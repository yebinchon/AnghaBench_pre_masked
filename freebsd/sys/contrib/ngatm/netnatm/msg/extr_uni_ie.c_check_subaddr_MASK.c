
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uni_subaddr {int type; int len; } ;





__attribute__((used)) static int
FUNC_0(struct uni_subaddr *VAR_0)
{
 switch(VAR_0->type) {
   default:
  return -1;

   case 128:
  if(VAR_0->len != 20)
   return -1;
  break;

   case 129:
  if(VAR_0->len > 20)
   return -1;
  break;
 }
 return 0;
}

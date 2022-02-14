
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uni_msg {int b_rptr; } ;
struct uni_addr {int plan; int type; int len; int * addr; } ;




 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct uni_addr *VAR_0, u_int VAR_1, struct uni_msg *VAR_2, u_int VAR_3)
{
 VAR_0->plan = VAR_3 & 0xf;
 VAR_0->type = (VAR_3 >> 4) & 0x7;

 switch(VAR_0->plan) {

   case 128:
  if(VAR_1 > 15 || VAR_1 == 0)
   return -1;
  VAR_0->addr[VAR_1] = 0;
  break;

   case 129:
  if(VAR_1 != 20)
   return -1;
  break;

   default:
  return -1;
 }
 (void)FUNC_0(VAR_0->addr, VAR_2->b_rptr, VAR_1);
 VAR_0->len = VAR_1;
 VAR_2->b_rptr += VAR_1;

 return 0;
}

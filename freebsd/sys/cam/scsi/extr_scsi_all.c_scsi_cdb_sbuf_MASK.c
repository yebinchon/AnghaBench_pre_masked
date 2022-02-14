
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sbuf {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,int) ;

void
FUNC_1(u_int8_t *VAR_0, struct sbuf *VAR_1)
{
 u_int8_t VAR_2;
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return;
 switch((*VAR_0 >> 5) & 0x7) {
  case 0:
   VAR_2 = 6;
   break;
  case 1:
  case 2:
   VAR_2 = 10;
   break;
  case 3:
  case 6:
  case 7:

   VAR_2 = 1;
   break;
  case 4:
   VAR_2 = 16;
   break;
  case 5:
   VAR_2 = 12;
   break;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_1, "%02hhx ", VAR_0[VAR_3]);

 return;
}

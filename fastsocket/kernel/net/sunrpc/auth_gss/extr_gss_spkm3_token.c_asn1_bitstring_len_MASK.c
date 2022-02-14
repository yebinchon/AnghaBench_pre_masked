
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {int len; char* data; } ;



void
FUNC_0(struct xdr_netobj *VAR_0, int *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4 = 0,VAR_5 = VAR_0->len;
 char *VAR_6;

 VAR_6 = &VAR_0->data[VAR_0->len -1];


 for(VAR_3 = VAR_0->len; VAR_3 > 0; VAR_3--) {
  if (*VAR_6 == 0) {
   VAR_6--;
   VAR_5--;
  } else
   break;
 }


 VAR_6 = &VAR_0->data[VAR_5 - 1];
 for(VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  short VAR_7 = 0x01;

  if (!((VAR_7 << VAR_3) & *VAR_6))
   VAR_4++;
  else
   break;
 }
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_4;
}

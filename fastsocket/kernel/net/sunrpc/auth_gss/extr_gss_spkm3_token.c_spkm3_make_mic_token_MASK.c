
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xdr_netobj {int len; int data; } ;


 int FUNC_0 (unsigned char*,int ,int) ;

void
FUNC_1(unsigned char **VAR_0, int VAR_1, struct xdr_netobj *VAR_2, struct xdr_netobj *VAR_3, int VAR_4, int VAR_5)
{
 unsigned char *VAR_6 = *VAR_0;

 *(u8 *)VAR_6++ = 0xa4;
 *(u8 *)VAR_6++ = VAR_1;
 FUNC_0(VAR_6, VAR_2->data, VAR_2->len);
 VAR_6 += VAR_2->len;

 *(u8 *)VAR_6++ = 0x03;
 *(u8 *)VAR_6++ = VAR_4 + 1;
 *(u8 *)VAR_6++ = VAR_5;
 FUNC_0(VAR_6, VAR_3->data, VAR_4);
}

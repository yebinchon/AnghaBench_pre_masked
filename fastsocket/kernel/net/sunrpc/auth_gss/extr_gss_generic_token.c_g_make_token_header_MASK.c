
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {scalar_t__ len; int data; } ;


 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (unsigned char**,scalar_t__) ;

void
FUNC_2(struct xdr_netobj *VAR_0, int VAR_1, unsigned char **VAR_2)
{
 *(*VAR_2)++ = 0x60;
 FUNC_1(VAR_2, 2 + VAR_0->len + VAR_1);
 *(*VAR_2)++ = 0x06;
 *(*VAR_2)++ = (unsigned char) VAR_0->len;
 FUNC_0(*VAR_2, VAR_0->data, ((int) VAR_0->len));
}

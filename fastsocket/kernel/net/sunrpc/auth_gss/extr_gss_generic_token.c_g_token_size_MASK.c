
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {scalar_t__ len; } ;


 int FUNC_0 (unsigned int) ;

int
FUNC_1(struct xdr_netobj *VAR_0, unsigned int VAR_1)
{

 VAR_1 += 2 + (int) VAR_0->len;
 return(1 + FUNC_0(VAR_1) + VAR_1);
}

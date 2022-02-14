
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xdr_netobj {unsigned int len; int * data; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ) ;

__be32 *
FUNC_2(__be32 *VAR_1, struct xdr_netobj *VAR_2)
{
 unsigned int VAR_3;

 if ((VAR_3 = FUNC_1(*VAR_1++)) > VAR_0)
  return ((void*)0);
 VAR_2->len = VAR_3;
 VAR_2->data = (u8 *) VAR_1;
 return VAR_1 + FUNC_0(VAR_3);
}

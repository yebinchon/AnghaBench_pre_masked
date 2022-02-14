
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_netobj {scalar_t__ len; int data; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct xdr_netobj *VAR_0, struct xdr_netobj *VAR_1)
{
 return VAR_0->len == VAR_1->len && 0 == FUNC_0(VAR_0->data, VAR_1->data, VAR_0->len);
}

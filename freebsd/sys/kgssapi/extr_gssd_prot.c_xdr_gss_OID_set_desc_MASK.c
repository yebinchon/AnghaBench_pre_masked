
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int u_int ;
struct TYPE_3__ {scalar_t__ elements; int count; } ;
typedef TYPE_1__ gss_OID_set_desc ;
typedef int gss_OID_desc ;
typedef scalar_t__ gss_OID ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__*,int *,int ,int,int ) ;
 scalar_t__ VAR_2 ;

bool_t
FUNC_1(XDR *VAR_3, gss_OID_set_desc *VAR_4)
{
 caddr_t VAR_5;
 u_int VAR_6;

 VAR_6 = VAR_4->count;
 VAR_5 = (caddr_t) VAR_4->elements;
 if (!FUNC_0(VAR_3, &VAR_5, &VAR_6, ~0, sizeof(gss_OID_desc),
  (xdrproc_t) VAR_2))
  return (VAR_0);
 VAR_4->count = VAR_6;
 VAR_4->elements = (gss_OID) VAR_5;

 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {char* elements; int length; } ;
typedef TYPE_1__ gss_OID_desc ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char**,int *,int ) ;

bool_t
FUNC_1(XDR *VAR_2, gss_OID_desc *VAR_3)
{
 char *VAR_4;
 u_int VAR_5;

 VAR_5 = VAR_3->length;
 VAR_4 = VAR_3->elements;
 if (!FUNC_0(VAR_2, &VAR_4, &VAR_5, ~0))
  return (VAR_0);
 VAR_3->length = VAR_5;
 VAR_3->elements = VAR_4;

 return (VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netobj {int n_len; int n_bytes; } ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;

bool_t
FUNC_1(XDR *VAR_1, struct netobj *VAR_2)
{

 return (FUNC_0(VAR_1, &VAR_2->n_bytes, &VAR_2->n_len, VAR_0));
}

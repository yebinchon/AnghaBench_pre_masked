
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum xdr_op { ____Placeholder_xdr_op } xdr_op ;
struct TYPE_3__ {int x_op; scalar_t__ x_base; scalar_t__ x_handy; int * x_private; int * x_ops; } ;
typedef TYPE_1__ XDR ;
typedef int FILE ;


 int VAR_0 ;

void
FUNC_0(XDR *VAR_1, FILE *VAR_2, enum xdr_op VAR_3)
{

 VAR_1->x_op = VAR_3;
 VAR_1->x_ops = &VAR_0;
 VAR_1->x_private = VAR_2;
 VAR_1->x_handy = 0;
 VAR_1->x_base = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t order_len; unsigned char const* order; } ;
typedef TYPE_1__ br_ec_curve_def ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static const unsigned char *
FUNC_1(int VAR_0, size_t *VAR_1)
{
 const br_ec_curve_def *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 *VAR_1 = VAR_2->order_len;
 return VAR_2->order;
}

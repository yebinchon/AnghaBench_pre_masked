
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct filter_arg* right; } ;
struct filter_arg {TYPE_1__ op; } ;



__attribute__((used)) static struct filter_arg *
FUNC_0(struct filter_arg *VAR_0, struct filter_arg *VAR_1)
{
 struct filter_arg *VAR_2;

 VAR_2 = VAR_0->op.right;
 VAR_0->op.right = VAR_1;
 return VAR_2;
}

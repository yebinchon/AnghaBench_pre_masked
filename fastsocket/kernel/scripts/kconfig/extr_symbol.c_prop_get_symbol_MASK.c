
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct property {TYPE_2__* expr; } ;
struct TYPE_3__ {struct symbol* sym; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ left; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

struct symbol *FUNC_0(struct property *VAR_2)
{
 if (VAR_2->expr && (VAR_2->expr->type == VAR_1 ||
      VAR_2->expr->type == VAR_0))
  return VAR_2->expr->left.sym;
 return ((void*)0);
}

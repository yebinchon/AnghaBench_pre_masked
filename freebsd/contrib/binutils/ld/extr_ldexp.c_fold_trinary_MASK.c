
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rhs; int lhs; int cond; } ;
struct TYPE_8__ {TYPE_2__ trinary; } ;
typedef TYPE_3__ etree_type ;
struct TYPE_6__ {scalar_t__ value; scalar_t__ valid_p; } ;
struct TYPE_9__ {TYPE_1__ result; } ;


 int FUNC_0 (int ) ;
 TYPE_5__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (etree_type *VAR_1)
{
  FUNC_0 (VAR_1->trinary.cond);
  if (VAR_0.result.valid_p)
    FUNC_0 (VAR_0.result.value
       ? VAR_1->trinary.lhs
       : VAR_1->trinary.rhs);
}

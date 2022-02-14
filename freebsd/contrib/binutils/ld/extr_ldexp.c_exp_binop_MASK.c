
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int node_code; int node_class; int lineno; } ;
struct TYPE_14__ {TYPE_4__* rhs; TYPE_4__* lhs; } ;
struct TYPE_17__ {TYPE_3__ type; TYPE_1__ binary; } ;
typedef TYPE_4__ etree_type ;
struct TYPE_15__ {int value; scalar_t__ valid_p; } ;
struct TYPE_18__ {TYPE_2__ result; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_8__ VAR_1 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_3 (int) ;

etree_type *
FUNC_4 (int VAR_2, etree_type *VAR_3, etree_type *VAR_4)
{
  etree_type VAR_5, *VAR_6;

  VAR_5.type.node_code = VAR_2;
  VAR_5.type.lineno = VAR_3->type.lineno;
  VAR_5.binary.lhs = VAR_3;
  VAR_5.binary.rhs = VAR_4;
  VAR_5.type.node_class = VAR_0;
  FUNC_0 (&VAR_5);
  if (VAR_1.result.valid_p)
    return FUNC_1 (VAR_1.result.value);

  VAR_6 = FUNC_3 (sizeof (VAR_6->binary));
  FUNC_2 (VAR_6, &VAR_5, sizeof (VAR_6->binary));
  return VAR_6;
}

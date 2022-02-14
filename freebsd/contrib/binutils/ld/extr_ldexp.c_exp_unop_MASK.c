
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int node_code; int node_class; int lineno; } ;
struct TYPE_16__ {TYPE_2__ type; TYPE_5__* child; } ;
struct TYPE_17__ {int lineno; } ;
struct TYPE_18__ {TYPE_3__ unary; TYPE_4__ type; } ;
typedef TYPE_5__ etree_type ;
struct TYPE_14__ {int value; scalar_t__ valid_p; } ;
struct TYPE_19__ {TYPE_1__ result; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_5__* FUNC_1 (int ) ;
 TYPE_9__ VAR_1 ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,int) ;
 TYPE_5__* FUNC_3 (int) ;

etree_type *
FUNC_4 (int VAR_2, etree_type *VAR_3)
{
  etree_type VAR_4, *VAR_5;

  VAR_4.unary.type.node_code = VAR_2;
  VAR_4.unary.type.lineno = VAR_3->type.lineno;
  VAR_4.unary.child = VAR_3;
  VAR_4.unary.type.node_class = VAR_0;
  FUNC_0 (&VAR_4);
  if (VAR_1.result.valid_p)
    return FUNC_1 (VAR_1.result.value);

  VAR_5 = FUNC_3 (sizeof (VAR_5->unary));
  FUNC_2 (VAR_5, &VAR_4, sizeof (VAR_5->unary));
  return VAR_5;
}

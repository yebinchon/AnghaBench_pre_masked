
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int node_code; int node_class; int lineno; } ;
struct TYPE_14__ {char const* name; TYPE_2__ type; } ;
struct TYPE_15__ {TYPE_3__ name; } ;
typedef TYPE_4__ etree_type ;
struct TYPE_12__ {int value; scalar_t__ valid_p; } ;
struct TYPE_16__ {TYPE_1__ result; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_4__* FUNC_1 (int ) ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,int) ;
 TYPE_4__* FUNC_3 (int) ;

etree_type *
FUNC_4 (int VAR_3, const char *VAR_4)
{
  etree_type VAR_5, *VAR_6;

  VAR_5.name.type.node_code = VAR_3;
  VAR_5.name.type.lineno = VAR_2;
  VAR_5.name.name = VAR_4;
  VAR_5.name.type.node_class = VAR_0;

  FUNC_0 (&VAR_5);
  if (VAR_1.result.valid_p)
    return FUNC_1 (VAR_1.result.value);

  VAR_6 = FUNC_3 (sizeof (VAR_6->name));
  FUNC_2 (VAR_6, &VAR_5, sizeof (VAR_6->name));
  return VAR_6;

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char node_code; int node_class; int lineno; } ;
struct TYPE_9__ {char const* message; TYPE_4__* child; TYPE_1__ type; } ;
struct TYPE_10__ {int lineno; } ;
struct TYPE_11__ {TYPE_2__ assert_s; TYPE_3__ type; } ;
typedef TYPE_4__ etree_type ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int) ;

etree_type *
FUNC_1 (etree_type *VAR_1, const char *VAR_2)
{
  etree_type *VAR_3;

  VAR_3 = FUNC_0 (sizeof (VAR_3->assert_s));
  VAR_3->assert_s.type.node_code = '!';
  VAR_3->assert_s.type.lineno = VAR_1->type.lineno;
  VAR_3->assert_s.type.node_class = VAR_0;
  VAR_3->assert_s.child = VAR_1;
  VAR_3->assert_s.message = VAR_2;
  return VAR_3;
}

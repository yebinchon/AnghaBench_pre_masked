
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* splay_tree_node ;
struct TYPE_5__ {char const* (* decl_printable_name ) (int ,int) ;} ;
struct TYPE_4__ {scalar_t__ value; } ;


 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 char const* FUNC_1 (int ,int) ;

__attribute__((used)) static const char *
FUNC_2 (int VAR_2)
{
  splay_tree_node VAR_3 =
    FUNC_0 (VAR_1, VAR_2);
  if (VAR_3)
    return VAR_0.decl_printable_name ((tree)(VAR_3->value), 2);
  return ((void*)0);
}

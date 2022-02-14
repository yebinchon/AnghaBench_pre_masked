
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_node_kind_t ;
typedef int svn_boolean_t ;
struct node_baton {int dir_depth; scalar_t__ filtered; } ;
struct edit_baton {int requested_depth; scalar_t__ has_target; } ;


 int VAR_0 ;
 int FUNC_0 () ;






 int VAR_1 ;

__attribute__((used)) static svn_boolean_t
FUNC_1(struct edit_baton *VAR_2,
             struct node_baton *VAR_3,
             svn_node_kind_t VAR_4)
{
  int VAR_5;



  if (VAR_3->filtered)
    return VAR_0;
  VAR_5 = VAR_3->dir_depth - (VAR_2->has_target ? 1 : 0);
  switch (VAR_2->requested_depth)
    {
    case 133:
      return (VAR_5 <= 0);
    case 131:
      return ((VAR_5 <= 0)
              || (VAR_4 == VAR_1 && VAR_5 == 1));
    case 130:
      return (VAR_5 <= 1);
    case 128:
    case 132:
    case 129:

    default:
      FUNC_0();
    }
}

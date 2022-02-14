
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct c_declspecs {int declspecs_seen_p; int attrs; } ;


 int FUNC_0 (int ,int ) ;

struct c_declspecs *
FUNC_1 (struct c_declspecs *VAR_0, tree VAR_1)
{
  VAR_0->attrs = FUNC_0 (VAR_1, VAR_0->attrs);
  VAR_0->declspecs_seen_p = 1;
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int name; } ;
typedef TYPE_1__ NODE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const NODE *VAR_1, const NODE *VAR_2)
{

 if ((VAR_1->type & VAR_0) != 0) {
  if ((VAR_2->type & VAR_0) == 0)
   return 1;
 } else if ((VAR_2->type & VAR_0) != 0)
  return -1;
 return FUNC_0(VAR_1->name, VAR_2->name);
}

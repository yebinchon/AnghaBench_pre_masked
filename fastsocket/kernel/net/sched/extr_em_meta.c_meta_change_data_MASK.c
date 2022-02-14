
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct meta_value {int dummy; } ;
struct TYPE_2__ {int (* change ) (struct meta_value*,struct nlattr*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct meta_value*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct meta_value*,struct nlattr*) ;

__attribute__((used)) static inline int FUNC_3(struct meta_value *VAR_1, struct nlattr *VAR_2)
{
 if (VAR_2) {
  if (FUNC_1(VAR_2) == 0)
   return -VAR_0;

  return FUNC_0(VAR_1)->change(VAR_1, VAR_2);
 }

 return 0;
}

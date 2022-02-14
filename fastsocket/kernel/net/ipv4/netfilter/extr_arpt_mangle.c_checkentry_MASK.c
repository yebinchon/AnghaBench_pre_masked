
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {struct arpt_mangle* targinfo; } ;
struct arpt_mangle {int flags; scalar_t__ target; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool FUNC_0(const struct xt_tgchk_param *VAR_4)
{
 const struct arpt_mangle *VAR_5 = VAR_4->targinfo;

 if (VAR_5->flags & ~VAR_1 ||
     !(VAR_5->flags & VAR_1))
  return 0;

 if (VAR_5->target != VAR_3 && VAR_5->target != VAR_2 &&
    VAR_5->target != VAR_0)
  return 0;
 return 1;
}

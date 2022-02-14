
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_quota_info {int flags; int quota; TYPE_1__* master; } ;
struct xt_mtchk_param {struct xt_quota_info* matchinfo; } ;
struct TYPE_2__ {int quota; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_2)
{
 struct xt_quota_info *VAR_3 = VAR_2->matchinfo;

 if (VAR_3->flags & ~VAR_1)
  return 0;

 VAR_3->master = FUNC_0(sizeof(*VAR_3->master), VAR_0);
 if (VAR_3->master == ((void*)0))
  return 0;

 VAR_3->master->quota = VAR_3->quota;
 return 1;
}

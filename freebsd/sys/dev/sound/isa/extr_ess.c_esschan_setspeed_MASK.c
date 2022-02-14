
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ess_info {scalar_t__ newspeed; } ;
struct ess_chinfo {int spd; struct ess_info* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u_int32_t
FUNC_2(kobj_t VAR_0, void *VAR_1, u_int32_t VAR_2)
{
 struct ess_chinfo *VAR_3 = VAR_1;
 struct ess_info *VAR_4 = VAR_3->parent;

 VAR_3->spd = VAR_2;
 if (VAR_4->newspeed)
  FUNC_1(&VAR_3->spd);
 else
  FUNC_0(&VAR_3->spd);
 return VAR_3->spd;
}

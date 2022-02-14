
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct elfcopy {int flags; int v_grp; int v_rel; } ;
struct TYPE_3__ {int st_info; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct elfcopy *VAR_1, int VAR_2, GElf_Sym *VAR_3)
{


 if (FUNC_0(VAR_1->v_rel, VAR_2))
  return (1);


 if (FUNC_0(VAR_1->v_grp, VAR_2))
  return (1);





 if (VAR_1->flags & VAR_0) {
  if (FUNC_1(VAR_3->st_info) || FUNC_2(VAR_3->st_info))
   return (1);
 }

 return (0);
}

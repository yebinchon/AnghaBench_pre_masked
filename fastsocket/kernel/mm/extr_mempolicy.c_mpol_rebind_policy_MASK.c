
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cpuset_mems_allowed; } ;
struct mempolicy {int flags; size_t mode; TYPE_1__ w; } ;
typedef int nodemask_t ;
typedef enum mpol_rebind_step { ____Placeholder_mpol_rebind_step } mpol_rebind_step ;
struct TYPE_4__ {int (* rebind ) (struct mempolicy*,int const*,int) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (struct mempolicy*) ;
 scalar_t__ FUNC_2 (int ,int const) ;
 int FUNC_3 (struct mempolicy*,int const*,int) ;

__attribute__((used)) static void FUNC_4(struct mempolicy *VAR_5, const nodemask_t *VAR_6,
    enum mpol_rebind_step VAR_7)
{
 if (!VAR_5)
  return;
 if (!FUNC_1(VAR_5) && VAR_7 == 0 &&
     FUNC_2(VAR_5->w.cpuset_mems_allowed, *VAR_6))
  return;

 if (VAR_7 == VAR_2 && (VAR_5->flags & VAR_0))
  return;

 if (VAR_7 == VAR_3 && !(VAR_5->flags & VAR_0))
  FUNC_0();

 if (VAR_7 == VAR_2)
  VAR_5->flags |= VAR_0;
 else if (VAR_7 == VAR_3)
  VAR_5->flags &= ~VAR_0;
 else if (VAR_7 >= VAR_1)
  FUNC_0();

 VAR_4[VAR_5->mode].rebind(VAR_5, VAR_6, VAR_7);
}

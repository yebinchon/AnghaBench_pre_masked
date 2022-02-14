
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cpuset {int cs_flags; int cs_mask; } ;
typedef int cpuset_t ;
struct TYPE_3__ {int td_ucred; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cpuset* FUNC_2 (struct cpuset*) ;
 int VAR_4 ;
 int FUNC_3 (struct cpuset*,int *,int ) ;
 int FUNC_4 (struct cpuset*,int *) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_9(struct cpuset *VAR_6, cpuset_t *VAR_7)
{
 struct cpuset *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_8(VAR_5, VAR_3);
 if (VAR_9)
  return (VAR_9);






 if (FUNC_5(VAR_5->td_ucred) &&
     VAR_6->cs_flags & VAR_0)
  return (VAR_2);




 VAR_8 = FUNC_2(VAR_6);
 FUNC_6(&VAR_4);
 if (VAR_8 && !FUNC_1(&VAR_8->cs_mask, VAR_7)) {
  VAR_9 = VAR_1;
  goto out;
 }
 VAR_9 = FUNC_3(VAR_6, VAR_7, 0);
 if (VAR_9)
  goto out;
 FUNC_0(VAR_7, &VAR_6->cs_mask);
 FUNC_4(VAR_6, VAR_7);
out:
 FUNC_7(&VAR_4);

 return (VAR_9);
}

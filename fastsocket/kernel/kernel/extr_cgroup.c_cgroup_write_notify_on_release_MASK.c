
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cgroup {int flags; } ;
struct cftype {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct cgroup *VAR_2,
       struct cftype *VAR_3,
       u64 VAR_4)
{
 FUNC_0(VAR_1, &VAR_2->flags);
 if (VAR_4)
  FUNC_1(VAR_0, &VAR_2->flags);
 else
  FUNC_0(VAR_0, &VAR_2->flags);
 return 0;
}

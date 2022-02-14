
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int const flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct cgroup *VAR_2)
{
 const int VAR_3 =
  (1 << VAR_1) |
  (1 << VAR_0);
 return (VAR_2->flags & VAR_3) == VAR_3;
}

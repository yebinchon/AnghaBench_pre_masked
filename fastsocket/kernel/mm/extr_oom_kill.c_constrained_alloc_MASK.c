
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zonelist {int dummy; } ;
typedef int nodemask_t ;
typedef int gfp_t ;
typedef enum oom_constraint { ____Placeholder_oom_constraint } oom_constraint ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;

__attribute__((used)) static enum oom_constraint FUNC_0(struct zonelist *VAR_3,
    gfp_t VAR_4, nodemask_t *VAR_5,
    unsigned long *VAR_6)
{
 *VAR_6 = VAR_2 + VAR_1;
 return VAR_0;
}

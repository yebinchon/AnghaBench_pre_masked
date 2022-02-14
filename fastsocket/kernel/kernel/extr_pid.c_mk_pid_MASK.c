
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pidmap {int dummy; } ;
struct pid_namespace {struct pidmap* pidmap; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pid_namespace *VAR_1,
  struct pidmap *VAR_2, int VAR_3)
{
 return (VAR_2 - VAR_1->pidmap)*VAR_0 + VAR_3;
}

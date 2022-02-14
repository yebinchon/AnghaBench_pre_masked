
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int stime; int utime; } ;
typedef int cputime_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline cputime_t FUNC_1(struct task_struct *VAR_0)
{
 return FUNC_0(VAR_0->utime, VAR_0->stime);
}

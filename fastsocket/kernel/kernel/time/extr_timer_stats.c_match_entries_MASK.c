
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ timer; scalar_t__ start_func; scalar_t__ expire_func; scalar_t__ pid; } ;



__attribute__((used)) static int FUNC_0(struct entry *VAR_0, struct entry *VAR_1)
{
 return VAR_0->timer == VAR_1->timer &&
        VAR_0->start_func == VAR_1->start_func &&
        VAR_0->expire_func == VAR_1->expire_func &&
        VAR_0->pid == VAR_1->pid;
}

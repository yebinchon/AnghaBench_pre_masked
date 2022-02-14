
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sig {scalar_t__ type; scalar_t__ sig; struct call* call; } ;
struct call {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct sig *VAR_2, void *VAR_3)
{
 return (VAR_2->type == VAR_1 &&
     (struct call *)VAR_3 == VAR_2->call &&
     VAR_2->sig == VAR_0);
}

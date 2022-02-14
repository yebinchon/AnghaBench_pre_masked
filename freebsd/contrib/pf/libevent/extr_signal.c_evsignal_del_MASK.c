
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int dummy; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,struct sigaction*,int *) ;

int
FUNC_2(struct event *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);

 return (FUNC_1(FUNC_0(VAR_1),(struct sigaction *)VAR_0, ((void*)0)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,struct sigaction const*,struct sigaction*) ;

__attribute__((used)) static int
FUNC_1(int VAR_1, const struct sigaction *VAR_2)
{
 struct sigaction VAR_3;

 if (FUNC_0(VAR_1, ((void*)0), &VAR_3) < 0)
  return (-1);

 if (VAR_3.sa_handler == VAR_0)
  return (0);

 return (FUNC_0(VAR_1, VAR_2, ((void*)0)));
}

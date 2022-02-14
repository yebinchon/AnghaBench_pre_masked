
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucond {int c_has_waiters; } ;


 int VAR_0 ;
 int FUNC_0 (struct ucond*,int ,int ,int *,int *) ;

int
FUNC_1(struct ucond *VAR_1)
{

 if (!VAR_1->c_has_waiters)
  return (0);
 return (FUNC_0(VAR_1, VAR_0, 0, ((void*)0), ((void*)0)));
}

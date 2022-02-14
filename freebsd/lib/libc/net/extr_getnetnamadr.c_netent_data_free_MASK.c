
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent_data {scalar_t__ stayopen; } ;


 int FUNC_0 (struct netent_data*) ;
 int FUNC_1 (struct netent_data*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 struct netent_data *VAR_1 = VAR_0;

 if (VAR_1 == ((void*)0))
  return;
 VAR_1->stayopen = 0;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}

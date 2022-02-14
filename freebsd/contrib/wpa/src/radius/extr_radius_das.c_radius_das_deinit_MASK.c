
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_das_data {scalar_t__ sock; struct radius_das_data* shared_secret; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct radius_das_data*) ;

void FUNC_3(struct radius_das_data *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->sock >= 0) {
  FUNC_1(VAR_0->sock);
  FUNC_0(VAR_0->sock);
 }

 FUNC_2(VAR_0->shared_secret);
 FUNC_2(VAR_0);
}

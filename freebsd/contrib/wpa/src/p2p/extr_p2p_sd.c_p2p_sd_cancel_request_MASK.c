
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {int dummy; } ;


 int FUNC_0 (struct p2p_data*,char*,void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct p2p_data*,void*) ;

int FUNC_3(struct p2p_data *VAR_0, void *VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1)) {
  FUNC_0(VAR_0, "Cancel pending SD query %p", VAR_1);
  FUNC_1(VAR_1);
  return 0;
 }
 return -1;
}

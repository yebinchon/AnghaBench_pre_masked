
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_pd {int dummy; } ;


 int FUNC_0 (struct ibv_pd*) ;
 int FUNC_1 (struct ibv_pd*) ;

int FUNC_2(struct ibv_pd *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0);
 return 0;
}

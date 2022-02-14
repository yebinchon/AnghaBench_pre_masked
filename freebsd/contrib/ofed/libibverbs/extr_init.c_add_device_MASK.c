
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_device {int dummy; } ;


 struct ibv_device** FUNC_0 (struct ibv_device**,int) ;

__attribute__((used)) static void FUNC_1(struct ibv_device *VAR_0,
         struct ibv_device ***VAR_1,
         int *VAR_2,
         int *VAR_3)
{
 struct ibv_device **VAR_4;

 if (*VAR_3 <= *VAR_2) {
  *VAR_3 = *VAR_3 ? *VAR_3 * 2 : 1;
  VAR_4 = FUNC_0(*VAR_1, *VAR_3 * sizeof (struct ibv_device *));
  if (!VAR_4)
   return;
  *VAR_1 = VAR_4;
 }

 (*VAR_1)[(*VAR_2)++] = VAR_0;
}

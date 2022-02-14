
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_device {int dummy; } ;
struct ibv_context {int dummy; } ;
typedef scalar_t__ __be64 ;


 int FUNC_0 (struct ibv_device**) ;
 scalar_t__ FUNC_1 (struct ibv_device*) ;
 struct ibv_device** FUNC_2 (int *) ;
 struct ibv_context* FUNC_3 (struct ibv_device*) ;

__attribute__((used)) static struct ibv_context *FUNC_4(__be64 VAR_0)
{
 struct ibv_device **VAR_1;
 struct ibv_context *VAR_2 = ((void*)0);
 int VAR_3;

 VAR_1 = FUNC_2(((void*)0));
 if (!VAR_1) {
  return ((void*)0);
 }

 for (VAR_3 = 0; VAR_1[VAR_3]; VAR_3++) {
  if (FUNC_1(VAR_1[VAR_3]) == VAR_0) {
   VAR_2 = FUNC_3(VAR_1[VAR_3]);
   break;
  }
 }

 FUNC_0(VAR_1);
 return VAR_2;
}

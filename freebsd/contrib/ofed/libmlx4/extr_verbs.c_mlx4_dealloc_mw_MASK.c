
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibv_mw {int dummy; } ;
struct ibv_dealloc_mw {int dummy; } ;
typedef int cmd ;


 int FUNC_0 (struct ibv_mw*) ;
 int FUNC_1 (struct ibv_mw*,struct ibv_dealloc_mw*,int) ;

int FUNC_2(struct ibv_mw *VAR_0)
{
 int VAR_1;
 struct ibv_dealloc_mw VAR_2;

 VAR_1 = FUNC_1(VAR_0, &VAR_2, sizeof(VAR_2));
 if (VAR_1)
  return VAR_1;

 FUNC_0(VAR_0);
 return 0;
}

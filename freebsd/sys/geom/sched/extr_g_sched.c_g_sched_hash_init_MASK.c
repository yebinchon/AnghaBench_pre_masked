
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct g_hash {int dummy; } ;
struct g_gsched {scalar_t__ gs_priv_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_hash* FUNC_0 (int ,int ,int *,int) ;

__attribute__((used)) static struct g_hash *
FUNC_1(struct g_gsched *VAR_2, u_long *VAR_3, int VAR_4)
{
 struct g_hash *VAR_5;

 if (VAR_2->gs_priv_size == 0)
  return (((void*)0));

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);

 return (VAR_5);
}

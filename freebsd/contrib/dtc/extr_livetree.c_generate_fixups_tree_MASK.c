
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt_info {int dt; } ;


 int FUNC_0 (struct dt_info*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct dt_info*,int ,int ) ;

void FUNC_3(struct dt_info *VAR_0, char *VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_0->dt))
  return;
 FUNC_2(VAR_0, FUNC_1(VAR_0->dt, VAR_1),
          VAR_0->dt);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_configuration {int group_id; int passphrase; } ;


 int FUNC_0 (struct dpp_configuration*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct dpp_configuration *VAR_0)
{
 if (!VAR_0)
  return;
 FUNC_2(VAR_0->passphrase);
 FUNC_1(VAR_0->group_id);
 FUNC_0(VAR_0, sizeof(*VAR_0));
}

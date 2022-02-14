
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_bus {struct azx* private_data; } ;
struct azx {unsigned int* last_cmd; scalar_t__ single_cmd; scalar_t__ disabled; } ;


 size_t FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hda_bus*,unsigned int) ;
 int FUNC_2 (struct hda_bus*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct hda_bus *VAR_0, unsigned int VAR_1)
{
 struct azx *VAR_2 = VAR_0->private_data;

 if (VAR_2->disabled)
  return 0;
 VAR_2->last_cmd[FUNC_0(VAR_1)] = VAR_1;
 if (VAR_2->single_cmd)
  return FUNC_2(VAR_0, VAR_1);
 else
  return FUNC_1(VAR_0, VAR_1);
}

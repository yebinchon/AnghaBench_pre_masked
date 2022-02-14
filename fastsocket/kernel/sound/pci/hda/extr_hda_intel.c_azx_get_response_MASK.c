
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_bus {struct azx* private_data; } ;
struct azx {scalar_t__ single_cmd; scalar_t__ disabled; } ;


 unsigned int FUNC_0 (struct hda_bus*,unsigned int) ;
 unsigned int FUNC_1 (struct hda_bus*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct hda_bus *VAR_0,
         unsigned int VAR_1)
{
 struct azx *VAR_2 = VAR_0->private_data;
 if (VAR_2->disabled)
  return 0;
 if (VAR_2->single_cmd)
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}

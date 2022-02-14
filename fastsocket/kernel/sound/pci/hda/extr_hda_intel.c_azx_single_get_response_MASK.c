
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_bus {struct azx* private_data; } ;
struct TYPE_2__ {unsigned int* res; } ;
struct azx {TYPE_1__ rirb; } ;



__attribute__((used)) static unsigned int FUNC_0(struct hda_bus *VAR_0,
         unsigned int VAR_1)
{
 struct azx *VAR_2 = VAR_0->private_data;
 return VAR_2->rirb.res[VAR_1];
}

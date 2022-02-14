
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int index; int name; } ;
struct snd_kcontrol {scalar_t__ private_value; TYPE_1__ id; } ;


 int VAR_0 ;
 struct snd_kcontrol* FUNC_0 (int *,void*) ;
 int FUNC_1 (int ,int,char*,char const*) ;

struct snd_kcontrol *
FUNC_2(const char *VAR_1, int VAR_2, void *VAR_3)
{
 struct snd_kcontrol *VAR_4;
 VAR_4 = FUNC_0(&VAR_0, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_1(VAR_4->id.name, sizeof(VAR_4->id.name), "%s Jack", VAR_1);
 VAR_4->id.index = VAR_2;
 VAR_4->private_value = 0;
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_mixer {int modify_counter; int dev; int name; } ;
struct TYPE_3__ {int modify_counter; int name; int id; } ;
typedef TYPE_1__ mixer_info ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct snd_mixer *VAR_0, mixer_info *VAR_1)
{
 FUNC_0((void *)VAR_1, sizeof(*VAR_1));
 FUNC_2(VAR_1->id, VAR_0->name, sizeof(VAR_1->id));
 FUNC_2(VAR_1->name, FUNC_1(VAR_0->dev), sizeof(VAR_1->name));
 VAR_1->modify_counter = VAR_0->modify_counter;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soundfont_voice_info {int root; int high; int velhigh; int fixkey; int fixvel; int fixpan; int pan; int amplitude; int scaleTuning; int parm; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct soundfont_voice_info*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct soundfont_voice_info *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->root = 60;
 VAR_0->high = 127;
 VAR_0->velhigh = 127;
 VAR_0->fixkey = -1;
 VAR_0->fixvel = -1;
 VAR_0->fixpan = -1;
 VAR_0->pan = -1;
 VAR_0->amplitude = 127;
 VAR_0->scaleTuning = 100;

 FUNC_0(&VAR_0->parm);
}

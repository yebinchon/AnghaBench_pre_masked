
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {struct emu_voice* voice; } ;
struct emu_voice {int busy; } ;



__attribute__((used)) static struct emu_voice *
FUNC_0(struct sc_info *VAR_0)
{
 struct emu_voice *VAR_1;
 int VAR_2;

 VAR_1 = ((void*)0);
 for (VAR_2 = 0; VAR_2 < 64 && VAR_0->voice[VAR_2].busy; VAR_2++);
 if (VAR_2 < 64) {
  VAR_1 = &VAR_0->voice[VAR_2];
  VAR_1->busy = 1;
 }
 return VAR_1;
}

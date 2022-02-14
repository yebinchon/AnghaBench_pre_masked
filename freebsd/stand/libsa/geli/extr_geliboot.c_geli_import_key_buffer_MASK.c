
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct keybuf {unsigned int kb_nents; TYPE_1__* kb_ents; } ;
struct TYPE_2__ {int ke_type; int ke_data; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 unsigned int VAR_3 ;
 int * VAR_4 ;

void
FUNC_2(struct keybuf *VAR_5)
{
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->kb_nents && VAR_6 < VAR_0; VAR_6++) {
  FUNC_1(VAR_4[VAR_6], VAR_5->kb_ents[VAR_6].ke_data,
      VAR_1);
  FUNC_0(VAR_5->kb_ents[VAR_6].ke_data,
      VAR_1);
  VAR_5->kb_ents[VAR_6].ke_type = VAR_2;
 }
 VAR_3 = VAR_5->kb_nents;
 VAR_5->kb_nents = 0;
}

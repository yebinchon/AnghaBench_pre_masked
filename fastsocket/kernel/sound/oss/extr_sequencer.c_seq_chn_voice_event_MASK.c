
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* aftertouch ) (size_t,int,int) ;int (* kill_note ) (size_t,int,int,int) ;int (* start_note ) (size_t,int,int,int) ;int (* setup_voice ) (size_t,int,int) ;TYPE_1__* chn_info; int (* set_instr ) (size_t,int,int ) ;scalar_t__ alloc_voice; } ;
struct TYPE_3__ {int pgm_num; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (size_t,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (size_t,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (size_t,int,int) ;
 int FUNC_4 (size_t,int,int,int) ;
 int FUNC_5 (size_t,int,int,int) ;
 int FUNC_6 (size_t,int,int) ;
 TYPE_2__** VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_7(unsigned char *VAR_11)
{






 int VAR_12 = -1;

 if ((int) VAR_11[1] > VAR_4 || VAR_9[VAR_11[1]] == ((void*)0))
  return;
 if (!(VAR_10 & (1 << VAR_11[1])))
  return;
 if (!VAR_9[VAR_11[1]])
  return;

 if (VAR_8 == VAR_0)
 {
  if (VAR_9[VAR_11[1]]->alloc_voice)
   VAR_12 = FUNC_1(VAR_11[1], VAR_11[3], VAR_11[4]);

  if (VAR_11[2] == 128 && VAR_11[5] == 0)
  {
   VAR_11[2] = 129;
   VAR_11[5] = 64;
  }
 }

 switch (VAR_11[2])
 {
  case 128:
   if (VAR_11[4] > 127 && VAR_11[4] != 255)
    return;

   if (VAR_12 == -1 && VAR_8 == VAR_0 && VAR_9[VAR_11[1]]->alloc_voice)
   {

    VAR_12 = FUNC_0(VAR_11[1], VAR_11[3], VAR_11[4]);
   }
   if (VAR_12 == -1)
    VAR_12 = VAR_11[3];

   if (VAR_8 == VAR_0 && (int) VAR_11[1] < VAR_6)
   {





    if (VAR_11[3] == 9)
    {
     VAR_9[VAR_11[1]]->set_instr(VAR_11[1], VAR_12, 128 + VAR_11[4]);
     VAR_9[VAR_11[1]]->chn_info[VAR_11[3]].pgm_num = 128 + VAR_11[4];
    }
    VAR_9[VAR_11[1]]->setup_voice(VAR_11[1], VAR_12, VAR_11[3]);
   }
   VAR_9[VAR_11[1]]->start_note(VAR_11[1], VAR_12, VAR_11[4], VAR_11[5]);
   break;

  case 129:
   if (VAR_12 == -1)
    VAR_12 = VAR_11[3];
   VAR_9[VAR_11[1]]->kill_note(VAR_11[1], VAR_12, VAR_11[4], VAR_11[5]);
   break;

  case 130:
   if (VAR_12 == -1)
    VAR_12 = VAR_11[3];
   VAR_9[VAR_11[1]]->aftertouch(VAR_11[1], VAR_12, VAR_11[5]);
   break;

  default:;
 }





}

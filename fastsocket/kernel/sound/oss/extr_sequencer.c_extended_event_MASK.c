
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* volume_method ) (int,unsigned char) ;int (* controller ) (int,unsigned char,unsigned char,short) ;int (* panning ) (int,unsigned char,char) ;int (* aftertouch ) (int,unsigned char,unsigned char) ;int (* set_instr ) (int,unsigned char,unsigned char) ;int (* start_note ) (int,unsigned char,unsigned char,unsigned char) ;int (* kill_note ) (int,unsigned char,unsigned char,unsigned char) ;} ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_0 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_2 (int,unsigned char,unsigned char,unsigned char) ;
 int FUNC_3 (int,unsigned char,unsigned char) ;
 int FUNC_4 (int,unsigned char,unsigned char) ;
 int FUNC_5 (int,unsigned char,char) ;
 int FUNC_6 (int,unsigned char,unsigned char,short) ;
 int FUNC_7 (int,unsigned char) ;
 TYPE_1__** VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(unsigned char *VAR_5)
{
 int VAR_6 = VAR_5[2];

 if (VAR_6 < 0 || VAR_6 >= VAR_2)
  return -VAR_1;

 if (!(VAR_4 & (1 << VAR_6)))
  return -VAR_1;

 switch (VAR_5[1])
 {
  case 131:
   VAR_3[VAR_6]->kill_note(VAR_6, VAR_5[3], VAR_5[4], VAR_5[5]);
   break;

  case 130:
   if (VAR_5[4] > 127 && VAR_5[4] != 255)
    return 0;

   if (VAR_5[5] == 0)
   {
    VAR_3[VAR_6]->kill_note(VAR_6, VAR_5[3], VAR_5[4], VAR_5[5]);
    break;
   }
   VAR_3[VAR_6]->start_note(VAR_6, VAR_5[3], VAR_5[4], VAR_5[5]);
   break;

  case 129:
   VAR_3[VAR_6]->set_instr(VAR_6, VAR_5[3], VAR_5[4]);
   break;

  case 134:
   VAR_3[VAR_6]->aftertouch(VAR_6, VAR_5[3], VAR_5[4]);
   break;

  case 133:
   VAR_3[VAR_6]->panning(VAR_6, VAR_5[3], (char) VAR_5[4]);
   break;

  case 132:
   VAR_3[VAR_6]->controller(VAR_6, VAR_5[3], VAR_5[4], (short) (VAR_5[5] | (VAR_5[6] << 8)));
   break;

  case 128:
   if (VAR_3[VAR_6]->volume_method != ((void*)0))
    VAR_3[VAR_6]->volume_method(VAR_6, VAR_5[3]);
   break;

  default:
   return -VAR_0;
 }
 return 0;
}

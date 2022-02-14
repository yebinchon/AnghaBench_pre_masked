
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_voice; int* map; } ;
struct TYPE_6__ {int (* bender ) (unsigned char,unsigned char,unsigned short) ;TYPE_2__ alloc; TYPE_1__* chn_info; int (* controller ) (unsigned char,unsigned char,unsigned char,unsigned short) ;int (* set_instr ) (unsigned char,unsigned char,unsigned char) ;} ;
struct TYPE_4__ {unsigned char pgm_num; unsigned short* controllers; unsigned short bender_value; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char,unsigned char,unsigned char) ;
 int FUNC_1 (unsigned char,unsigned char,unsigned char) ;
 int FUNC_2 (unsigned char,int,unsigned char,int) ;
 int FUNC_3 (unsigned char,unsigned char,unsigned char,unsigned short) ;
 int FUNC_4 (unsigned char,unsigned char,unsigned char,unsigned short) ;
 int FUNC_5 (unsigned char,int,unsigned short) ;
 int FUNC_6 (unsigned char,unsigned char,unsigned short) ;
 int FUNC_7 (unsigned char,unsigned char,unsigned short) ;
 TYPE_3__** VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(unsigned char *VAR_6)
{
 unsigned char VAR_7 = VAR_6[1];
 unsigned char VAR_8 = VAR_6[2];
 unsigned char VAR_9 = VAR_6[3];
 unsigned char VAR_10 = VAR_6[4];


 unsigned short VAR_11 = *(short *) &VAR_6[6];

 if ((int) VAR_7 > VAR_1 || VAR_4[VAR_7] == ((void*)0))
  return;
 if (!(VAR_5 & (1 << VAR_7)))
  return;
 if (!VAR_4[VAR_7])
  return;

 switch (VAR_8)
 {
  case 129:
   if (VAR_3 == VAR_0)
   {
    VAR_4[VAR_7]->chn_info[VAR_9].pgm_num = VAR_10;
    if ((int) VAR_7 >= VAR_2)
     VAR_4[VAR_7]->set_instr(VAR_7, VAR_9, VAR_10);
   }
   else
    VAR_4[VAR_7]->set_instr(VAR_7, VAR_9, VAR_10);

   break;

  case 130:
   if (VAR_3 == VAR_0)
   {
    if (VAR_9 > 15 || VAR_10 > 127)
     break;

    VAR_4[VAR_7]->chn_info[VAR_9].controllers[VAR_10] = VAR_11 & 0x7f;

    if (VAR_10 < 32)
     VAR_4[VAR_7]->chn_info[VAR_9].controllers[VAR_10 + 32] = 0;

    if ((int) VAR_7 < VAR_2)
    {
     int VAR_12 = VAR_11 & 0x7f;
     int VAR_13, VAR_14;

     if (VAR_10 < 64)
     {
      VAR_12 = ((VAR_4[VAR_7]->
       chn_info[VAR_9].controllers[VAR_10 & ~32] & 0x7f) << 7)
       | (VAR_4[VAR_7]->
       chn_info[VAR_9].controllers[VAR_10 | 32] & 0x7f);
      VAR_10 &= ~32;
     }


     VAR_14 = ((int) VAR_9 << 8);

     for (VAR_13 = 0; VAR_13 < VAR_4[VAR_7]->alloc.max_voice; VAR_13++)
      if ((VAR_4[VAR_7]->alloc.map[VAR_13] & 0xff00) == VAR_14)
       VAR_4[VAR_7]->controller(VAR_7, VAR_13, VAR_10, VAR_12);
    }
    else
     VAR_4[VAR_7]->controller(VAR_7, VAR_9, VAR_10, VAR_11);
   }
   else
    VAR_4[VAR_7]->controller(VAR_7, VAR_9, VAR_10, VAR_11);
   break;

  case 128:
   if (VAR_3 == VAR_0)
   {
    VAR_4[VAR_7]->chn_info[VAR_9].bender_value = VAR_11;

    if ((int) VAR_7 < VAR_2)
    {

     int VAR_15, VAR_16;

     VAR_16 = (VAR_9 << 8);

     for (VAR_15 = 0; VAR_15 < VAR_4[VAR_7]->alloc.max_voice; VAR_15++)
      if ((VAR_4[VAR_7]->alloc.map[VAR_15] & 0xff00) == VAR_16)
       VAR_4[VAR_7]->bender(VAR_7, VAR_15, VAR_11);
    }
    else
     VAR_4[VAR_7]->bender(VAR_7, VAR_9, VAR_11);
   }
   else
    VAR_4[VAR_7]->bender(VAR_7, VAR_9, VAR_11);
   break;

  default:;
 }
}

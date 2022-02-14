
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tcattrs ;
struct TYPE_6__ {int const flags; } ;
struct TYPE_7__ {unsigned int border; unsigned int mouse_level; int bell_duration; int bell_pitch; TYPE_3__* sc; TYPE_1__ base_curs_attr; int font_size; } ;
typedef TYPE_2__ scr_stat ;
typedef int cattrs ;
struct TYPE_8__ {TYPE_2__* cur_scp; } ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;





 int FUNC_2 (TYPE_2__*,int const,int,int) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 int FUNC_4 (TYPE_3__*,unsigned int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, int VAR_1, unsigned int VAR_2)
{
 static int VAR_3[] = {
  0,
  139,
  138,
  138 | 139,
  135,
  137,
 };
 static int VAR_4[] = {
  135 | 136,
  137 | 136,
 };
 scr_stat *VAR_5 = VAR_0;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 switch (VAR_1) {
 case 132:
  VAR_5->border = VAR_2 & 0xff;
  if (VAR_5 == VAR_5->sc->cur_scp)
   FUNC_3(VAR_5, VAR_5->border);
  break;
 case 131:
  VAR_7 = VAR_2 & 0xff;
  VAR_8 = (VAR_2 >> 8) & 0xff;
  VAR_9 = (VAR_2 >> 16) & 0xff;
  VAR_10 = (VAR_2 >> 24) & 0xff;
  switch (VAR_7) {
  case 1:
   if (VAR_8 < sizeof(VAR_3) / sizeof(VAR_3[0]))
    VAR_8 = VAR_3[VAR_8];
   else
    VAR_8 = VAR_3[VAR_8 & 0x3];
   FUNC_2(VAR_5, VAR_8, -1, -1);
   break;
  case 2:
   VAR_10 = 0;
   VAR_8 &= 0x1f;
   VAR_9 &= 0x1f;

  case 3:
   if (VAR_10 == 0)
    FUNC_2(VAR_5, -1,
        VAR_5->font_size - VAR_9 - 1,
        VAR_9 - VAR_8 + 1);
   else if (VAR_10 == 1)
    FUNC_2(VAR_5, -1,
        VAR_8, VAR_9 - VAR_8 + 1);
   break;
  }
  break;
 case 130:
  if (VAR_2 < sizeof(VAR_4) / sizeof(VAR_4[0]))
   FUNC_2(VAR_5, VAR_4[VAR_2], -1, -1);
  else if (VAR_2 == 2) {
   FUNC_2(VAR_5,
       135 | 136, -1, -1);
   VAR_6 = VAR_5->base_curs_attr.flags ^ 139;
   FUNC_2(VAR_5,
       VAR_6 | 136, -1, -1);
  }
  break;
 case 129:
  if (VAR_2 != 0)
   VAR_6 = VAR_5->base_curs_attr.flags & ~137;
  else
   VAR_6 = VAR_5->base_curs_attr.flags | 137;
  FUNC_2(VAR_5, VAR_6 | 136, -1, -1);
  break;
 case 128:
  FUNC_4(VAR_5->sc, VAR_2);
  break;
 case 133:
  VAR_5->bell_pitch = FUNC_1(VAR_2);
  VAR_5->bell_duration = FUNC_0(VAR_2);
  break;
 case 134:
  VAR_5->mouse_level = VAR_2;
  break;
 }
}

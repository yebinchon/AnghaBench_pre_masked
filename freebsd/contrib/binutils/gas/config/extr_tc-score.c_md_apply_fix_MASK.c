
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int valueT ;
typedef unsigned short value ;
typedef scalar_t__ segT ;
typedef int offsetT ;
struct TYPE_6__ {int fx_where; int fx_r_type; int fx_done; int fx_addnumber; int fx_offset; int fx_size; int fx_line; int fx_file; TYPE_1__* fx_frag; int * fx_addsy; scalar_t__ fx_pcrel; } ;
typedef TYPE_2__ fixS ;
struct TYPE_5__ {char* fr_literal; int fr_opcode; } ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int ,unsigned int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;

void
FUNC_11 (fixS *VAR_3, valueT *VAR_4, segT VAR_5)
{
  offsetT VAR_6 = *VAR_4;
  offsetT VAR_7 = 0;
  offsetT VAR_8;
  offsetT VAR_9;
  unsigned short VAR_10, VAR_11;

  char *VAR_12 = VAR_3->fx_frag->fr_literal + VAR_3->fx_where;

  FUNC_7 (VAR_3->fx_r_type < VAR_0);
  if (VAR_3->fx_addsy == 0 && !VAR_3->fx_pcrel)
    {
      if (VAR_3->fx_r_type != 134)
        VAR_3->fx_done = 1;
    }




  if (VAR_3->fx_pcrel)
    {
      if (VAR_3->fx_addsy != ((void*)0)
   && FUNC_1 (VAR_3->fx_addsy)
   && FUNC_0 (VAR_3->fx_addsy) != VAR_5)
 VAR_6 += FUNC_10 (VAR_3);
    }


  VAR_3->fx_addnumber = VAR_6;

  switch (VAR_3->fx_r_type)
    {
    case 142:
      if (VAR_3->fx_done)
        {
          VAR_8 = FUNC_8 (VAR_12, VAR_2);
          VAR_10 = (VAR_6) >> 16;
          VAR_8 |= (VAR_10 & 0x3fff) << 1;
          VAR_8 |= ((VAR_10 >> 14) & 0x3) << 16;
          FUNC_9 (VAR_12, VAR_8, VAR_2);
        }
      break;
    case 141:
      if (VAR_3->fx_done)
        {
          VAR_8 = FUNC_8 (VAR_12, VAR_2);
          VAR_11 = (VAR_6) & 0xffff;
          VAR_8 |= (VAR_11 & 0x3fff) << 1;
          VAR_8 |= ((VAR_11 >> 14) & 0x3) << 16;
          FUNC_9 (VAR_12, VAR_8, VAR_2);
        }
      break;
    case 130:
      {
        VAR_9 = FUNC_8 (VAR_12, VAR_2);
        VAR_6 = VAR_3->fx_offset;
        VAR_9 = (VAR_9 & ~0x3ff7ffe) | ((VAR_6 << 1) & 0x3ff0000) | (VAR_6 & 0x7fff);
        FUNC_9 (VAR_12, VAR_9, VAR_2);
      }
      break;
    case 136:
      if ((FUNC_0 (VAR_3->fx_addsy) != VAR_5) || (VAR_3->fx_addsy != ((void*)0) && FUNC_2 (VAR_3->fx_addsy)))
        VAR_6 = VAR_3->fx_offset;
      else
        VAR_3->fx_done = 1;

      VAR_9 = FUNC_8 (VAR_12, VAR_2);
      if ((VAR_3->fx_frag->fr_opcode != 0) && ((VAR_9 & 0x80008000) != 0x80008000))
        {
          if ((VAR_6 & 0x80000000) == 0x80000000)
            VAR_7 = 0xffffffff - VAR_6 + 1;
          if ((VAR_7 & 0xffffff00) != 0)
            {
              FUNC_6 (VAR_3->fx_file, VAR_3->fx_line,
                            FUNC_5(" branch relocation truncate (0x%x) [-2^8 ~ 2^8]"), (unsigned int)VAR_6);
              return;
            }
          VAR_9 = FUNC_8 (VAR_12, VAR_1);
          VAR_9 &= 0xff00;
          VAR_9 = (VAR_9 & 0xff00) | ((VAR_6 >> 1) & 0xff);
          FUNC_9 (VAR_12, VAR_9, VAR_1);
          VAR_3->fx_r_type = 138;
          VAR_3->fx_size = 2;
        }
      else
        {
          if ((VAR_6 & 0x80000000) == 0x80000000)
            VAR_7 = 0xffffffff - VAR_6 + 1;
          if ((VAR_7 & 0xfff80000) != 0)
            {
              FUNC_6 (VAR_3->fx_file, VAR_3->fx_line,
                            FUNC_5(" branch relocation truncate (0x%x) [-2^19 ~ 2^19]"), (unsigned int)VAR_6);
              return;
            }
          VAR_9 = FUNC_8 (VAR_12, VAR_2);
          VAR_9 &= 0xfc00fc01;
          VAR_9 = (VAR_9 & 0xfc00fc01) | (VAR_6 & 0x3fe) | ((VAR_6 << 6) & 0x3ff0000);
          FUNC_9 (VAR_12, VAR_9, VAR_2);
        }
      break;
    case 137:
      VAR_9 = FUNC_8 (VAR_12, VAR_1);
      VAR_9 &= 0xf001;
      VAR_6 = VAR_3->fx_offset & 0xfff;
      VAR_9 = (VAR_9 & 0xfc01) | (VAR_6 & 0xffe);
      FUNC_9 (VAR_12, VAR_9, VAR_1);
      break;
    case 138:
      VAR_9 = FUNC_8 (VAR_12, VAR_2);
      if ((VAR_3->fx_frag->fr_opcode != 0) && ((VAR_9 & 0x80008000) == 0x80008000))
        {
          if ((FUNC_0 (VAR_3->fx_addsy) != VAR_5) ||
              (VAR_3->fx_addsy != ((void*)0) && FUNC_2 (VAR_3->fx_addsy)))
            VAR_6 = VAR_3->fx_offset;
          else
            VAR_3->fx_done = 1;
          if ((VAR_6 & 0x80000000) == 0x80000000)
            VAR_7 = 0xffffffff - VAR_6 + 1;
          if ((VAR_7 & 0xfff80000) != 0)
            {
              FUNC_6 (VAR_3->fx_file, VAR_3->fx_line,
                            FUNC_5(" branch relocation truncate (0x%x) [-2^19 ~ 2^19]"), (unsigned int)VAR_6);
              return;
            }
          VAR_9 = FUNC_8 (VAR_12, VAR_2);
          VAR_9 = (VAR_9 & 0xfc00fc01) | (VAR_6 & 0x3fe) | ((VAR_6 << 6) & 0x3ff0000);
          FUNC_9 (VAR_12, VAR_9, VAR_2);
          VAR_3->fx_r_type = 136;
          VAR_3->fx_size = 4;
          break;
        }
      else
        {

          if ((FUNC_0 (VAR_3->fx_addsy) != VAR_5) ||
              (VAR_3->fx_addsy != ((void*)0) && FUNC_2 (VAR_3->fx_addsy)))
            VAR_6 = VAR_3->fx_offset;
          else
            VAR_3->fx_done = 1;

          if ((VAR_6 & 0x80000000) == 0x80000000)
            VAR_7 = 0xffffffff - VAR_6 + 1;
          if ((VAR_7 & 0xffffff00) != 0)
            {
              FUNC_6 (VAR_3->fx_file, VAR_3->fx_line,
                            FUNC_5(" branch relocation truncate (0x%x)  [-2^8 ~ 2^8]"), (unsigned int)VAR_6);
              return;
            }
          VAR_9 = FUNC_8 (VAR_12, VAR_1);
          VAR_9 = (VAR_9 & 0xff00) | ((VAR_6 >> 1) & 0xff);
          FUNC_9 (VAR_12, VAR_9, VAR_1);
          break;
        }
    case 144:
      if (VAR_3->fx_done || VAR_3->fx_pcrel)
 FUNC_9 (VAR_12, VAR_6, 1);







      break;

    case 146:
      if (VAR_3->fx_done || VAR_3->fx_pcrel)
        FUNC_9 (VAR_12, VAR_6, 2);







      break;
    case 139:
    case 145:
      if (VAR_3->fx_done || VAR_3->fx_pcrel)
        FUNC_9 (VAR_12, VAR_6, 4);







      break;
    case 128:
      VAR_3->fx_done = 0;
      if (VAR_3->fx_addsy && !FUNC_1 (VAR_3->fx_addsy) && !FUNC_3 (VAR_3->fx_addsy))
        FUNC_4 (VAR_3->fx_addsy);
      break;
    case 129:
      VAR_3->fx_done = 0;
      break;
    case 131:
      VAR_9 = FUNC_8 (VAR_12, VAR_2);
      if ((VAR_3->fx_frag->fr_opcode != 0) && ((VAR_9 & 0xfc1c8000) != 0x94188000))
        VAR_3->fx_r_type = 140;
      VAR_3->fx_done = 0;
      break;
    case 133:
    case 134:
    case 132:
    case 135:
    case 143:
      break;
    case 140:
    default:
      FUNC_6 (VAR_3->fx_file, VAR_3->fx_line, FUNC_5("bad relocation fixup type (%d)"), VAR_3->fx_r_type);
    }
}

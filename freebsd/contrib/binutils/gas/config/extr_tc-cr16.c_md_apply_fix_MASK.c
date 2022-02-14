
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ valueT ;
typedef scalar_t__ segT ;
struct TYPE_5__ {int fx_where; int fx_r_type; int fx_done; int fx_pcrel; int * fx_addsy; scalar_t__ fx_offset; TYPE_1__* fx_frag; } ;
typedef TYPE_2__ fixS ;
struct TYPE_4__ {char* fr_literal; } ;






 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__,char*) ;
 int FUNC_3 (int ,scalar_t__,char*) ;
 int FUNC_4 (int ,unsigned char,char*) ;
 int VAR_0 ;

void
FUNC_5 (fixS *VAR_1, valueT *VAR_2, segT VAR_3)
{
  valueT VAR_4 = * VAR_2;
  char *VAR_5 = VAR_1->fx_frag->fr_literal + VAR_1->fx_where;
  VAR_1->fx_offset = 0;

  switch (VAR_1->fx_r_type)
    {
      case 128:
        FUNC_4 (VAR_0, (unsigned char) VAR_4, VAR_5);
        break;
      case 131:
        FUNC_2 (VAR_0, VAR_4, VAR_5);
        break;
      case 130:
        FUNC_3 (VAR_0, VAR_4, VAR_5);
        break;
      case 129:
        FUNC_3 (VAR_0, VAR_4, VAR_5);
        break;
      default:

        FUNC_1 ();
        break;
    }

  VAR_1->fx_done = 0;

  if (VAR_1->fx_addsy == ((void*)0)
      && VAR_1->fx_pcrel == 0)
    VAR_1->fx_done = 1;

  if (VAR_1->fx_pcrel == 1
      && VAR_1->fx_addsy != ((void*)0)
      && FUNC_0 (VAR_1->fx_addsy) == VAR_3)
    VAR_1->fx_done = 1;
}

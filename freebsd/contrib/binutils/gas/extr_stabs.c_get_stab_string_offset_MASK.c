
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int subsegT ;
typedef TYPE_2__* segT ;
struct TYPE_9__ {unsigned int stab_string_size; } ;
struct TYPE_11__ {TYPE_1__ stabu; } ;
struct TYPE_10__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_2__*,int) ;
 char* FUNC_2 (unsigned int) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_3 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_4 (char*,char const*) ;
 unsigned int FUNC_5 (char const*) ;
 TYPE_2__* FUNC_6 (char const*,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 char const* FUNC_8 (char const*) ;

unsigned int
FUNC_9 (const char *VAR_6, const char *VAR_7)
{
  unsigned int VAR_8;
  unsigned int VAR_9;
  segT VAR_10;
  subsegT VAR_11;
  segT VAR_12;
  char *VAR_13;

  if (! VAR_2)
    FUNC_0 ();

  VAR_8 = FUNC_5 (VAR_6);

  VAR_10 = VAR_3;
  VAR_11 = VAR_4;


  VAR_12 = FUNC_6 (VAR_7, 0);

  VAR_9 = FUNC_3 (VAR_12)->stabu.stab_string_size;
  if (VAR_9 <= 0)
    {

      VAR_13 = FUNC_2 (1);
      *VAR_13 = 0;
      VAR_9 = FUNC_3 (VAR_12)->stabu.stab_string_size = 1;
      FUNC_1 (VAR_5, VAR_12, VAR_1 | VAR_0);
      if (VAR_12->name == VAR_7)
 VAR_12->name = FUNC_8 (VAR_7);
    }

  if (VAR_8 > 0)
    {
      VAR_13 = FUNC_2 (VAR_8 + 1);
      FUNC_4 (VAR_13, VAR_6);

      FUNC_3 (VAR_12)->stabu.stab_string_size += VAR_8 + 1;
    }
  else
    VAR_9 = 0;

  FUNC_7 (VAR_10, VAR_11);

  return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int instruction; void* error; int name; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char**,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char**,int ,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_5 (char**,int,int ) ;
 int FUNC_6 (char**) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_6)
{
  FUNC_7 (VAR_6);

  if ((FUNC_2 (&VAR_6, 20, VAR_3) == (int) VAR_1) || (FUNC_6 (&VAR_6) == (int) VAR_1))
    {
      return;
    }
  else
    {
      int VAR_7;

      VAR_7 = (VAR_5.instruction >> 20) & 0x1F;
      FUNC_8 (VAR_5.name, "cache %d", VAR_7);
    }

  if (*VAR_6 == '[')
    {
      VAR_6++;
      FUNC_7 (VAR_6);

      if (FUNC_5 (&VAR_6, 15, VAR_2) == (int) VAR_1)
 return;

      FUNC_7 (VAR_6);


      if (FUNC_6 (&VAR_6) == (int) VAR_1)
        {
          FUNC_0 (((void*)0));
          if (*VAR_6 != ']')
            {
              VAR_5.error = FUNC_1("missing ]");
              return;
            }
          VAR_6++;
        }

      else
        {
          if (FUNC_4 (&VAR_6, 0, VAR_4) == (int) VAR_1)
            {
              return;
            }

          FUNC_7 (VAR_6);
          if (*VAR_6++ != ']')
            {
              VAR_5.error = FUNC_1("missing ]");
              return;
            }
        }

      if (FUNC_3 (VAR_6) == (int) VAR_1)
 return;
    }
  else
    {
      VAR_5.error = VAR_0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int,int ) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (char**,int,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6 (char *VAR_6)
{
  FUNC_5 (VAR_6);

  if ((FUNC_3 (&VAR_6, 15, VAR_3) == (int) VAR_1)
      || (FUNC_4 (&VAR_6) == (int) VAR_1))
    return;

  if (*VAR_6 == '[')
    {
      VAR_6++;
      FUNC_5 (VAR_6);

      if (FUNC_3 (&VAR_6, 20, VAR_2) == (int) VAR_1)
 return;

      FUNC_5 (VAR_6);

      if (*VAR_6++ != ']')
        {
          if (FUNC_2 (&VAR_6, 5, VAR_4) == (int) VAR_1)
     return;

          FUNC_5 (VAR_6);
          if (*VAR_6++ != ']')
            {
              VAR_5.error = FUNC_0("missing ]");
              return;
            }
        }

      FUNC_1 (VAR_6);
    }
  else
    VAR_5.error = VAR_0;
}

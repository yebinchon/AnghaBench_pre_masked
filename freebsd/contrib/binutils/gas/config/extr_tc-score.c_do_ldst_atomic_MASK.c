
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (char**,int,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_5 (char *VAR_6)
{
  if (VAR_5 == 1)
    {
      VAR_4.error = VAR_1;
      return;
    }

  FUNC_4 (VAR_6);

  if ((FUNC_2 (&VAR_6, 20, VAR_3) == (int) VAR_2)
      || (FUNC_3 (&VAR_6) == (int) VAR_2))
    {
      return;
    }
  else
    {

      FUNC_4 (VAR_6);
      if (*VAR_6++ == '[')
        {
          int VAR_7;

          FUNC_4 (VAR_6);
          if ((VAR_7 = FUNC_2 (&VAR_6, 15, VAR_3)) == (int) VAR_2)
            {
              return;
            }

          FUNC_4 (VAR_6);
          if (*VAR_6++ != ']')
            {
              VAR_4.error = FUNC_0("missing ]");
              return;
            }

          FUNC_1 (VAR_6);
        }
      else
 VAR_4.error = VAR_0;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int instruction; void* error; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 void* FUNC_0 (char*) ;
 int FUNC_1 (void*,void*) ;
 int FUNC_2 (char*) ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (char**,int,int ) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6 (char *VAR_9)
{
  int VAR_10;

  if (VAR_8 == 1)
    {
      VAR_7.error = VAR_1;
      return;
    }

  FUNC_5 (VAR_9);


  if (*VAR_9 == '[')
    {
      VAR_9++;
      FUNC_5 (VAR_9);

      if (FUNC_3 (&VAR_9, 15, VAR_4) == (int) VAR_2)
 return;

      if (*VAR_9++ == ']')
        {
          if (*VAR_9++ != '+')
            {
              VAR_7.error = FUNC_0("missing +");
              return;
            }
        }
      else
        {
          VAR_7.error = FUNC_0("missing ]");
          return;
        }

      if (FUNC_2 (VAR_9) == (int) VAR_2)
 return;
    }

  else
    {
      if (((VAR_10 = FUNC_3 (&VAR_9, 20, VAR_4)) == (int) VAR_2)
          || (FUNC_4 (&VAR_9) == (int) VAR_2))
        {
          return;
        }

      FUNC_5 (VAR_9);
      if (*VAR_9++ == '[')
        {
          int VAR_11;

          FUNC_5 (VAR_9);
          if ((VAR_11 = FUNC_3 (&VAR_9, 15, VAR_4)) == (int) VAR_2)
            {
              return;
            }


          VAR_10 = (VAR_10 == VAR_11);
          FUNC_5 (VAR_9);
          if (*VAR_9++ == ']')
            {
              unsigned int VAR_12 = VAR_7.instruction & VAR_3;

              if (*VAR_9++ == '+')
                {
                  if (VAR_10)
                    {
                      FUNC_1 (FUNC_0("%s register same as write-back base"),
                               ((VAR_12 & VAR_5) || (VAR_12 & VAR_6)
                                ? FUNC_0("destination") : FUNC_0("source")));
                    }
                }
              else
                {
                  VAR_7.error = FUNC_0("missing +");
                  return;
                }

              if (FUNC_2 (VAR_9) == (int) VAR_2)
  return;
            }
          else
            {
              VAR_7.error = FUNC_0("missing ]");
              return;
            }
        }
      else
        {
          VAR_7.error = VAR_0;
          return;
        }
    }
}

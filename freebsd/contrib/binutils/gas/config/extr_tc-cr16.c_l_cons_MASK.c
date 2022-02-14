
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X_op; unsigned long X_add_number; int X_unsigned; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,...) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (TYPE_1__*) ;
 char* VAR_4 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;

__attribute__((used)) static void
FUNC_10 (int VAR_5)
{
  int VAR_6;
  expressionS VAR_7;





  if (FUNC_7 ())
    {
      FUNC_4 ();
      return;
    }
  VAR_6 = 0;
  do
    {
      unsigned int VAR_8 = VAR_0 * VAR_5;
      char *VAR_9 = VAR_4;

      FUNC_6 (&VAR_7);

      if (*VAR_4 == ':')
 {

   long VAR_10 = 0;

   for (;;)
     {
       unsigned long VAR_11;

       if (*VAR_4 != ':')
  {
    VAR_4 = VAR_9;
    break;
  }
       if (VAR_7.X_op == VAR_1)
  {
    FUNC_3 (FUNC_1("using a bit field width of zero"));
    VAR_7.X_add_number = 0;
    VAR_7.X_op = VAR_2;
  }

       if (VAR_7.X_op != VAR_2)
  {
    *VAR_4 = '\0';
    FUNC_2 (FUNC_1("field width \"%s\" too complex for a bitfield"), VAR_9);
    *VAR_4 = ':';
    FUNC_4 ();
    return;
  }

       if ((VAR_11 = VAR_7.X_add_number) >
    (unsigned int)(VAR_0 * VAR_5))
  {
    FUNC_3 (FUNC_1("field width %lu too big to fit in %d bytes: truncated to %d bits"), VAR_11, VAR_5, (VAR_0 * VAR_5));
    VAR_11 = VAR_0 * VAR_5;
  }


       if (VAR_11 > VAR_8)
  {

    VAR_4 = VAR_9;
    VAR_7.X_add_number = VAR_10;
    break;
  }


       VAR_9 = ++VAR_4;

       FUNC_6 (&VAR_7);
       if (VAR_7.X_op != VAR_2)
  {
    char VAR_12 = *VAR_4;

    *VAR_4 = '\0';
    FUNC_2 (FUNC_1("field value \"%s\" too complex for a bitfield"), VAR_9);
    *VAR_4 = VAR_12;
    FUNC_4 ();
    return;
  }

       VAR_10 |= ((~(-1 << VAR_11) & VAR_7.X_add_number)
   << ((VAR_0 * VAR_5) - VAR_8));

       if ((VAR_8 -= VAR_11) == 0
    || FUNC_7 ()
    || *VAR_4 != ',')
  break;

       VAR_9 = ++VAR_4;
       FUNC_6 (&VAR_7);
     }

   VAR_7.X_add_number = VAR_10;
   VAR_7.X_op = VAR_2;
   VAR_7.X_unsigned = 1;
 }

      if ((*(VAR_4) == '@') && (*(VAR_4 +1) == 'c'))
 VAR_3 = 1;
      FUNC_5 (&VAR_7, (unsigned int) VAR_5);
      ++VAR_6;
      if ((*(VAR_4) == '@') && (*(VAR_4 +1) == 'c'))
 {
   VAR_4 +=3;
   break;
 }
    }
  while (*VAR_4++ == ',');


  VAR_4--;

  FUNC_4 ();
}

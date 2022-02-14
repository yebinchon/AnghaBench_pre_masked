
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int,int,...) ;
 int VAR_8 ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_10 ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int ,int *,int) ;

const char *
FUNC_9 (void)
{
  int VAR_11;
  unsigned long VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14;
  int VAR_15;

  if (VAR_10)
    return "";

  if (FUNC_0 (FUNC_1 ()))
    return "";

  VAR_12 = FUNC_6 ();
  VAR_13 = FUNC_4 (VAR_12 & 0x0f00);





  VAR_15 = FUNC_2 ();
  if (VAR_13)
    {
      unsigned long VAR_16 = VAR_12 & 0xff;
      int VAR_17;



      if (VAR_15 <= 12)
 VAR_16 |= 1 << 3;
      if (VAR_15 <= 8)
 VAR_16 |= 1 << 2;

      if (VAR_16 == 0)


 FUNC_5
   ("no low registers available for popping high registers");

      for (VAR_17 = 8; VAR_17 < 13; VAR_17++)
 if (VAR_12 & (1 << VAR_17))
   break;

      while (VAR_13)
 {


   for (VAR_11 = 0; VAR_11 <= VAR_3; VAR_11++)
     {
       if (VAR_16 & (1 << VAR_11))
  VAR_13--;
       if (VAR_13 == 0)
  break;
     }

   VAR_16 &= (2 << VAR_11) - 1;


   FUNC_8 (VAR_8, VAR_16, 0, ((void*)0), VAR_16);


   for (VAR_11 = 0; VAR_11 <= VAR_3; VAR_11++)
     {
       if (VAR_16 & (1 << VAR_11))
  {
    FUNC_3 (VAR_8, "\tmov\t%r, %r\n", VAR_17,
          VAR_11);

    for (VAR_17++; VAR_17 < 13; VAR_17++)
      if (VAR_12 & (1 << VAR_17))
        break;
  }
     }
 }
      VAR_12 &= ~0x0f00;
    }

  VAR_14 = (VAR_12 & (1 << VAR_4)) != 0;
  VAR_12 &= 0xff;

  if (VAR_9 == 0 || VAR_7)
    {

      if (VAR_14)
 VAR_12 |= 1 << VAR_5;




      if (VAR_12)
 FUNC_8 (VAR_8, VAR_12, VAR_0, ((void*)0),
         VAR_12);



      if (!VAR_14)
 FUNC_7 (VAR_8, VAR_4);
    }
  else
    {

      if (VAR_12)
 FUNC_8 (VAR_8, VAR_12, VAR_0, ((void*)0),
         VAR_12);

      if (VAR_14)
 {
   if (VAR_15 > 12)
     {

       FUNC_3 (VAR_8, "\tmov\t%r, %r\n", VAR_1,
      VAR_2);
     }


   FUNC_8 (VAR_8, 1 << VAR_2, 0, ((void*)0),
    1 << VAR_2);

   if (VAR_15 > 12)
     {

       FUNC_3 (VAR_8, "\tmov\t%r, %r\n", VAR_4,
      VAR_2);

       FUNC_3 (VAR_8, "\tmov\t%r, %r\n", VAR_2,
      VAR_1);
       VAR_11 = VAR_4;
     }
   else
     VAR_11 = VAR_2;
 }
      else
 VAR_11 = VAR_4;


      FUNC_3 (VAR_8, "\tadd\t%r, %r, #%d\n",
     VAR_6, VAR_6,
     VAR_9);

      FUNC_7 (VAR_8, VAR_11);
    }

  return "";
}

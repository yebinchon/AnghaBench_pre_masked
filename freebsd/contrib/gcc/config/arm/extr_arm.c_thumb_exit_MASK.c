
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,char*,int,...) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int *,unsigned int,int,int *,unsigned int) ;

__attribute__((used)) static void
FUNC_9 (FILE *VAR_15, int VAR_16)
{
  unsigned VAR_17;
  unsigned VAR_18;
  int VAR_19;
  unsigned VAR_20;
  unsigned VAR_21;
  int VAR_22;
  int VAR_23;
  int VAR_24 = VAR_2;


  VAR_18 = 0;
  VAR_19 = 0;

  if (VAR_16 == -1)
    {
      VAR_18 |= 1 << VAR_5;
      ++VAR_19;
    }

  if (VAR_8)
    {

      VAR_18 |= (1 << VAR_1) | (1 << VAR_7);
      VAR_19 += 2;
    }



  if (VAR_19 == 0)
    {
      if (VAR_12)
 FUNC_5 (VAR_15, "\tadd\t%r, %r\n", VAR_7, VAR_0);

      FUNC_5 (VAR_15, "\tbx\t%r\n", VAR_16);
      return;
    }



  else if (!VAR_9
    && !VAR_8
    && !FUNC_6 (VAR_13)
    && !VAR_12)
    {
      FUNC_5 (VAR_15, "\tpop\t{%r}\n", VAR_6);
      return;
    }


  VAR_17 = 0;



  if (VAR_12)
    VAR_23 = 12;
  else
    {






      if (VAR_14 != 0)
 VAR_22 = FUNC_3 (VAR_14);
      else
 VAR_22 = FUNC_1 (FUNC_2 (VAR_13));

      VAR_23 = FUNC_4 (VAR_22);

      if (VAR_23 == 0)
 {



   if (VAR_22 == VAR_11)
     VAR_17 =
       (1 << FUNC_0 (1))
       | (1 << FUNC_0 (2))
       | (1 << FUNC_0 (3));
   else
     VAR_17 =
       (1 << FUNC_0 (2))
       | (1 << FUNC_0 (3));
 }
      else if (VAR_23 <= 4)
 VAR_17 =
   (1 << FUNC_0 (2))
   | (1 << FUNC_0 (3));
      else if (VAR_23 <= 8)
 VAR_17 =
   (1 << FUNC_0 (3));
    }


  for (VAR_20 = VAR_17,
       VAR_21 = VAR_18;
       VAR_21 != 0 && VAR_20 != 0;
       VAR_20 &= ~(VAR_20 & - VAR_20),
       VAR_21 &= ~(VAR_21 & - VAR_21))
    -- VAR_19;


  if (VAR_20 > 0)
    VAR_17 &= ~VAR_20;



  else if (VAR_19)
    {


      if (VAR_17 == 0
   && VAR_16 == VAR_4)
 {
   FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_5, VAR_4);
   VAR_16 = VAR_5;
 }
      else if (VAR_23 > 12)
 {


   VAR_24 = VAR_10;

   FUNC_5 (VAR_15, "\tmov\t%r, %r\n",VAR_3, VAR_4);
 }

      if (VAR_16 != VAR_4)
 {

   VAR_17 |= 1 << VAR_4;

   --VAR_19;
 }
    }


  FUNC_8 (VAR_15, VAR_17, VAR_2, ((void*)0),
   VAR_17);


  if (VAR_16 == -1)
    {

      VAR_18 &= ~(1 << VAR_5);

      VAR_16 =
 FUNC_7 (VAR_17);



      VAR_17 &= ~(1 << VAR_16);
    }


  if (VAR_17)
    {
      int VAR_25;


      VAR_25 = FUNC_7 (VAR_17);


      FUNC_5 (VAR_15, "\tmov\t%r, %r\n",
     VAR_1, VAR_25);


      VAR_17 &= ~(1 << VAR_25);
      VAR_18 &= ~(1 << VAR_1);

      if (VAR_17)
 {
   int VAR_26;



   VAR_26 = FUNC_7 (VAR_17);


   FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_7, VAR_26);
 }
      else
 {



   VAR_17 |= (1 << VAR_25);
 }
    }





  if (VAR_17 == 0 && VAR_19 > 0)
    {
      VAR_17 |= 1 << VAR_16;

      FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_5,
     VAR_16);

      VAR_16 = VAR_5;
    }



  if (VAR_19 > 0)
    {
      int VAR_27;
      int VAR_28;

      FUNC_8 (VAR_15, VAR_17, VAR_2, ((void*)0),
       VAR_17);



      VAR_27 = FUNC_7 (VAR_17);
      VAR_28 = FUNC_7 (VAR_18);

      FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_28, VAR_27);

      VAR_18 &= ~(1 << VAR_28);

      --VAR_19;
    }



  if (VAR_19 > 0)
    {
      int VAR_29;

      FUNC_8 (VAR_15, VAR_17, VAR_2, ((void*)0),
       VAR_17);

      VAR_29 = FUNC_7 (VAR_17);

      FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_7, VAR_29);




    }


  if (VAR_24)
    {
      if (VAR_16 != VAR_5)
 {
   FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_5, VAR_4);
   VAR_16 = VAR_5;
 }

      FUNC_5 (VAR_15, "\tmov\t%r, %r\n", VAR_4, VAR_3);
    }

  if (VAR_12)
    FUNC_5 (VAR_15, "\tadd\t%r, %r\n", VAR_7, VAR_0);


  FUNC_5 (VAR_15, "\tbx\t%r\n", VAR_16);
}

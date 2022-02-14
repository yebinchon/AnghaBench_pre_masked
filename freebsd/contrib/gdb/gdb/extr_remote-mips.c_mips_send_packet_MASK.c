
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned int FUNC_1 (unsigned char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_2 (unsigned char*) ;
 int VAR_5 ;
 unsigned char FUNC_3 (int,int,int) ;
 unsigned char FUNC_4 (int,int,int) ;
 unsigned char FUNC_5 (int,int,int) ;
 unsigned char FUNC_6 (int,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (unsigned char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned char FUNC_8 (int) ;
 unsigned char FUNC_9 (int) ;
 unsigned char FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_13 ;
 int FUNC_12 (int ,char*,...) ;
 int VAR_14 ;
 int FUNC_13 (unsigned char*,char const*,int) ;
 scalar_t__ FUNC_14 (unsigned char*,unsigned char*,int) ;
 int VAR_15 ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (unsigned char*,int*,int,int ) ;
 int FUNC_18 (unsigned char*,int*,int*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,unsigned char*,int) ;
 int FUNC_21 (char const*) ;

__attribute__((used)) static void
FUNC_22 (const char *VAR_21, int VAR_22)
{
                 int VAR_23;
  unsigned char *VAR_24;
  int VAR_25;
  int VAR_26;

  VAR_23 = FUNC_21 (VAR_21);
  if (VAR_23 > VAR_0)
    FUNC_15 ("MIPS protocol data packet too long: %s", VAR_21);

  VAR_24 = (unsigned char *) FUNC_11 (VAR_5 + VAR_23 + VAR_12 + 1);

  VAR_24[VAR_3] = FUNC_5 (1, VAR_23, VAR_18);
  VAR_24[VAR_4] = FUNC_6 (1, VAR_23, VAR_18);
  VAR_24[VAR_1] = FUNC_3 (1, VAR_23, VAR_18);
  VAR_24[VAR_2] = FUNC_4 (1, VAR_23, VAR_18);

  FUNC_13 (VAR_24 + VAR_5, VAR_21, VAR_23);

  VAR_25 = FUNC_14 (VAR_24, VAR_24 + VAR_5, VAR_23);
  VAR_24[VAR_5 + VAR_23 + VAR_9] = FUNC_8 (VAR_25);
  VAR_24[VAR_5 + VAR_23 + VAR_10] = FUNC_9 (VAR_25);
  VAR_24[VAR_5 + VAR_23 + VAR_11] = FUNC_10 (VAR_25);



  VAR_18 = (VAR_18 + 1) % VAR_6;




  for (VAR_26 = 0; VAR_26 < VAR_17; VAR_26++)
    {
      int VAR_27;
      int VAR_28;

      if (VAR_19 > 0)
 {


   VAR_24[VAR_5 + VAR_23 + VAR_12] = '\0';
   FUNC_12 (VAR_14, "Writing \"%s\"\n", VAR_24 + 1);
 }

      if (FUNC_20 (VAR_15, VAR_24,
   VAR_5 + VAR_23 + VAR_12) != 0)
 FUNC_15 ("write to target failed: %s", FUNC_19 (VAR_13));

      if (!VAR_22)
 return;

      VAR_27 = 0;
      VAR_28 = 0;
      while (1)
 {
   unsigned char VAR_29[VAR_5 + 1];
   unsigned char VAR_30[VAR_12 + 1];
   int VAR_31;
   unsigned int VAR_32;



   VAR_31 = FUNC_17 (VAR_29, &VAR_27, VAR_28, VAR_16);
   if (VAR_31 != 0)
     break;

   VAR_28 = 0;





   if (FUNC_2 (VAR_29))
     {
       int VAR_33;




       VAR_23 = FUNC_0 (VAR_29);

       for (VAR_33 = 0; VAR_33 < VAR_23; VAR_33++)
  {
    int VAR_34;

    VAR_34 = FUNC_16 (VAR_20);
    if (VAR_34 == VAR_8)
      {
        VAR_28 = VAR_8;
        break;
      }
    if (VAR_34 == VAR_7)
      break;

  }

       if (VAR_33 == VAR_23)
  (void) FUNC_18 (VAR_30, &VAR_27, &VAR_28,
          VAR_20);



       continue;
     }


   if (FUNC_0 (VAR_29) != 0)
     continue;


   VAR_31 = FUNC_18 (VAR_30, &VAR_27, &VAR_28,
          VAR_16);


   if (VAR_31 == -1)
     break;


   if (VAR_31 != 0)
     continue;



   if (FUNC_14 (VAR_29, (unsigned char *) ((void*)0), 0)
       != FUNC_7 (VAR_30))
     continue;

   if (VAR_19 > 0)
     {
       VAR_29[VAR_5] = '\0';
       VAR_30[VAR_12] = '\0';


       FUNC_12 (VAR_14, "Got ack %d \"%s%s\"\n",
      FUNC_1 (VAR_29), VAR_29 + 1, VAR_30);
     }


   VAR_32 = FUNC_1 (VAR_29);
   if (VAR_32 == VAR_18)
     return;



   if ((VAR_32 + 1) % VAR_6 == VAR_18)
     break;




   ++VAR_27;
 }
    }

  FUNC_15 ("Remote did not acknowledge packet");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (unsigned char*) ;
 int VAR_4 ;
 unsigned char FUNC_3 (int ,int ,int) ;
 unsigned char FUNC_4 (int ,int ,int) ;
 unsigned char FUNC_5 (int ,int ,int) ;
 unsigned char FUNC_6 (int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char* FUNC_7 (unsigned char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned char FUNC_8 (int) ;
 unsigned char FUNC_9 (int) ;
 unsigned char FUNC_10 (int) ;
 int VAR_12 ;
 int FUNC_11 (int ,char*,...) ;
 int VAR_13 ;
 int FUNC_12 (unsigned char*,...) ;
 int VAR_14 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int) ;
 scalar_t__ FUNC_15 (unsigned char*,int*,int,int) ;
 int VAR_15 ;
 int FUNC_16 (unsigned char*,int*,int*,int) ;
 int FUNC_17 (char*,...) ;
 scalar_t__ VAR_16 ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (int ,unsigned char*,int) ;

__attribute__((used)) static int
FUNC_20 (char *VAR_17, int VAR_18, int VAR_19)
{
  int VAR_20;
  int VAR_21;
  int VAR_22;
  unsigned char VAR_23[VAR_4 + VAR_11 + 1];
  int VAR_24;

  VAR_20 = 0;
  VAR_21 = 0;
  while (1)
    {
      unsigned char VAR_25[VAR_4];
      unsigned char VAR_26[VAR_11];
      int VAR_27;
      int VAR_28;

      if (FUNC_15 (VAR_25, &VAR_21, VAR_20, VAR_19) != 0)
 {
   if (VAR_18)
     FUNC_13 ("Timed out waiting for remote packet");
   else
     return -1;
 }

      VAR_20 = 0;


      if (!FUNC_2 (VAR_25))
 {
   VAR_22 = FUNC_0 (VAR_25);


   if (VAR_22 == 0)
     {


       (void) FUNC_16 (VAR_26, &VAR_21, &VAR_20, VAR_19);
     }


   if (VAR_16 > 0)
     FUNC_11 (VAR_13, "Ignoring unexpected ACK\n");
   continue;
 }

      VAR_22 = FUNC_0 (VAR_25);
      for (VAR_27 = 0; VAR_27 < VAR_22; VAR_27++)
 {
   int VAR_29;

   VAR_29 = FUNC_14 (VAR_19);
   if (VAR_29 == VAR_7)
     {
       VAR_20 = VAR_7;
       break;
     }
   if (VAR_29 == VAR_6)
     {
       if (VAR_18)
  FUNC_13 ("Timed out waiting for remote packet");
       else
  return -1;
     }
   VAR_17[VAR_27] = VAR_29;
 }

      if (VAR_27 < VAR_22)
 {


   if (VAR_16 > 0)
     FUNC_11 (VAR_13,
    "Got new SYN after %d chars (wanted %d)\n",
    VAR_27, VAR_22);
   continue;
 }

      VAR_28 = FUNC_16 (VAR_26, &VAR_21, &VAR_20, VAR_19);
      if (VAR_28 == -1)
 {
   if (VAR_18)
     FUNC_13 ("Timed out waiting for packet");
   else
     return -1;
 }
      if (VAR_28 == -2)
 {


   if (VAR_16 > 0)
     FUNC_11 (VAR_13, "Got SYN when wanted trailer\n");
   continue;
 }


      if (FUNC_1 (VAR_25) != VAR_15)
 {


   if (VAR_16 > 0)
     FUNC_11 (VAR_13,
    "Ignoring sequence number %d (want %d)\n",
    FUNC_1 (VAR_25), VAR_15);
   continue;
 }

      if (FUNC_12 (VAR_25, VAR_17, VAR_22) == FUNC_7 (VAR_26))
 break;

      if (VAR_16 > 0)


 FUNC_17 ("Bad checksum; data %d, trailer %d\n",
      FUNC_12 (VAR_25, VAR_17, VAR_22),
      FUNC_7 (VAR_26));



      VAR_23[VAR_2] = FUNC_5 (0, 0, VAR_15);
      VAR_23[VAR_3] = FUNC_6 (0, 0, VAR_15);
      VAR_23[VAR_0] = FUNC_3 (0, 0, VAR_15);
      VAR_23[VAR_1] = FUNC_4 (0, 0, VAR_15);

      VAR_24 = FUNC_12 (VAR_23, (unsigned char *) ((void*)0), 0);

      VAR_23[VAR_4 + VAR_8] = FUNC_8 (VAR_24);
      VAR_23[VAR_4 + VAR_9] = FUNC_9 (VAR_24);
      VAR_23[VAR_4 + VAR_10] = FUNC_10 (VAR_24);

      if (VAR_16 > 0)
 {
   VAR_23[VAR_4 + VAR_11] = '\0';


   FUNC_17 ("Writing ack %d \"%s\"\n", VAR_15,
        VAR_23 + 1);
 }

      if (FUNC_19 (VAR_14, VAR_23, VAR_4 + VAR_11) != 0)
 {
   if (VAR_18)
     FUNC_13 ("write to target failed: %s", FUNC_18 (VAR_12));
   else
     return -1;
 }
    }

  if (VAR_16 > 0)
    {
      VAR_17[VAR_22] = '\0';


      FUNC_17 ("Got packet \"%s\"\n", VAR_17);
    }


  VAR_15 = (VAR_15 + 1) % VAR_5;

  VAR_23[VAR_2] = FUNC_5 (0, 0, VAR_15);
  VAR_23[VAR_3] = FUNC_6 (0, 0, VAR_15);
  VAR_23[VAR_0] = FUNC_3 (0, 0, VAR_15);
  VAR_23[VAR_1] = FUNC_4 (0, 0, VAR_15);

  VAR_24 = FUNC_12 (VAR_23, (unsigned char *) ((void*)0), 0);

  VAR_23[VAR_4 + VAR_8] = FUNC_8 (VAR_24);
  VAR_23[VAR_4 + VAR_9] = FUNC_9 (VAR_24);
  VAR_23[VAR_4 + VAR_10] = FUNC_10 (VAR_24);

  if (VAR_16 > 0)
    {
      VAR_23[VAR_4 + VAR_11] = '\0';


      FUNC_17 ("Writing ack %d \"%s\"\n", VAR_15,
    VAR_23 + 1);
    }

  if (FUNC_19 (VAR_14, VAR_23, VAR_4 + VAR_11) != 0)
    {
      if (VAR_18)
 FUNC_13 ("write to target failed: %s", FUNC_18 (VAR_12));
      else
 return -1;
    }

  return VAR_22;
}

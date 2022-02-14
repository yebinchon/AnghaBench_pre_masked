
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (unsigned char*,unsigned char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (unsigned char*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (unsigned char*,char*) ;
 int FUNC_9 (unsigned char*) ;
 int FUNC_10 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_11 (unsigned char *VAR_8, int VAR_9)
{
  int VAR_10, VAR_11, VAR_12;
  int VAR_13;
  int VAR_14;
  int VAR_15, VAR_16, VAR_17, VAR_18;
  unsigned char VAR_19[3];
  unsigned char VAR_20[500];

  FUNC_8 (VAR_8, "timeout");

  if (VAR_9)
    {
      VAR_14 = VAR_7 > 0 ? VAR_7 : -1;
    }

  else
    VAR_14 = VAR_6;



  for (VAR_13 = 1; VAR_13 <= 3; VAR_13++)
    {
      do
 {
   VAR_10 = FUNC_7 (VAR_14);

   if (VAR_10 == VAR_1)
     {
       if (VAR_9)
  {
    FUNC_10 ();
    FUNC_1 ("Watchdog has expired.  Target detached.\n");
  }
       if (VAR_5)
  FUNC_3 ("Timed out.\n", VAR_3);
       goto retry;
     }
 }
      while (VAR_10 != '$' && VAR_10 != '{');




      if (VAR_10 == '{')
 {

   VAR_11 = FUNC_7 (VAR_14);
   VAR_12 = FUNC_7 (VAR_14);
   if (VAR_5)
     FUNC_2 (VAR_3, "Trigraph %c%c%c received\n",
    VAR_10, VAR_11, VAR_12);
   if (VAR_12 == '+')
     {
       VAR_4 = 1;
       return 0;
     }
   continue;
 }

      VAR_15 = FUNC_6 (VAR_20);

      if (VAR_15 == 1)
 {
   FUNC_4 (VAR_20, VAR_19, 4);

   FUNC_4 (VAR_20 + 4, VAR_8, FUNC_9 (VAR_20) - 4);

   VAR_17 = VAR_19[2];

   VAR_18 = 0;
   VAR_18 = FUNC_0 (VAR_18, VAR_8, VAR_17);
   VAR_18 = FUNC_0 (VAR_18, VAR_19 + 1, 2);

   if (VAR_18 != VAR_19[0])
     FUNC_2 (VAR_2,
       "Checksum mismatch: computed %d, received %d\n",
    VAR_18, VAR_19[0]);

   if (VAR_19[2] == 0xff)
     FUNC_2 (VAR_2, "Requesting resend...\n");

   if (VAR_5)
     {
       FUNC_2 (VAR_3,
    "... (Got checksum %d, id %d, length %d)\n",
      VAR_19[0], VAR_19[1], VAR_19[2]);
       FUNC_2 (VAR_3, "Message received: \"");
       for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16)
  {
    FUNC_2 (VAR_3, "%02x", (unsigned char) VAR_8[VAR_16]);
  }
       FUNC_2 (VAR_3, "\"\n");
     }


   return VAR_17;
 }


    retry:

      ;
    }



  FUNC_5 ("Ignoring packet error, continuing...\n");
  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote_state {long remote_packet_size; } ;



 char* FUNC_0 (long) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,int,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 struct remote_state* FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char) ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (char*,long) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_11 (int ,char*,int) ;
 void* FUNC_12 (unsigned char) ;

__attribute__((used)) static int
FUNC_13 (char *VAR_5, int VAR_6)
{
  struct remote_state *VAR_7 = FUNC_5 ();
  int VAR_8;
  unsigned char VAR_9 = 0;
  char *VAR_10 = FUNC_0 (VAR_6 + 6);
  long VAR_11 = (VAR_7->remote_packet_size);
  char *VAR_12 = FUNC_0 (VAR_11);

  int VAR_13;
  int VAR_14 = 0;
  char *VAR_15;




  VAR_15 = VAR_10;
  *VAR_15++ = '$';

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
    {
      VAR_9 += VAR_5[VAR_8];
      *VAR_15++ = VAR_5[VAR_8];
    }
  *VAR_15++ = '#';
  *VAR_15++ = FUNC_12 ((VAR_9 >> 4) & 0xf);
  *VAR_15++ = FUNC_12 (VAR_9 & 0xf);



  while (1)
    {
      int VAR_16 = 0;

      if (VAR_2)
 {
   *VAR_15 = '\0';
   FUNC_1 (VAR_0, "Sending packet: ");
   FUNC_3 (VAR_10, VAR_15 - VAR_10, 0, VAR_0);
   FUNC_1 (VAR_0, "...");
   FUNC_4 (VAR_0);
 }
      if (FUNC_11 (VAR_3, VAR_10, VAR_15 - VAR_10))
 FUNC_7 ("putpkt: write failed");


      while (1)
 {
   VAR_13 = FUNC_10 (VAR_4);

   if (VAR_2)
     {
       switch (VAR_13)
  {
  case '+':
  case '-':
  case 128:
  case '$':
    if (VAR_16)
      {
        FUNC_8 ('\n');
        VAR_16 = 0;
      }
  }
     }

   switch (VAR_13)
     {
     case '+':
       if (VAR_2)
  FUNC_1 (VAR_0, "Ack\n");
       return 1;
     case '-':
       if (VAR_2)
  FUNC_1 (VAR_0, "Nak\n");
     case 128:
       VAR_14++;
       if (VAR_14 > 3)
  return 0;
       break;
     case '$':
       {
         if (VAR_2)
    FUNC_1 (VAR_0, "Packet instead of Ack, ignoring it\n");


  FUNC_9 (VAR_12, VAR_11);
  continue;
       }
     default:
       if (VAR_2)
  {
    if (!VAR_16)
      {
        VAR_16 = 1;
        FUNC_1 (VAR_0, "putpkt: Junk: ");
      }
    FUNC_2 (VAR_13 & 0177, VAR_0);
  }
       continue;
     }
   break;
 }
    }
}

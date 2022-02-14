
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 unsigned char FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,int) ;

int
FUNC_5 (char *VAR_3)
{
  char *VAR_4;
  unsigned char VAR_5, VAR_6, VAR_7;
  int VAR_8;

  while (1)
    {
      VAR_5 = 0;

      while (1)
 {
   VAR_8 = FUNC_3 ();
   if (VAR_8 == '$')
     break;
   if (VAR_0)
     {
       FUNC_1 (VAR_2, "[getpkt: discarding char '%c']\n", VAR_8);
       FUNC_0 (VAR_2);
     }

   if (VAR_8 < 0)
     return -1;
 }

      VAR_4 = VAR_3;
      while (1)
 {
   VAR_8 = FUNC_3 ();
   if (VAR_8 < 0)
     return -1;
   if (VAR_8 == '#')
     break;
   *VAR_4++ = VAR_8;
   VAR_5 += VAR_8;
 }
      *VAR_4 = 0;

      VAR_6 = FUNC_2 (FUNC_3 ());
      VAR_7 = FUNC_2 (FUNC_3 ());

      if (VAR_5 == (VAR_6 << 4) + VAR_7)
 break;

      FUNC_1 (VAR_2, "Bad checksum, sentsum=0x%x, csum=0x%x, buf=%s\n",
        (VAR_6 << 4) + VAR_7, VAR_5, VAR_3);
      FUNC_4 (VAR_1, "-", 1);
    }

  if (VAR_0)
    {
      FUNC_1 (VAR_2, "getpkt (\"%s\");  [sending ack] \n", VAR_3);
      FUNC_0 (VAR_2);
    }

  FUNC_4 (VAR_1, "+", 1);

  if (VAR_0)
    {
      FUNC_1 (VAR_2, "[sent ack]\n");
      FUNC_0 (VAR_2);
    }

  return VAR_4 - VAR_3;
}

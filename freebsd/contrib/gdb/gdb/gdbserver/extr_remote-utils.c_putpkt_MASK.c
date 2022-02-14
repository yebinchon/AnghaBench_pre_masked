
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* send_signal ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 TYPE_1__* VAR_5 ;
 void* FUNC_8 (unsigned char) ;
 int FUNC_9 (int ,char*,int) ;

int
FUNC_10 (char *VAR_6)
{
  int VAR_7;
  unsigned char VAR_8 = 0;
  char *VAR_9;
  char VAR_10[1];
  int VAR_11 = FUNC_6 (VAR_6);
  char *VAR_12;

  VAR_9 = FUNC_3 (VAR_0);




  VAR_12 = VAR_9;
  *VAR_12++ = '$';

  for (VAR_7 = 0; VAR_7 < VAR_11; VAR_7++)
    {
      VAR_8 += VAR_6[VAR_7];
      *VAR_12++ = VAR_6[VAR_7];
    }
  *VAR_12++ = '#';
  *VAR_12++ = FUNC_8 ((VAR_8 >> 4) & 0xf);
  *VAR_12++ = FUNC_8 (VAR_8 & 0xf);

  *VAR_12 = '\0';



  do
    {
      int VAR_13;

      if (FUNC_9 (VAR_3, VAR_9, VAR_12 - VAR_9) != VAR_12 - VAR_9)
 {
   FUNC_4 ("putpkt(write)");
   return -1;
 }

      if (VAR_2)
 {
   FUNC_1 (VAR_4, "putpkt (\"%s\"); [looking for ack]\n", VAR_9);
   FUNC_0 (VAR_4);
 }
      VAR_13 = FUNC_5 (VAR_3, VAR_10, 1);
      if (VAR_2)
 {
   FUNC_1 (VAR_4, "[received '%c' (0x%x)]\n", VAR_10[0], VAR_10[0]);
   FUNC_0 (VAR_4);
 }

      if (VAR_13 <= 0)
 {
   if (VAR_13 == 0)
     FUNC_1 (VAR_4, "putpkt(read): Got EOF\n");
   else
     FUNC_4 ("putpkt(read)");

   FUNC_2 (VAR_9);
   return -1;
 }


      if (VAR_10[0] == '\003')
 (*VAR_5->send_signal) (VAR_1);
    }
  while (VAR_10[0] != '+');

  FUNC_2 (VAR_9);
  return 1;
}

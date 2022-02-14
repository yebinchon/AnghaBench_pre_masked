
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,int ,unsigned char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int) ;

void
FUNC_7(int VAR_3, unsigned char *VAR_4, int VAR_5)
{
 static int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 unsigned char VAR_10;
 int VAR_11[VAR_1], VAR_12[VAR_1];
 int VAR_13, VAR_14;

again:
 FUNC_6("valid DOF #%d\n", VAR_7++);





 for (VAR_8 = 0; VAR_8 < VAR_5 * 8; VAR_8++) {
  VAR_10 = VAR_4[VAR_8 / 8];
  VAR_4[VAR_8 / 8] ^= (1 << (VAR_8 % 8));

  if ((VAR_8 % 100) == 0)
   FUNC_6("%d\n", VAR_8);

  if ((VAR_14 = FUNC_3(VAR_3, VAR_0, VAR_4)) == -1) {



   VAR_4[VAR_8 / 8] = VAR_10;
   continue;
  }







  VAR_6 += VAR_14;

  if (VAR_6 < 10000) {
   VAR_4[VAR_8 / 8] = VAR_10;
   continue;
  }

  FUNC_6("enabled %d probes; resetting device.\n", VAR_6);
  FUNC_0(VAR_3);

  VAR_13 = FUNC_5("/devices/pseudo/dtrace@0:dtrace", VAR_2);

  if (VAR_13 == -1)
   FUNC_2("couldn't open DTrace pseudo device");

  if (VAR_13 != VAR_3) {
   FUNC_1(VAR_13, VAR_3);
   FUNC_0(VAR_13);
  }

  VAR_6 = 0;
  VAR_4[VAR_8 / 8] = VAR_10;
 }

 for (;;) {





  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {



   VAR_8 = FUNC_4() % (VAR_5 * 8);

   VAR_11[VAR_9] = VAR_4[VAR_8 / 8];
   VAR_12[VAR_9] = VAR_8 / 8;
   VAR_4[VAR_8 / 8] ^= (1 << (VAR_8 % 8));
  }




  if ((VAR_14 = FUNC_3(VAR_3, VAR_0, VAR_4)) > 0) {



   VAR_6 += VAR_14;
   goto again;
  }






  for (VAR_9 = VAR_1 - 1; VAR_9 >= 0; VAR_9--)
   VAR_4[VAR_12[VAR_9]] = VAR_11[VAR_9];
 }
}

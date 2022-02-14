
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int uintmax_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static void
FUNC_7(void *VAR_8)
{

 if (VAR_2 & VAR_1)
  VAR_3++;

 FUNC_2("CPU model: %s\n", VAR_4);

 FUNC_2("real memory  = %ju (%juK bytes)\n", FUNC_3((uintmax_t)VAR_7),
     FUNC_3((uintmax_t)VAR_7) / 1024);




 if (VAR_3) {
  int VAR_9;

  FUNC_2("Physical memory chunk(s):\n");
  for (VAR_9 = 0; VAR_6[VAR_9 + 1] != 0; VAR_9 += 2) {
   vm_paddr_t VAR_10 = VAR_6[VAR_9 + 1] - VAR_6[VAR_9];

   FUNC_2("0x%08jx - 0x%08jx, %ju bytes (%ju pages)\n",
       (uintmax_t)VAR_6[VAR_9],
       (uintmax_t)VAR_6[VAR_9 + 1] - 1,
       (uintmax_t)VAR_10,
       (uintmax_t)VAR_10 / VAR_0);
  }
 }

 FUNC_5(&VAR_5);

 FUNC_2("avail memory = %ju (%juMB)\n",
     FUNC_3((uintmax_t)FUNC_4()),
     FUNC_3((uintmax_t)FUNC_4()) / 1048576);
 FUNC_1();




 FUNC_0();
 FUNC_6();
}

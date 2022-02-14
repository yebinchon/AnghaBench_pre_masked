
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int uintmax_t ;
struct pcpu {int dummy; } ;
struct msgbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct msgbuf*,int) ;
 struct msgbuf* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct pcpu* VAR_12 ;
 scalar_t__* VAR_13 ;
 scalar_t__* VAR_14 ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int VAR_15 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 struct pcpu* FUNC_11 (int) ;
 int VAR_16 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 int FUNC_14 (int *,char*) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;

void
FUNC_16(void)
{
 int VAR_19;


again:
 for (VAR_19 = 0; VAR_13[VAR_19 + 1] != 0; VAR_19 += 2) {



  VAR_13[VAR_19] = FUNC_12(VAR_13[VAR_19]);
  VAR_13[VAR_19 + 1] = FUNC_15(VAR_13[VAR_19 + 1]);

  if (VAR_19 < 2)
   continue;
  if (VAR_13[VAR_19 - 2] > VAR_13[VAR_19]) {
   vm_paddr_t VAR_20[2];

   VAR_20[0] = VAR_13[VAR_19 + 0];
   VAR_20[1] = VAR_13[VAR_19 + 1];

   VAR_13[VAR_19 + 0] = VAR_13[VAR_19 - 2];
   VAR_13[VAR_19 + 1] = VAR_13[VAR_19 - 1];

   VAR_13[VAR_19 - 2] = VAR_20[0];
   VAR_13[VAR_19 - 1] = VAR_20[1];
   goto again;
  }
 }






 if (!FUNC_0(VAR_13[VAR_19 - 1] - 1))
  VAR_11 = 1;




 for (VAR_19 = 0; VAR_13[VAR_19 + 1] != 0; VAR_19 += 2) {
  VAR_14[VAR_19] = VAR_13[VAR_19];
  VAR_14[VAR_19 + 1] = VAR_13[VAR_19 + 1];
 }

 VAR_1 = FUNC_2(VAR_13[VAR_19 - 1]);

 if (VAR_7) {
  FUNC_10("Physical memory chunk(s):\n");
  for (VAR_19 = 0; VAR_13[VAR_19 + 1] != 0; VAR_19 += 2) {
   vm_paddr_t VAR_21;

   VAR_21 = VAR_13[VAR_19 + 1] - VAR_13[VAR_19];
   FUNC_10("%#08jx - %#08jx, %ju bytes (%ju pages)\n",
       (uintmax_t) VAR_13[VAR_19],
       (uintmax_t) VAR_13[VAR_19 + 1] - 1,
       (uintmax_t) VAR_21, (uintmax_t) VAR_21 / VAR_3);
  }
  FUNC_10("Maxmem is 0x%0jx\n", FUNC_11((uintmax_t)VAR_1));
 }



 VAR_9 = (struct msgbuf *)FUNC_9(VAR_10);
 FUNC_6(VAR_9, VAR_10);




 VAR_8 = FUNC_9(VAR_0 << VAR_2);

 VAR_17 = VAR_6;
 VAR_18 = VAR_5;
 FUNC_8();
 if (VAR_11)
  FUNC_7();
 VAR_15 = VAR_4;
 FUNC_4(0);
 FUNC_5(0);




 FUNC_14(&VAR_16, "pmap pv global");
}

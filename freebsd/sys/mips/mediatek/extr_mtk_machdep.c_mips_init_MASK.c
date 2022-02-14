
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mem_region {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__* VAR_7 ;
 scalar_t__ FUNC_5 (struct mem_region*,int*,int*) ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 () ;
 char* FUNC_10 (char*) ;
 int VAR_8 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_15 () ;
 int FUNC_16 (char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_17 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_18(void)
{
 struct mem_region VAR_12[VAR_0];
 uint64_t VAR_13;
 int VAR_14, VAR_15, VAR_16;
 char *VAR_17;

 FUNC_16("entry: mips_init()\n");

 VAR_6 = 1;

 for (VAR_14 = 0; VAR_14 < 10; VAR_14++)
  VAR_9[VAR_14] = 0;

 VAR_7[0] = VAR_9[0] = FUNC_2(VAR_8);





 VAR_11 = FUNC_3(448 * 1024 * 1024);

 if (FUNC_5(VAR_12, &VAR_16, &VAR_13) == 0) {
  VAR_10 = FUNC_3(VAR_13);

  FUNC_16("RAM size: %ldMB (from FDT)\n",
      FUNC_4(VAR_10) / (1024 * 1024));

  FUNC_0((VAR_9[0] >= VAR_12[0].mr_start) && (VAR_9[0] < (VAR_12[0].mr_start + VAR_12[0].mr_size)),

   ("First region is not within FDT memory range"));


  VAR_9[1] = (VAR_12[0].mr_start +
      FUNC_1(VAR_12[0].mr_size, FUNC_4(VAR_11)));
  VAR_7[1] = VAR_9[1];


  for (VAR_14 = 1, VAR_15 = 2; VAR_14 < VAR_16; VAR_14++, VAR_15+=2) {
   VAR_9[VAR_15] = VAR_12[VAR_14].mr_start;
   VAR_9[VAR_15+1] = (VAR_12[VAR_14].mr_start + VAR_12[VAR_14].mr_size);
   VAR_7[VAR_15] = VAR_9[VAR_15];
   VAR_7[VAR_15+1] = VAR_9[VAR_15+1];
  }
 } else {
  if ((VAR_17 = FUNC_10("memsize")) != ((void*)0)) {
   VAR_10 = FUNC_3(FUNC_17(VAR_17, ((void*)0), 0) << 20);
   FUNC_16("RAM size: %ldMB (from memsize)\n",
       FUNC_4(VAR_10) / (1024 * 1024));
  } else {
   VAR_10 = FUNC_3(32 * 1024 * 1024);
   FUNC_16("RAM size: %ldMB (assumed)\n",
       FUNC_4(VAR_10) / (1024 * 1024));
  }

  if (FUNC_13() == VAR_3) {

   VAR_7[1] = VAR_9[1] = FUNC_4(VAR_10)
       + 0x08000000;
  } else if (FUNC_4(VAR_10) < (448 * 1024 * 1024)) {




   VAR_7[1] = VAR_9[1] = FUNC_4(VAR_10);
  } else if (FUNC_13() == VAR_2) {




   VAR_9[1] = 448 * 1024 * 1024;
   VAR_9[2] = 0x20000000;
   VAR_9[3] = VAR_9[2] + FUNC_4(VAR_10) -
       VAR_9[1];
   VAR_7[1] = VAR_9[1] - VAR_9[0];
   VAR_7[2] = VAR_9[2];
   VAR_7[3] = VAR_9[3] - VAR_9[2];
  } else {





   FUNC_16("Unknown chip, assuming 32MB RAM\n");
   VAR_10 = FUNC_3(32 * 1024 * 1024);
   VAR_7[1] = VAR_9[1] = FUNC_4(VAR_10);
  }
 }

 if (VAR_10 < VAR_11)
  VAR_11 = VAR_10;

 FUNC_6();
 FUNC_7(VAR_10);
 FUNC_11();
 FUNC_15();
 FUNC_12();
 FUNC_14();
 FUNC_9();




}

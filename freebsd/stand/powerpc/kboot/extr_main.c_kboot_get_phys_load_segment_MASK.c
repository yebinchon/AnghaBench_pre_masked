
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val_64 ;
typedef int val_32 ;
typedef unsigned long uint64_t ;
typedef int uint32_t ;
struct region_desc {unsigned long start; unsigned long end; } ;
typedef int entry ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 void* FUNC_2 (unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int,...) ;
 int FUNC_6 (int *,unsigned long*,int) ;

__attribute__((used)) static uint64_t
FUNC_7(void)
{
 int VAR_1;
 uint64_t VAR_2[2];
 static uint64_t VAR_3 = ~(0UL);
 uint64_t VAR_4;
 uint32_t VAR_5;
 struct region_desc VAR_6[32];
 int VAR_7 = 0;
 int VAR_8, VAR_9, VAR_10;
 uint64_t VAR_11, VAR_12;

 if (VAR_3 == ~(0UL)) {


  VAR_3 = 0UL;


  VAR_1 = FUNC_4("/proc/device-tree/reserved-ranges", VAR_0, 0);
  if (VAR_1 >= 0) {
   while (FUNC_5(VAR_1, &VAR_2[0], sizeof(VAR_2)) == sizeof(VAR_2)) {
    VAR_6[VAR_7].start = FUNC_2(VAR_2[0]);
    VAR_6[VAR_7].end =
        FUNC_2(VAR_2[1]) + VAR_6[VAR_7].start - 1;
    VAR_7++;
   }
   FUNC_3(VAR_1);
  }

  VAR_1 = FUNC_4("/proc/device-tree/chosen/linux,kernel-end", VAR_0, 0);
  if (VAR_1 >= 0) {
   VAR_8 = FUNC_5(VAR_1, &VAR_4, sizeof(VAR_4));

   if (VAR_8 == sizeof(uint64_t)) {
    VAR_6[VAR_7].start = 0;
    VAR_6[VAR_7].end = FUNC_2(VAR_4) - 1;
   } else {
    FUNC_6(&VAR_5, &VAR_4, sizeof(VAR_5));
    VAR_6[VAR_7].start = 0;
    VAR_6[VAR_7].end = FUNC_1(VAR_5) - 1;
   }
   VAR_7++;

   FUNC_3(VAR_1);
  }

  VAR_1 = FUNC_4("/proc/device-tree/memory@0/reg", VAR_0, 0);
  if (VAR_1 < 0)
   VAR_1 = FUNC_4("/proc/device-tree/memory/reg", VAR_0, 0);
  if (VAR_1 >= 0) {
   VAR_8 = FUNC_5(VAR_1, &VAR_2, sizeof(VAR_2));


   VAR_2[0] = FUNC_2(VAR_2[0]);
   VAR_2[1] = FUNC_2(VAR_2[1]);


   if (VAR_2[0] != 0) {
    VAR_6[VAR_7].start = 0;
    VAR_6[VAR_7].end = VAR_2[0] - 1;
    VAR_7++;
   }

   if (VAR_2[1] != 0xffffffffffffffffUL) {
    VAR_6[VAR_7].start = VAR_2[0] + VAR_2[1];
    VAR_6[VAR_7].end = 0xffffffffffffffffUL;
    VAR_7++;
   }

   FUNC_3(VAR_1);
  }


  for (VAR_9 = VAR_7 - 1; VAR_9 > 0; VAR_9--) {
   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    if (VAR_6[VAR_10].start > VAR_6[VAR_10 + 1].start) {
     struct region_desc VAR_13;
     VAR_13 = VAR_6[VAR_10];
     VAR_6[VAR_10] = VAR_6[VAR_10 + 1];
     VAR_6[VAR_10 + 1] = VAR_13;
    }
   }
  }


  for (VAR_9 = 0; VAR_9 < VAR_7 - 1; ) {

   if ((VAR_6[VAR_9 + 1].start >= VAR_6[VAR_9].start) &&
       ((VAR_6[VAR_9 + 1].start - 1) <= VAR_6[VAR_9].end)) {

    VAR_6[VAR_9].end =
        FUNC_0(VAR_6[VAR_9].end, VAR_6[VAR_9 + VAR_9].end);

    for (VAR_10 = VAR_9 + 1; VAR_10 < VAR_7 - 1; VAR_10++)
     VAR_6[VAR_10] = VAR_6[VAR_10 + 1];
    VAR_7--;
   } else
    VAR_9++;
  }


  if (VAR_7 > 0) {
   VAR_11 = 0;
   VAR_12 = VAR_6[0].start;
   for (VAR_9 = 0; VAR_9 < VAR_7 - 1; VAR_9++) {
    if ((VAR_11 >= VAR_6[VAR_9].start) &&
        (VAR_11 <= VAR_6[VAR_9].end)) {
     VAR_11 = VAR_6[VAR_9].end + 1;
     VAR_12 = VAR_6[VAR_9 + 1].start;
    } else
     break;
   }

   if (VAR_11 != VAR_12) {
    uint64_t VAR_14 = 64UL*1024UL*1024UL;


    VAR_11 = (VAR_11 + VAR_14 - 1UL) & ~(VAR_14 - 1UL);
    VAR_12 = ((VAR_12 + 1UL) & ~(VAR_14 - 1UL)) - 1UL;

    if (VAR_11 < VAR_12)
     VAR_3 = VAR_11;
   }
  }
 }

 return (VAR_3);
}

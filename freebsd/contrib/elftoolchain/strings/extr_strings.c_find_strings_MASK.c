
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
typedef int uint8_t ;
typedef scalar_t__ off_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (long) ;



 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int *,long*) ;
 int FUNC_6 (char*,int ,int) ;
 int VAR_5 ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (char) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 char* FUNC_9 (int ) ;

int
FUNC_10(const char *VAR_10, FILE *VAR_11, off_t VAR_12, off_t VAR_13)
{
 off_t VAR_14, VAR_15;
 char *VAR_16;
 long VAR_17;
 int VAR_18;

 if ((VAR_16 = (char*)FUNC_1(1, VAR_5 + 1)) == ((void*)0)) {
  FUNC_2(VAR_9, "Unable to allocate memory: %s\n",
      FUNC_9(VAR_4));
  return (1);
 }

 (void)FUNC_4(VAR_11, VAR_12, VAR_1);
 VAR_14 = VAR_12;
 VAR_15 = 0;
 for (;;) {
  if ((VAR_12 + VAR_13) && (VAR_14 >= VAR_12 + VAR_13))
   break;
  VAR_15 = VAR_14;
  FUNC_6(VAR_16, 0, VAR_5 + 1);
  for(VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   if (FUNC_5(VAR_11, &VAR_17) < 0)
    goto _exit1;
   if (FUNC_0(VAR_17)) {
    VAR_16[VAR_18] = VAR_17;
    VAR_16[VAR_18 + 1] = 0;
    VAR_14 += VAR_3;
   } else {
    if (VAR_2 == VAR_0 &&
        (uint8_t)VAR_17 > 127) {
     VAR_16[VAR_18] = VAR_17;
     VAR_16[VAR_18 + 1] = 0;
     VAR_14 += VAR_3;
     continue;
    }
    VAR_14 += VAR_3;
    break;
   }
  }

  if (VAR_18 >= VAR_5 && ((VAR_14 <= VAR_12 + VAR_13) ||
      !(VAR_12 + VAR_13))) {
   if (VAR_7)
    FUNC_7("%s: ", VAR_10);
   if (VAR_8) {
    switch (VAR_6) {
    case 130:
     FUNC_7("%7ju ", (uintmax_t)VAR_15);
     break;
    case 129:
     FUNC_7("%7jx ", (uintmax_t)VAR_15);
     break;
    case 128:
     FUNC_7("%7jo ", (uintmax_t)VAR_15);
     break;
    }
   }
   FUNC_7("%s", VAR_16);

   for (;;) {
    if ((VAR_12 + VAR_13) &&
        (VAR_14 >= VAR_12 + VAR_13))
     break;
    if (FUNC_5(VAR_11, &VAR_17) < 0)
     break;
    VAR_14 += VAR_3;
    if (VAR_2 == VAR_0 &&
        (uint8_t)VAR_17 > 127) {
     FUNC_8(VAR_17);
     continue;
    }
    if (!FUNC_0(VAR_17))
     break;
    FUNC_8(VAR_17);
   }
   FUNC_8('\n');
  }
 }
_exit1:
 FUNC_3(VAR_16);
 return (0);
}

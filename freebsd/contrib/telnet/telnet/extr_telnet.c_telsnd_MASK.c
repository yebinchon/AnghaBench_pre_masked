
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* consume; } ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned char) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__ VAR_16 ;

__attribute__((used)) static int
FUNC_12(void)
{
    int VAR_17;
    int VAR_18;
    int VAR_19 = 0;
    unsigned char *VAR_20;

    VAR_17 = 0;
    VAR_18 = 0;
    while (FUNC_3() > 2) {
 int VAR_21;
 int VAR_22;

 if (VAR_17 == 0) {
     if (VAR_18) {
  FUNC_7(&VAR_16, VAR_18);
  VAR_19 = 1;
  VAR_18 = 0;
     }
     VAR_20 = VAR_16.consume;
     VAR_17 = FUNC_8(&VAR_16);
     if (VAR_17 == 0) {
  break;
     }
 }
 VAR_22 = *VAR_20++ & 0xff, VAR_21 = FUNC_11(VAR_22), VAR_17--; VAR_18++;
 if (VAR_13 != VAR_2) {
  if (VAR_3) {
   VAR_3 = 0;
   if (VAR_21 == VAR_13) {
    VAR_12 = 1;
    continue;
   }
  } else if (VAR_12) {
   VAR_12 = 0;
   if (VAR_21 == '.' || VAR_22 == VAR_14) {
    VAR_3 = 1;
    FUNC_5(0, "close\n", 6);
    continue;
   }
   if (VAR_21 == VAR_15) {
    VAR_3 = 1;
    FUNC_5(0, "z\n", 2);
    continue;
   }
   if (VAR_21 == VAR_8) {
    FUNC_5(0, VAR_20, VAR_17);
    VAR_3 = 1;
    VAR_18 += VAR_17;
    VAR_17 = 0;
    VAR_9 = 1;
    break;
   }
   if (VAR_21 != VAR_13) {
    ++VAR_17;
    --VAR_20;
    --VAR_18;
    VAR_22 = VAR_21 = VAR_13;
   }
  }
  if ((VAR_21 == '\n') || (VAR_21 == '\r'))
   VAR_3 = 1;
 } else if (VAR_8 != VAR_2 && VAR_21 == VAR_8) {



     if (VAR_17 && FUNC_11(*VAR_20) == VAR_8) {
  VAR_20++;
  VAR_17--;
  VAR_18++;
  VAR_3 = 0;
     } else {
  FUNC_5(0, (char *)VAR_20, VAR_17);
  VAR_3 = 1;
  VAR_18 += VAR_17;
  VAR_17 = 0;
  VAR_9 = 1;
  break;
     }
 } else
     VAR_3 = 0;
 if (FUNC_0(VAR_10)) {
     if (FUNC_4(VAR_21) == 0) {
  VAR_3 = 1;
  break;
     }
 }
 if (FUNC_6(VAR_1)) {
     switch (VAR_22) {
     case '\n':





  if (FUNC_0(VAR_10)) {
      FUNC_2('\r');
  }
  FUNC_2('\n');
  VAR_3 = VAR_9 = 1;
  break;
     case '\r':
  if (!VAR_4) {
      FUNC_1('\r', '\0');
  } else {
      FUNC_1('\r', '\n');
  }
  VAR_3 = VAR_9 = 1;
  break;
     case 128:
  FUNC_1(128, 128);
  break;
     default:
  FUNC_2(VAR_22);
  break;
     }
 } else if (VAR_22 == 128) {
     FUNC_1(128, 128);
 } else {
     FUNC_2(VAR_22);
 }
    }
    if (VAR_18)
 FUNC_7(&VAR_16, VAR_18);
    return VAR_19||VAR_18;
}

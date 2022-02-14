
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef struct bwi_rf_lo {scalar_t__ ctrl_hi; scalar_t__ ctrl_lo; } const bwi_rf_lo ;
struct bwi_mac {int dummy; } ;
typedef int lo_min ;
typedef int lo_base ;


 int FUNC_0 (int,char*) ;
 struct bwi_rf_lo const FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bwi_mac*,struct bwi_rf_lo const*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bwi_rf_lo const*,struct bwi_rf_lo const*,int) ;
 scalar_t__ FUNC_5 (struct bwi_mac*,int ) ;

__attribute__((used)) static void
FUNC_6(struct bwi_mac *VAR_2, const struct bwi_rf_lo *VAR_3,
 struct bwi_rf_lo *VAR_4, uint8_t VAR_5)
{



 static const struct bwi_rf_lo VAR_6[8] = {
  { .ctrl_hi = 1, .ctrl_lo = 1 },
  { .ctrl_hi = 1, .ctrl_lo = 0 },
  { .ctrl_hi = 1, .ctrl_lo = -1 },
  { .ctrl_hi = 0, .ctrl_lo = -1 },
  { .ctrl_hi = -1, .ctrl_lo = -1 },
  { .ctrl_hi = -1, .ctrl_lo = 0 },
  { .ctrl_hi = -1, .ctrl_lo = 1 },
  { .ctrl_hi = 0, .ctrl_lo = 1 }
 };


 struct bwi_rf_lo VAR_7;
 uint32_t VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_4(VAR_3, &VAR_7, sizeof(VAR_7));
 FUNC_2(VAR_2, &VAR_7);
 VAR_8 = FUNC_5(VAR_2, VAR_5);

 VAR_10 = 12;
 VAR_11 = 0;
 do {
  struct bwi_rf_lo VAR_12;
  int VAR_13, VAR_14;

  VAR_9 = 0;
  if (VAR_11 == 0) {
   VAR_13 = 1;
   VAR_14 = 8;
  } else if (VAR_11 % 2 == 0) {
   VAR_13 = VAR_11 - 1;
   VAR_14 = VAR_11 + 1;
  } else {
   VAR_13 = VAR_11 - 2;
   VAR_14 = VAR_11 + 2;
  }

  if (VAR_13 < 1)
   VAR_13 += 8;
  FUNC_0(VAR_13 <= 8 && VAR_13 >= 1, ("i %d", VAR_13));

  if (VAR_14 > 8)
   VAR_14 -= 8;
  FUNC_0(VAR_14 <= 8 && VAR_14 >= 1,
      ("fin %d", VAR_14));

  FUNC_4(&VAR_7, &VAR_12, sizeof(VAR_12));
  for (;;) {
   struct bwi_rf_lo VAR_15;

   VAR_15.ctrl_hi = VAR_12.ctrl_hi +
    VAR_6[VAR_13 - 1].ctrl_hi;
   VAR_15.ctrl_lo = VAR_12.ctrl_lo +
    VAR_6[VAR_13 - 1].ctrl_lo;

   if (FUNC_3(VAR_15.ctrl_lo) < 9 && FUNC_3(VAR_15.ctrl_hi) < 9) {
    uint32_t VAR_16;

    FUNC_2(VAR_2, &VAR_15);
    VAR_16 = FUNC_5(VAR_2, VAR_5);
    if (VAR_16 < VAR_8) {
     VAR_8 = VAR_16;
     VAR_11 = VAR_13;
     VAR_9 = 1;
     FUNC_4(&VAR_15, &VAR_7, sizeof(VAR_7));
    }
   }
   if (VAR_13 == VAR_14)
    break;
   if (VAR_13 == 8)
    VAR_13 = 1;
   else
    ++VAR_13;
  }
 } while (VAR_10-- && VAR_9);

 FUNC_4(&VAR_7, VAR_4, sizeof(*VAR_4));



}

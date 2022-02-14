
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct bxe_softc {int dummy; } ;
struct TYPE_8__ {scalar_t__ l; scalar_t__ add; scalar_t__ ubound; } ;
struct TYPE_7__ {int l; int add; int ubound; } ;
struct TYPE_6__ {scalar_t__ l; scalar_t__ add; scalar_t__ ubound; } ;
struct TYPE_5__ {int l; int add; int ubound; } ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 scalar_t__ FUNC_3 (struct bxe_softc*) ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int FUNC_6 (struct bxe_softc*,scalar_t__) ;
 int FUNC_7 (struct bxe_softc*,scalar_t__,int) ;
 TYPE_4__* VAR_27 ;
 TYPE_3__** VAR_28 ;
 TYPE_2__* VAR_29 ;
 TYPE_1__** VAR_30 ;

__attribute__((used)) static void FUNC_8(struct bxe_softc *VAR_31, int VAR_32,
          int VAR_33)
{
 uint32_t VAR_34, VAR_35;

 if (VAR_32 > VAR_0) {
  FUNC_5(VAR_31, "read order of %d  order adjusted to %d\n",
      VAR_32, VAR_0);
  VAR_32 = VAR_0;
 }
 if (VAR_33 > VAR_1) {
  FUNC_5(VAR_31, "write order of %d  order adjusted to %d\n",
      VAR_33, VAR_1);
  VAR_33 = VAR_1;
 }
 if (FUNC_4(VAR_31)) {
  FUNC_5(VAR_31, "write order adjusted to 1 for FPGA\n");
  VAR_33 = 0;
 }
 FUNC_5(VAR_31, "read order %d  write order %d\n", VAR_32, VAR_33);

 for (VAR_35 = 0; VAR_35 < VAR_2-1; VAR_35++) {
  FUNC_7(VAR_31, VAR_27[VAR_35].l, VAR_28[VAR_35][VAR_32].l);
  FUNC_7(VAR_31, VAR_27[VAR_35].add,
         VAR_28[VAR_35][VAR_32].add);
  FUNC_7(VAR_31, VAR_27[VAR_35].ubound,
         VAR_28[VAR_35][VAR_32].ubound);
 }

 for (VAR_35 = 0; VAR_35 < VAR_3-1; VAR_35++) {
  if ((VAR_29[VAR_35].l == VAR_8) ||
      (VAR_29[VAR_35].l == VAR_9)) {

   FUNC_7(VAR_31, VAR_29[VAR_35].l,
          VAR_30[VAR_35][VAR_33].l);

   FUNC_7(VAR_31, VAR_29[VAR_35].add,
          VAR_30[VAR_35][VAR_33].add);

   FUNC_7(VAR_31, VAR_29[VAR_35].ubound,
          VAR_30[VAR_35][VAR_33].ubound);
  } else {

   VAR_34 = FUNC_6(VAR_31, VAR_29[VAR_35].l);
   FUNC_7(VAR_31, VAR_29[VAR_35].l,
          VAR_34 | (VAR_30[VAR_35][VAR_33].l << 10));

   VAR_34 = FUNC_6(VAR_31, VAR_29[VAR_35].add);
   FUNC_7(VAR_31, VAR_29[VAR_35].add,
          VAR_34 | (VAR_30[VAR_35][VAR_33].add << 10));

   VAR_34 = FUNC_6(VAR_31, VAR_29[VAR_35].ubound);
   FUNC_7(VAR_31, VAR_29[VAR_35].ubound,
          VAR_34 | (VAR_30[VAR_35][VAR_33].ubound << 7));
  }
 }

 VAR_34 = VAR_30[VAR_3-1][VAR_33].add;
 VAR_34 += VAR_30[VAR_3-1][VAR_33].ubound << 10;
 VAR_34 += VAR_30[VAR_3-1][VAR_33].l << 17;
 FUNC_7(VAR_31, VAR_6, VAR_34);

 VAR_34 = VAR_28[VAR_2-1][VAR_32].add;
 VAR_34 += VAR_28[VAR_2-1][VAR_32].ubound << 10;
 VAR_34 += VAR_28[VAR_2-1][VAR_32].l << 17;
 FUNC_7(VAR_31, VAR_7, VAR_34);

 FUNC_7(VAR_31, VAR_13, VAR_33);
 FUNC_7(VAR_31, VAR_14, VAR_33);
 FUNC_7(VAR_31, VAR_11, VAR_32);
 FUNC_7(VAR_31, VAR_12, VAR_32);

 if ((FUNC_0(VAR_31) || FUNC_1(VAR_31)) && (VAR_32 == VAR_0))
  FUNC_7(VAR_31, VAR_10, 0xe00);

 if (FUNC_3(VAR_31))
  FUNC_7(VAR_31, VAR_24, (0x4 << VAR_33));
 else if (FUNC_2(VAR_31))
  FUNC_7(VAR_31, VAR_24, (0x8 << VAR_33));
 else
  FUNC_7(VAR_31, VAR_24, (0x18 << VAR_33));

 if (!FUNC_0(VAR_31)) {






  if (!FUNC_1(VAR_31)) {

   VAR_34 = VAR_33;
   FUNC_7(VAR_31, VAR_18, VAR_34);
  } else {
   VAR_34 = ((VAR_33 == 0) ? 2 : 3);
   FUNC_7(VAR_31, VAR_18, 2);
  }

  FUNC_7(VAR_31, VAR_19, VAR_34);
  FUNC_7(VAR_31, VAR_25, VAR_34);
  FUNC_7(VAR_31, VAR_16, VAR_34);
  FUNC_7(VAR_31, VAR_23, VAR_34);
  FUNC_7(VAR_31, VAR_26, VAR_34);
  FUNC_7(VAR_31, VAR_20, VAR_34);
  FUNC_7(VAR_31, VAR_22, VAR_34);
  FUNC_7(VAR_31, VAR_21, VAR_34);
  FUNC_7(VAR_31, VAR_17, VAR_34);
  FUNC_7(VAR_31, VAR_15, VAR_34);
 }



 VAR_34 = FUNC_6(VAR_31, 0x2980);
 VAR_34 &= 0xFF;
 if (VAR_34 <= 0x20)
  FUNC_7(VAR_31, VAR_5, 0x20);
}

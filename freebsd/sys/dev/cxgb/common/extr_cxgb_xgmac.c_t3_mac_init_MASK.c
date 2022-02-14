
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
struct cmac {unsigned int offset; int stats; scalar_t__ multiport; TYPE_2__* adapter; } ;
struct addr_val_pair {int member_1; scalar_t__ member_0; } ;
struct TYPE_10__ {scalar_t__ rev; } ;
struct TYPE_11__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 int FUNC_0 (struct addr_val_pair*) ;
 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ VAR_4 ;

 scalar_t__ const VAR_5 ;

 int FUNC_1 (TYPE_2__*,char*,int ) ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct cmac*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__ const) ;
 int FUNC_9 (TYPE_2__*,scalar_t__ const,int,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*,scalar_t__,int ,int,int,int) ;
 int FUNC_11 (TYPE_2__*,scalar_t__ const,int) ;
 int FUNC_12 (TYPE_2__*,struct addr_val_pair*,int ,unsigned int) ;
 int FUNC_13 (struct cmac*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (struct cmac*) ;
 int FUNC_16 (struct cmac*) ;

int FUNC_17(struct cmac *VAR_24)
{
 static struct addr_val_pair VAR_25[] = {
  { 134, 0 },
  { 146, 0 },
  { 147, 132 | 131 |
                  128 | 129 | 130 },
  { 136, 0 },
  { 137, 0 },
  { 145, 0 },
  { 144, 0 },
  { 143, 0 },
  { 142, 0 },
  { 141, 0 },
  { 140, 0 },
  { 139, 0 },
  { 138, 0 },
  { 135, 133 }
 };
 u32 VAR_26;
 adapter_t *VAR_27 = VAR_24->adapter;
 unsigned int VAR_28 = VAR_24->offset;

 FUNC_11(VAR_27, VAR_0 + VAR_28, VAR_11);
 (void) FUNC_8(VAR_27, VAR_0 + VAR_28);

 FUNC_12(VAR_27, VAR_25, FUNC_0(VAR_25), VAR_28);
 FUNC_9(VAR_27, VAR_1 + VAR_28,
    VAR_16 | VAR_8,
    FUNC_14(VAR_27) ? 0 : VAR_16);
 FUNC_9(VAR_27, VAR_5 + VAR_28, 0, VAR_20);

 if (FUNC_14(VAR_27)) {
  if (VAR_27->params.rev == 0) {
   FUNC_9(VAR_27, VAR_3 + VAR_28, 0,
      VAR_14 | VAR_19);
   if (FUNC_10(VAR_27, VAR_4 + VAR_28,
         VAR_6, 1, 5, 2)) {
    FUNC_1(VAR_27,
           "MAC %d XAUI SERDES CMU lock failed\n",
           FUNC_5(VAR_24));
    return -1;
   }
   FUNC_9(VAR_27, VAR_3 + VAR_28, 0,
      VAR_17);
  } else
   FUNC_15(VAR_24);
 }


 if (VAR_24->multiport) {
  FUNC_11(VAR_27, VAR_2 + VAR_28,
        FUNC_3(VAR_21 - 4));
  FUNC_9(VAR_27, VAR_5 + VAR_28, 0,
     VAR_9);
  FUNC_9(VAR_27, 147 + VAR_28, 0, VAR_7 |
     VAR_10);
  FUNC_9(VAR_27, VAR_5 + VAR_28,
     FUNC_4(VAR_23),
     FUNC_4(64));
  FUNC_11(VAR_27, 134 + VAR_28, VAR_18);
  FUNC_11(VAR_27, 146 + VAR_28, VAR_13);
 }

 FUNC_9(VAR_27, VAR_2 + VAR_28,
    FUNC_2(VAR_22),
    FUNC_2(VAR_21) | VAR_15);

 VAR_26 = FUNC_16(VAR_24);
 FUNC_11(VAR_27, VAR_0 + VAR_28, VAR_26);
 (void) FUNC_8(VAR_27, VAR_0 + VAR_28);
 if ((VAR_26 & VAR_12) && VAR_27->params.rev) {
  FUNC_7(1);
  FUNC_13(VAR_24);
 }

 FUNC_6(&VAR_24->stats, 0, sizeof(VAR_24->stats));
 return 0;
}

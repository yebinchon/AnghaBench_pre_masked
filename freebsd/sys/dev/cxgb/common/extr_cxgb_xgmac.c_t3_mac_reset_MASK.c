
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef unsigned int u32 ;
struct cmac {unsigned int offset; TYPE_2__* adapter; } ;
struct TYPE_8__ {scalar_t__ rev; } ;
struct TYPE_9__ {TYPE_1__ params; } ;
typedef TYPE_2__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 int VAR_20 ;
 unsigned int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cmac*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct cmac*) ;
 unsigned int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,unsigned int,unsigned int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__,int,int,int,int) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,unsigned int) ;
 int FUNC_9 (struct cmac*) ;
 unsigned int FUNC_10 (struct cmac*) ;

__attribute__((used)) static int FUNC_11(struct cmac *VAR_23, int VAR_24)
{
 u32 VAR_25, VAR_26;
 adapter_t *VAR_27 = VAR_23->adapter;
 unsigned int VAR_28 = VAR_23->offset;
 int VAR_29 = FUNC_2(VAR_23);
 unsigned int VAR_30;


 VAR_26 = FUNC_5(VAR_27, VAR_0);
 if (!VAR_29)
  FUNC_6(VAR_27, VAR_0, VAR_17, 0);
 else
  FUNC_6(VAR_27, VAR_0, VAR_18, 0);



 FUNC_6(VAR_27, VAR_0, VAR_12, 0);

 FUNC_6(VAR_27, VAR_9 + VAR_28, VAR_21, 0);


 FUNC_8(VAR_27, VAR_6 + VAR_28, VAR_15);
 (void) FUNC_5(VAR_27, VAR_6 + VAR_28);


 FUNC_8(VAR_27, VAR_1, VAR_3 + VAR_29);
 VAR_30 = FUNC_5(VAR_27, VAR_2);

 FUNC_3(10);


 FUNC_8(VAR_27, VAR_1, VAR_3 + VAR_29);
 FUNC_8(VAR_27, VAR_2, 0xc0000011);



 if (FUNC_7(VAR_27, VAR_8 + VAR_28,
       0x80000000, 1, 1000, 2) && VAR_24 < 0) {
  FUNC_0(VAR_27, "MAC %d Rx fifo drain failed\n", VAR_29);
  return -1;
 }

 if (VAR_24 >= 0) {
  u32 VAR_31 = FUNC_5(VAR_27, VAR_4 + VAR_28);





  FUNC_6(VAR_27, VAR_5 + VAR_28,
      FUNC_1(VAR_22) | VAR_20,
      VAR_24 | VAR_20);
  (void) FUNC_5(VAR_27, VAR_5 + VAR_28);
  FUNC_6(VAR_27, VAR_5 + VAR_28,
      VAR_20, 0);
  (void) FUNC_5(VAR_27, VAR_5 + VAR_28);
  FUNC_4(VAR_23);

  FUNC_8(VAR_27, VAR_4 + VAR_28, VAR_31);
 } else {

  FUNC_8(VAR_27, VAR_6 + VAR_28, 0);
  (void) FUNC_5(VAR_27, VAR_6 + VAR_28);

  VAR_25 = FUNC_10(VAR_23);
  FUNC_8(VAR_27, VAR_6 + VAR_28, VAR_25);
  (void) FUNC_5(VAR_27, VAR_6 + VAR_28);
  if ((VAR_25 & VAR_16) && VAR_27->params.rev) {
   FUNC_3(1);
   FUNC_9(VAR_23);
  }
  FUNC_8(VAR_27, VAR_7 + VAR_28,
    VAR_10 | VAR_11 |
     VAR_19 | VAR_14 | VAR_13 );
 }


 FUNC_8(VAR_27, VAR_1, VAR_3 + VAR_29);
 FUNC_8(VAR_27, VAR_2, VAR_30);


 FUNC_6(VAR_27, VAR_0, VAR_18 | VAR_17,
    VAR_26);


 FUNC_6(VAR_27, VAR_0, VAR_12, VAR_12);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fw_hello_cmd {int err_to_clearinit; } ;
struct adapter {int dummy; } ;
typedef enum dev_state { ____Placeholder_dev_state } dev_state ;
typedef enum dev_master { ____Placeholder_dev_master } dev_master ;
typedef int c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 unsigned int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int VAR_16 ;
 int FUNC_2 (struct fw_hello_cmd,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ) ;
 int VAR_21 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct fw_hello_cmd*,int ,int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct adapter*,int ) ;
 int FUNC_13 (struct adapter*) ;
 int FUNC_14 (struct adapter*,unsigned int,struct fw_hello_cmd*,int,struct fw_hello_cmd*) ;

int FUNC_15(struct adapter *VAR_22, unsigned int VAR_23, unsigned int VAR_24,
  enum dev_master VAR_25, enum dev_state *VAR_26)
{
 int VAR_27;
 struct fw_hello_cmd VAR_28;
 u32 VAR_29;
 unsigned int VAR_30;
 int VAR_31 = VAR_6;

retry:
 FUNC_10(&VAR_28, 0, sizeof(VAR_28));
 FUNC_2(VAR_28, VAR_16, VAR_21);
 VAR_28.err_to_clearinit = FUNC_9(
  FUNC_3(VAR_25 == VAR_17) |
  FUNC_4(VAR_25 == VAR_18) |
  FUNC_6(VAR_25 == VAR_18 ?
     VAR_23 : VAR_19) |
  FUNC_5(VAR_24) |
  FUNC_7(VAR_8) |
  VAR_10);
 VAR_27 = FUNC_14(VAR_22, VAR_23, &VAR_28, sizeof(VAR_28), &VAR_28);
 if (VAR_27 != VAR_9) {
  if ((VAR_27 == -VAR_4 || VAR_27 == -VAR_5) && VAR_31-- > 0)
   goto retry;
  if (FUNC_12(VAR_22, VAR_0) & VAR_13)
   FUNC_13(VAR_22);
  return VAR_27;
 }

 VAR_29 = FUNC_8(VAR_28.err_to_clearinit);
 VAR_30 = FUNC_0(VAR_29);
 if (VAR_26) {
  if (VAR_29 & VAR_11)
   *VAR_26 = VAR_1;
  else if (VAR_29 & VAR_12)
   *VAR_26 = VAR_2;
  else
   *VAR_26 = VAR_3;
 }
 if ((VAR_29 & (VAR_11|VAR_12)) == 0 &&
     VAR_30 != VAR_23) {
  int VAR_32 = VAR_7;
  for (;;) {
   u32 VAR_33;

   FUNC_11(50);
   VAR_32 -= 50;







   VAR_33 = FUNC_12(VAR_22, VAR_0);
   if (!(VAR_33 & (VAR_13|VAR_14))) {
    if (VAR_32 <= 0) {
     if (VAR_31-- > 0)
      goto retry;

     return -VAR_5;
    }
    continue;
   }





   if (VAR_26) {
    if (VAR_33 & VAR_13)
     *VAR_26 = VAR_1;
    else if (VAR_33 & VAR_14)
     *VAR_26 = VAR_2;
   }






   if (VAR_30 == VAR_20 &&
       (VAR_33 & VAR_15))
    VAR_30 = FUNC_1(VAR_33);
   break;
  }
 }

 return VAR_30;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_long ;
struct vmcs {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmcs*) ;
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
 int FUNC_1 (struct vmcs*) ;
 scalar_t__ VAR_16 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

int
FUNC_12(struct vmcs *VAR_19)
{
 int VAR_20, VAR_21, VAR_22, VAR_23;
 u_long VAR_24, VAR_25, VAR_26;
 uint64_t VAR_27, VAR_28, VAR_29;

 VAR_21 = FUNC_2();
 VAR_22 = FUNC_5();
 VAR_23 = FUNC_10();




 FUNC_1(VAR_19);




 VAR_27 = FUNC_9();
 if ((VAR_20 = FUNC_11(VAR_10, VAR_27)) != 0)
  goto done;


 VAR_26 = FUNC_6();
 if ((VAR_20 = FUNC_11(VAR_9, VAR_26)) != 0)
  goto done;



 VAR_24 = FUNC_3();
 if ((VAR_20 = FUNC_11(VAR_1, VAR_24)) != 0)
  goto done;

 VAR_25 = FUNC_4() | VAR_0;
 if ((VAR_20 = FUNC_11(VAR_2, VAR_25)) != 0)
  goto done;


 if ((VAR_20 = FUNC_11(VAR_5, VAR_22)) != 0)
  goto done;

 if ((VAR_20 = FUNC_11(VAR_3, VAR_21)) != 0)
  goto done;

 if ((VAR_20 = FUNC_11(VAR_13, VAR_22)) != 0)
  goto done;

 if ((VAR_20 = FUNC_11(VAR_4, VAR_22)) != 0)
  goto done;

 if ((VAR_20 = FUNC_11(VAR_7, VAR_22)) != 0)
  goto done;

 if ((VAR_20 = FUNC_11(VAR_8, VAR_22)) != 0)
  goto done;

 if ((VAR_20 = FUNC_11(VAR_14, VAR_23)) != 0)
  goto done;







 VAR_28 = FUNC_7();
 if ((VAR_20 = FUNC_11(VAR_6, VAR_28)) != 0)
  goto done;

 VAR_29 = FUNC_8();
 if ((VAR_20 = FUNC_11(VAR_11, VAR_29)) != 0)
  goto done;


 if (VAR_16) {
  if ((VAR_20 = FUNC_11(VAR_12,
      (u_long)VAR_17)) != 0)
   goto done;
 } else {
  if ((VAR_20 = FUNC_11(VAR_12,
      (u_long)VAR_18)) != 0)
   goto done;
 }


 if ((VAR_20 = FUNC_11(VAR_15, ~0)) != 0)
  goto done;
done:
 FUNC_0(VAR_19);
 return (VAR_20);
}

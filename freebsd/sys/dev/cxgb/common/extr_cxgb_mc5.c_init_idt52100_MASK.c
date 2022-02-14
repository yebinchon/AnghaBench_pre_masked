
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc5 {int * adapter; } ;
typedef int adapter_t ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int,int) ;
 int FUNC_4 (struct mc5*,int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static int FUNC_7(struct mc5 *VAR_29)
{
 int VAR_30;
 adapter_t *VAR_31 = VAR_29->adapter;

 FUNC_6(VAR_31, VAR_12,
       FUNC_1(0x15) | FUNC_0(0x15) | FUNC_2(0x15));
 FUNC_6(VAR_31, VAR_9, 2);





 FUNC_6(VAR_31, VAR_10, VAR_20);
 FUNC_6(VAR_31, VAR_11, VAR_20);
 FUNC_6(VAR_31, VAR_3, VAR_19);
 FUNC_6(VAR_31, VAR_2, VAR_17);
 FUNC_6(VAR_31, VAR_14, VAR_19 | 0x6000);
 FUNC_6(VAR_31, VAR_13, VAR_17);
 FUNC_6(VAR_31, VAR_1, VAR_19);
 FUNC_6(VAR_31, VAR_0, VAR_17);
 FUNC_6(VAR_31, VAR_8, VAR_19);
 FUNC_6(VAR_31, VAR_7, VAR_19 | 0x7000);
 FUNC_6(VAR_31, VAR_5, VAR_20);
 FUNC_6(VAR_31, VAR_4, VAR_18);


 FUNC_6(VAR_31, VAR_6, VAR_15);


 FUNC_3(VAR_31, VAR_24, 0, 0);
 if (FUNC_5(VAR_31, VAR_23, VAR_20))
  goto err;


 FUNC_3(VAR_31, 0xffffffff, 0xffffffff, 0);
 if (FUNC_5(VAR_31, VAR_27, VAR_20) ||
     FUNC_5(VAR_31, VAR_28, VAR_20))
  goto err;


 for (VAR_30 = 0; VAR_30 < 32; ++VAR_30) {
  if (VAR_30 >= 12 && VAR_30 < 15)
   FUNC_3(VAR_31, 0xfffffff9, 0xffffffff, 0xff);
  else if (VAR_30 == 15)
   FUNC_3(VAR_31, 0xfffffff9, 0xffff8007, 0xff);
  else
   FUNC_3(VAR_31, 0xffffffff, 0xffffffff, 0xff);

  if (FUNC_5(VAR_31, VAR_22 + VAR_30, VAR_20))
   goto err;
 }


 FUNC_3(VAR_31, 1, 0, 0);
 if (FUNC_5(VAR_31, VAR_26, VAR_20))
  goto err;

 return FUNC_4(VAR_29, VAR_25,
        VAR_21, VAR_20, 0);
 err:
 return -VAR_16;
}

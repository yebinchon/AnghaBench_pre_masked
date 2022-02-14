
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef int __be32 ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct adapter*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct adapter*,int) ;
 int FUNC_7 (struct adapter*,int) ;
 int FUNC_8 (struct adapter*,int,int,int ,int,int) ;
 int FUNC_9 (struct adapter*,int,int) ;

int FUNC_10(struct adapter *VAR_12, int VAR_13, u32 VAR_14, __be32 *VAR_15, u64 *VAR_16)
{
 int VAR_17;
 u32 VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22;

 if (FUNC_4(VAR_12)) {
  VAR_18 = VAR_0;
  VAR_19 = VAR_1;
  VAR_20 = VAR_2;
  VAR_21 = VAR_4;
  VAR_22 = VAR_3;
 } else {
  VAR_18 = FUNC_1(VAR_5, VAR_13);
  VAR_19 = FUNC_1(VAR_6, VAR_13);
  VAR_20 = FUNC_1(VAR_7, VAR_13);
  VAR_21 = FUNC_1(VAR_9,
        VAR_13);
  VAR_22 = FUNC_1(VAR_8,
        VAR_13);
 }

 if (FUNC_6(VAR_12, VAR_18) & VAR_11)
  return -VAR_10;
 FUNC_9(VAR_12, VAR_19, VAR_14 & ~0x3fU);
 FUNC_9(VAR_12, VAR_20, 64);
 FUNC_9(VAR_12, VAR_22, 0xc);
 FUNC_9(VAR_12, VAR_18, FUNC_3(1) |
       VAR_11 | FUNC_2(1));
 VAR_17 = FUNC_8(VAR_12, VAR_18, VAR_11, 0, 10, 1);
 if (VAR_17)
  return VAR_17;



 for (VAR_17 = 15; VAR_17 >= 0; VAR_17--)
  *VAR_15++ = FUNC_5(FUNC_6(VAR_12, FUNC_0(VAR_21, VAR_17)));
 if (VAR_16)
  *VAR_16 = FUNC_7(VAR_12, FUNC_0(VAR_21, 16));

 return 0;
}

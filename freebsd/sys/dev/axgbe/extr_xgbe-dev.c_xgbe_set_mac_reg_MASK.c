
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct xgbe_prv_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_3,
        char *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 u8 *VAR_8;

 VAR_7 = 0;
 VAR_6 = 0;

 if (VAR_4) {
  VAR_8 = (u8 *)&VAR_7;
  VAR_8[0] = VAR_4[0];
  VAR_8[1] = VAR_4[1];
  VAR_8[2] = VAR_4[2];
  VAR_8[3] = VAR_4[3];
  VAR_8 = (u8 *)&VAR_6;
  VAR_8[0] = VAR_4[4];
  VAR_8[1] = VAR_4[5];

  FUNC_1(VAR_6, VAR_1, VAR_0, 1);
 }

 FUNC_0(VAR_3, *VAR_5, VAR_6);
 *VAR_5 += VAR_2;
 FUNC_0(VAR_3, *VAR_5, VAR_7);
 *VAR_5 += VAR_2;
}

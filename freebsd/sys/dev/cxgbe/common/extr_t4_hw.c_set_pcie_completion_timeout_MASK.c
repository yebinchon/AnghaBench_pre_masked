
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,scalar_t__,int*) ;
 int FUNC_2 (struct adapter*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct adapter *VAR_2,
        u8 VAR_3)
{
 u16 VAR_4;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_0);
 if (VAR_5) {
  FUNC_1(VAR_2, VAR_5 + VAR_1, &VAR_4);
  VAR_4 &= 0xfff0;
  VAR_4 |= VAR_3 ;
  FUNC_2(VAR_2, VAR_5 + VAR_1, VAR_4);
 }
}

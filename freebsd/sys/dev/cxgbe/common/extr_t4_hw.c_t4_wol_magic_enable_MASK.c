
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct adapter*,int ,int ,int ) ;
 int FUNC_5 (struct adapter*,int ,int const) ;

void FUNC_6(struct adapter *VAR_7, unsigned int VAR_8,
    const u8 *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;

 if (FUNC_3(VAR_7)) {
  VAR_10 = FUNC_0(VAR_8, VAR_5);
  VAR_11 = FUNC_0(VAR_8, VAR_4);
  VAR_12 = FUNC_0(VAR_8, VAR_3);
 } else {
  VAR_10 = FUNC_1(VAR_8, VAR_2);
  VAR_11 = FUNC_1(VAR_8, VAR_1);
  VAR_12 = FUNC_1(VAR_8, VAR_0);
 }

 if (VAR_9) {
  FUNC_5(VAR_7, VAR_10,
        (VAR_9[2] << 24) | (VAR_9[3] << 16) |
        (VAR_9[4] << 8) | VAR_9[5]);
  FUNC_5(VAR_7, VAR_11,
        (VAR_9[0] << 8) | VAR_9[1]);
 }
 FUNC_4(VAR_7, VAR_12, VAR_6,
    FUNC_2(VAR_9 != ((void*)0)));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int ;
typedef int u32 ;
struct adapter {int flags; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct adapter*,int ) ;
 int FUNC_6 (struct adapter*,int ,int) ;

__attribute__((used)) static uint64_t
FUNC_7(struct adapter *VAR_4, u_int VAR_5, int VAR_6)
{
 u32 VAR_7[2];

 FUNC_4(&VAR_4->reg_lock, VAR_3);
 if (VAR_4->flags & VAR_2) {
  VAR_7[0] = FUNC_5(VAR_4, FUNC_0(VAR_6));
  VAR_7[1] = FUNC_5(VAR_4, FUNC_0(VAR_6 + 4));
 } else {
  FUNC_6(VAR_4, VAR_0, FUNC_2(1) |
      FUNC_3(VAR_5) | FUNC_1(FUNC_0(VAR_6)));
  VAR_7[0] = FUNC_5(VAR_4, VAR_1);
  VAR_7[1] = FUNC_5(VAR_4, VAR_1);
 }
 return (((uint64_t)VAR_7[1]) << 32 | VAR_7[0]);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct es1968 {int reg_lock; } ;


 int FUNC_0 (struct es1968*,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u16 FUNC_3(struct es1968 *VAR_0, u16 VAR_1, u8 VAR_2)
{
 unsigned long VAR_3;
 u16 VAR_4;
 FUNC_1(&VAR_0->reg_lock, VAR_3);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->reg_lock, VAR_3);
 return VAR_4;
}

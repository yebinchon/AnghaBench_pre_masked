
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct es1968 {int reg_lock; } ;


 int FUNC_0 (struct es1968*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline u16 FUNC_3(struct es1968 *VAR_0, u16 VAR_1)
{
 unsigned long VAR_2;
 u16 VAR_3;
 FUNC_1(&VAR_0->reg_lock, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->reg_lock, VAR_2);
 return VAR_3;
}

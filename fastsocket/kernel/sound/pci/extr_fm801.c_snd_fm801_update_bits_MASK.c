
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801 {int reg_lock; scalar_t__ port; } ;


 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct fm801 *VAR_0, unsigned short VAR_1,
     unsigned short VAR_2, unsigned short VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 unsigned short VAR_6, VAR_7;

 FUNC_2(&VAR_0->reg_lock, VAR_5);
 VAR_6 = FUNC_0(VAR_0->port + VAR_1);
 VAR_7 = (VAR_6 & ~VAR_2) | VAR_3;
 VAR_4 = VAR_6 != VAR_7;
 if (VAR_4)
  FUNC_1(VAR_7, VAR_0->port + VAR_1);
 FUNC_3(&VAR_0->reg_lock, VAR_5);
 return VAR_4;
}

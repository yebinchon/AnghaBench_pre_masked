
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct es1968 {int reg_lock; scalar_t__ io_port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct es1968 *VAR_2, u16 VAR_3, u16 VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(&VAR_2->reg_lock, VAR_5);
 FUNC_0(VAR_3, VAR_2->io_port + VAR_1);
 FUNC_0(VAR_4, VAR_2->io_port + VAR_0);
 FUNC_2(&VAR_2->reg_lock, VAR_5);
}

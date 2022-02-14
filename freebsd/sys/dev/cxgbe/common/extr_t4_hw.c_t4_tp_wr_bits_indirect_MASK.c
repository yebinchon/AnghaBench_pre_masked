
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct adapter*,int ) ;
 int FUNC_1 (struct adapter*,int ,unsigned int) ;

void FUNC_2(struct adapter *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4, unsigned int VAR_5)
{
 FUNC_1(VAR_2, VAR_0, VAR_3);
 VAR_5 |= FUNC_0(VAR_2, VAR_1) & ~VAR_4;
 FUNC_1(VAR_2, VAR_1, VAR_5);
}

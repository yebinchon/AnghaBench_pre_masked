
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcxhr_mgr {int dummy; } ;


 unsigned int FUNC_0 (struct pcxhr_mgr*,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct pcxhr_mgr*,int ,unsigned int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct pcxhr_mgr *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_2);

 if (VAR_4)
  VAR_5 |= (VAR_1 | VAR_0);
 else
  VAR_5 &= ~(VAR_1 | VAR_0);
 FUNC_1(VAR_3, VAR_2, VAR_5);
}

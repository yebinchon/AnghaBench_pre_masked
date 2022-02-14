
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {unsigned long r_port; unsigned long l_port; int reg_lock; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned char,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct snd_opl3 * VAR_1, unsigned short VAR_2, unsigned char VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;






 VAR_5 = (VAR_2 & VAR_0) ? VAR_1->r_port : VAR_1->l_port;

 FUNC_2(&VAR_1->reg_lock, VAR_4);

 FUNC_1((unsigned char) VAR_2, VAR_5);
 FUNC_0(VAR_1->l_port);
 FUNC_0(VAR_1->l_port);

 FUNC_1((unsigned char) VAR_3, VAR_5 + 1);
 FUNC_0(VAR_1->l_port);
 FUNC_0(VAR_1->l_port);

 FUNC_3(&VAR_1->reg_lock, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_bt87x {int reg_control; int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_bt87x*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_bt87x *VAR_7)
{
 FUNC_1(&VAR_7->reg_lock);
 VAR_7->reg_control &= ~(VAR_1 | VAR_2 | VAR_0);
 FUNC_0(VAR_7, VAR_4, VAR_7->reg_control);
 FUNC_0(VAR_7, VAR_5, 0);
 FUNC_0(VAR_7, VAR_6, VAR_3);
 FUNC_2(&VAR_7->reg_lock);
 return 0;
}

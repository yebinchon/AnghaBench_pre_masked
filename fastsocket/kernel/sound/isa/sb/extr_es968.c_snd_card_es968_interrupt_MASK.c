
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int open; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_sb*) ;
 int FUNC_1 (struct snd_sb*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct snd_sb *VAR_3 = VAR_2;

 if (VAR_3->open & VAR_0) {
  return FUNC_0(VAR_3);
 } else {
  return FUNC_1(VAR_3);
 }
}

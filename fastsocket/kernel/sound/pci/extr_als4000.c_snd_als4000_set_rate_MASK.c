
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mode; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_sb*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_sb *VAR_2, unsigned int VAR_3)
{
 if (!(VAR_2->mode & VAR_1)) {
  FUNC_0(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_3>>8);
  FUNC_0(VAR_2, VAR_3);
 }
}

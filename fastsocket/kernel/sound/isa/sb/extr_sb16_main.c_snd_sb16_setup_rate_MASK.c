
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int mode; unsigned short locked_rate; int reg_lock; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_sb*) ;
 int FUNC_1 (struct snd_sb*) ;
 int FUNC_2 (struct snd_sb*,unsigned short) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct snd_sb *VAR_6,
    unsigned short VAR_7,
    int VAR_8)
{
 unsigned long VAR_9;

 FUNC_3(&VAR_6->reg_lock, VAR_9);
 if (VAR_6->mode & (VAR_8 == VAR_5 ? VAR_3 : VAR_2))
  FUNC_0(VAR_6);
 else
  FUNC_1(VAR_6);
 if (!(VAR_6->mode & VAR_4)) {
  VAR_6->locked_rate = VAR_7;
  FUNC_2(VAR_6, VAR_0);
  FUNC_2(VAR_6, VAR_7 >> 8);
  FUNC_2(VAR_6, VAR_7 & 0xff);
  FUNC_2(VAR_6, VAR_1);
  FUNC_2(VAR_6, VAR_7 >> 8);
  FUNC_2(VAR_6, VAR_7 & 0xff);
 }
 FUNC_4(&VAR_6->reg_lock, VAR_9);
}

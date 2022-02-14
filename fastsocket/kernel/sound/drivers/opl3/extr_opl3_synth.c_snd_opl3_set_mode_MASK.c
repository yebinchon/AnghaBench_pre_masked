
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {scalar_t__ hardware; int fm_mode; int (* command ) (struct snd_opl3*,int,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_opl3*,int,int) ;

__attribute__((used)) static int FUNC_1(struct snd_opl3 * VAR_5, int VAR_6)
{
 if ((VAR_6 == VAR_4) && (VAR_5->hardware < VAR_1))
  return -VAR_0;

 VAR_5->fm_mode = VAR_6;
 if (VAR_5->hardware >= VAR_1)
  VAR_5->command(VAR_5, VAR_3 | VAR_2, 0x00);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (struct snd_opl4*,char*,int,int) ;
 int FUNC_2 (char*,char,char) ;

int FUNC_3(struct snd_opl4 *VAR_1)
{
 char VAR_2[15];

 FUNC_1(VAR_1, VAR_2, 0x001200, 15);
 if (FUNC_0(VAR_2, "CopyrightYAMAHA", 15))
  return -VAR_0;
 FUNC_1(VAR_1, VAR_2, 0x1ffffe, 2);
 if (VAR_2[0] != 0x01)
  return -VAR_0;
 FUNC_2("YRW801 ROM version %02x.%02x\n", VAR_2[0], VAR_2[1]);
 return 0;
}

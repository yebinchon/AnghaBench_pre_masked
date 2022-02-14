
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int dummy; } ;


 int FUNC_0 (struct snd_sb*,unsigned char*,int) ;
 int FUNC_1 (struct snd_sb*) ;

__attribute__((used)) static int FUNC_2(struct snd_sb *VAR_0, unsigned char VAR_1)
{
 unsigned char VAR_2[2];

 VAR_2[0] = 0x0f;
 VAR_2[1] = VAR_1;
 FUNC_0(VAR_0, VAR_2, 2);
 return FUNC_1(VAR_0);
}

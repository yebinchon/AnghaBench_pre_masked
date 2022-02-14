
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_sb*,int ) ;
 scalar_t__ FUNC_1 (struct snd_sb*) ;

__attribute__((used)) static int FUNC_2(struct snd_sb * VAR_2)
{
 unsigned int VAR_3 = -VAR_0;

 FUNC_0(VAR_2, VAR_1);
 VAR_3 = (short) FUNC_1(VAR_2) << 8;
 VAR_3 |= (short) FUNC_1(VAR_2);
 return VAR_3;
}

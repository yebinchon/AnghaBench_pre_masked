
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_rme9652*,int ) ;
 int FUNC_1 (struct snd_rme9652*,int ,int) ;

__attribute__((used)) static int FUNC_2 (struct snd_rme9652 *VAR_3)
{
 long VAR_4;
 long VAR_5;
 long VAR_6;

 VAR_5 = 0;

 for (VAR_6 = 0, VAR_4 = 0x80; VAR_6 < 8; VAR_6++, VAR_4 >>= 1) {
  FUNC_1 (VAR_3, VAR_0, 1);
  if (FUNC_0 (VAR_3, VAR_2) & VAR_1)
   VAR_5 |= VAR_4;
  FUNC_1 (VAR_3, VAR_0, 0);
 }

 return VAR_5;
}

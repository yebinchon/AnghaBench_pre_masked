
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ,int) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(struct snd_ice1712 *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  VAR_4 <<= 1;
  FUNC_0(VAR_2, VAR_0, 0);
  FUNC_2(1);
  if (FUNC_1(VAR_2) & VAR_1)
   VAR_4 |= 1;
  FUNC_2(1);
  FUNC_0(VAR_2, VAR_0, 1);
  FUNC_2(1);
 }
 return VAR_4;
}

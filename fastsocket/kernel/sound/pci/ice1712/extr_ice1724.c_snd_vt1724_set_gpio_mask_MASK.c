
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int vt1720; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_2, unsigned int VAR_3)
{
 FUNC_3(VAR_3, FUNC_0(VAR_2, VAR_0));
 if (!VAR_2->vt1720)
  FUNC_2((VAR_3 >> 16) & 0xff, FUNC_0(VAR_2, VAR_1));
 FUNC_1(FUNC_0(VAR_2, VAR_0));
}

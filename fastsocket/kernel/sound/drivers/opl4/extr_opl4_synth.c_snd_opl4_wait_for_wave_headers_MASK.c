
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {int fm_port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_opl4 *VAR_1)
{
 int VAR_2 = 200;

 while ((FUNC_0(VAR_1->fm_port) & VAR_0) && --VAR_2 > 0)
  FUNC_1(10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_m3 {int reset_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_m3*,int ) ;
 int FUNC_2 (struct snd_m3*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_m3 *VAR_3)
{
 VAR_3->reset_state = FUNC_1(VAR_3, VAR_0) & ~VAR_2;
 FUNC_0(10);
 FUNC_2(VAR_3, VAR_3->reset_state & ~VAR_1, VAR_0);
}

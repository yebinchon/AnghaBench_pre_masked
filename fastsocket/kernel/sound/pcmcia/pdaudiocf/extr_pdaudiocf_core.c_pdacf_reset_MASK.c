
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pdacf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pdacf*,int ) ;
 int FUNC_1 (struct snd_pdacf*,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct snd_pdacf *VAR_4, int VAR_5)
{
 u16 VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2);
 VAR_6 |= VAR_0;
 VAR_6 &= ~VAR_1;
 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_2(5);
 VAR_6 |= VAR_3;
 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_2(200);
 VAR_6 &= ~VAR_3;
 FUNC_1(VAR_4, VAR_2, VAR_6);
 FUNC_2(5);
 if (!VAR_5) {
  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_2, VAR_6);
  FUNC_2(200);
 }
 return 0;
}

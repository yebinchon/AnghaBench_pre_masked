
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_data {int dummy; } ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (struct au1xpsc_audio_data*) ;
 int FUNC_3 (struct au1xpsc_audio_data*) ;
 int FUNC_4 (struct au1xpsc_audio_data*) ;
 int FUNC_5 (struct au1xpsc_audio_data*) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct au1xpsc_audio_data *VAR_3, int VAR_4)
{
 unsigned long VAR_5, VAR_6;

 FUNC_8(FUNC_0(VAR_4), FUNC_3(VAR_3));
 FUNC_7();


 VAR_5 = 1000000;
 while ((FUNC_6(FUNC_4(VAR_3)) & FUNC_1(VAR_4)) && VAR_5)
  VAR_5--;


 VAR_6 = FUNC_6(FUNC_4(VAR_3));
 if (!(VAR_6 & (VAR_2 | VAR_1))) {
  FUNC_8(0, FUNC_2(VAR_3));
  FUNC_7();
  FUNC_8(VAR_0, FUNC_5(VAR_3));
  FUNC_7();
 }
 return 0;
}

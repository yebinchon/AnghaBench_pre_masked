
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_data {int cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct au1xpsc_audio_data*) ;
 int FUNC_1 (struct au1xpsc_audio_data*) ;
 int FUNC_2 (struct au1xpsc_audio_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct au1xpsc_audio_data *VAR_6)
{
 unsigned long VAR_7;


 FUNC_5(VAR_1, FUNC_2(VAR_6));
 FUNC_4();

 VAR_7 = 1000000;
 while (!(FUNC_3(FUNC_1(VAR_6)) & VAR_5) && VAR_7)
  VAR_7--;

 if (!VAR_7)
  goto psc_err;

 FUNC_5(0, FUNC_0(VAR_6));
 FUNC_4();
 FUNC_5(VAR_6->cfg | VAR_3, FUNC_0(VAR_6));
 FUNC_4();


 VAR_7 = 1000000;
 while (!(FUNC_3(FUNC_1(VAR_6)) & VAR_4) && VAR_7)
  VAR_7--;

 if (VAR_7)
  return 0;

psc_err:
 FUNC_5(0, FUNC_0(VAR_6));
 FUNC_5(VAR_2, FUNC_2(VAR_6));
 FUNC_4();
 return -VAR_0;
}

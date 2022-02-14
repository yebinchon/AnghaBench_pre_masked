
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_softc {struct cf_saved_freq* levels_buf; int saved_freq; int sysctl_ctx; } ;
struct cf_saved_freq {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct cf_saved_freq* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct cpufreq_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct cf_saved_freq*,int ) ;
 int VAR_3 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_4)
{
 struct cpufreq_softc *VAR_5;
 struct cf_saved_freq *VAR_6;
 int VAR_7;

 FUNC_0("shutdown %s\n", FUNC_4(VAR_4));
 VAR_5 = FUNC_5(VAR_4);
 FUNC_7(&VAR_5->sysctl_ctx);

 while ((VAR_6 = FUNC_1(&VAR_5->saved_freq)) != ((void*)0)) {
  FUNC_2(&VAR_5->saved_freq, VAR_3);
  FUNC_6(VAR_6, VAR_1);
 }


 VAR_7 = FUNC_3(VAR_2);
 if (VAR_7 == 1) {
  FUNC_0("final shutdown for %s\n", FUNC_4(VAR_4));
  FUNC_6(VAR_5->levels_buf, VAR_0);
 }

 return (0);
}

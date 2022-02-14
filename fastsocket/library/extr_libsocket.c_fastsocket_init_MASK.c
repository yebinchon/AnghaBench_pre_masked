
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int,int *) ;

__attribute__((constructor))
void FUNC_8(void)
{
 int VAR_5 = 0;
 int VAR_6;
 cpu_set_t VAR_7;

 VAR_5 = FUNC_6("/dev/fastsocket", VAR_1);
 if (VAR_5 < 0) {
  FUNC_2("Open fastsocket channel failed, please CHECK\n");

  FUNC_4(-1);
 }
 VAR_2 = VAR_5;

 VAR_4 = FUNC_3(VAR_0, sizeof(int));
 if (!VAR_4) {
  FUNC_2("Allocate memory for listen fd set failed\n");
  FUNC_4(-1);
 }

 VAR_3 = VAR_0;

 FUNC_1(&VAR_7);

 for (VAR_6 = 0; VAR_6 < FUNC_5(); VAR_6++)
  FUNC_0(VAR_6, &VAR_7);

 VAR_5 = FUNC_7(0, FUNC_5(), &VAR_7);
 if (VAR_5 < 0) {
  FUNC_2("Clear process CPU affinity failed\n");
  FUNC_4(-1);
 }

 return;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct worker {int cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,char*,struct worker*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int **,int *,int ) ;
 int FUNC_4 (int ,char*,char*) ;

void
FUNC_5(struct worker* VAR_1)
{

 uint8_t* VAR_2 = ((void*)0);
 uint32_t VAR_3 = 0;
 if(!FUNC_3(VAR_1->cmd, &VAR_2, &VAR_3, 0)) {
  FUNC_2("daemon_remote_exec: tube_read_msg failed");
  return;
 }
 FUNC_4(VAR_0, "remote exec distributed: %s", (char*)VAR_2);
 FUNC_0(((void*)0), ((void*)0), (char*)VAR_2, VAR_1);
 FUNC_1(VAR_2);
}

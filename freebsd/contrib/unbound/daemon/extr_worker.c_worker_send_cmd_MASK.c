
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct worker {int cmd; } ;
typedef enum worker_commands { ____Placeholder_worker_commands } worker_commands ;
typedef int c ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int *,int,int ) ;

void
FUNC_3(struct worker* VAR_0, enum worker_commands VAR_1)
{
 uint32_t VAR_2 = (uint32_t)FUNC_0(VAR_1);
 if(!FUNC_2(VAR_0->cmd, (uint8_t*)&VAR_2, sizeof(VAR_2), 0)) {
  FUNC_1("worker send cmd %d failed", (int)VAR_1);
 }
}

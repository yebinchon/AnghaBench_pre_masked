
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct auth_xfer {TYPE_1__* task_transfer; } ;
struct auth_chunk {int len; scalar_t__ data; struct auth_chunk* next; } ;
struct TYPE_2__ {struct auth_chunk* chunks_first; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int ) ;

__attribute__((used)) static int
FUNC_5(struct auth_xfer* VAR_1, const char* VAR_2)
{
 FILE* VAR_3;
 struct auth_chunk* VAR_4;
 VAR_3 = FUNC_1(VAR_2, "w");
 if(!VAR_3) {
  FUNC_2("could not open %s: %s", VAR_2, FUNC_3(VAR_0));
  return 0;
 }
 for(VAR_4 = VAR_1->task_transfer->chunks_first; VAR_4 ; VAR_4 = VAR_4->next) {
  if(!FUNC_4(VAR_3, (char*)VAR_4->data, VAR_4->len)) {
   FUNC_2("could not write http download to %s", VAR_2);
   FUNC_0(VAR_3);
   return 0;
  }
 }
 FUNC_0(VAR_3);
 return 1;
}

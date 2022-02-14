
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt {int dummy; } ;
struct config_stub {int name; struct config_strlist* hosts; } ;
struct config_strlist {int str; struct config_strlist* next; } ;


 int FUNC_0 (struct delegpt*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;
 int * FUNC_4 (int ,size_t*) ;

__attribute__((used)) static int
FUNC_5(struct config_stub* VAR_0, struct delegpt* VAR_1)
{
 struct config_strlist* VAR_2;
 uint8_t* VAR_3;
 size_t VAR_4;
 for(VAR_2 = VAR_0->hosts; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_2(VAR_2->str);
  VAR_3 = FUNC_4(VAR_2->str, &VAR_4);
  if(!VAR_3) {
   FUNC_3("cannot parse forward %s server name: '%s'",
    VAR_0->name, VAR_2->str);
   return 0;
  }
  if(!FUNC_0(VAR_1, VAR_3, 0)) {
   FUNC_1(VAR_3);
   FUNC_3("out of memory");
   return 0;
  }
  FUNC_1(VAR_3);
 }
 return 1;
}

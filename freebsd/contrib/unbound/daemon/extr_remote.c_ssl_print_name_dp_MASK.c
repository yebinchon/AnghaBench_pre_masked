
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct delegpt_ns {int * name; struct delegpt_ns* next; } ;
struct delegpt_addr {int addrlen; int addr; struct delegpt_addr* next_target; } ;
struct delegpt {struct delegpt_addr* target_list; struct delegpt_ns* nslist; } ;
typedef int buf ;
typedef int RES ;


 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,...) ;

__attribute__((used)) static int
FUNC_5(RES* VAR_0, const char* VAR_1, uint8_t* VAR_2, uint16_t VAR_3,
 struct delegpt* VAR_4)
{
 char VAR_5[257];
 struct delegpt_ns* VAR_6;
 struct delegpt_addr* VAR_7;
 int VAR_8 = 0;
 if(VAR_1) {
  char* VAR_9 = FUNC_3(VAR_3);
  FUNC_1(VAR_2, VAR_5);
  if(!FUNC_4(VAR_0, "%s %s %s ", VAR_5, (VAR_9?VAR_9:"CLASS??"), VAR_1)) {
   FUNC_2(VAR_9);
   return 0;
  }
  FUNC_2(VAR_9);
 }
 for(VAR_6 = VAR_4->nslist; VAR_6; VAR_6 = VAR_6->next) {
  FUNC_1(VAR_6->name, VAR_5);
  if(!FUNC_4(VAR_0, "%s%s", (VAR_8?" ":""), VAR_5))
   return 0;
  VAR_8 = 1;
 }
 for(VAR_7 = VAR_4->target_list; VAR_7; VAR_7 = VAR_7->next_target) {
  FUNC_0(&VAR_7->addr, VAR_7->addrlen, VAR_5, sizeof(VAR_5));
  if(!FUNC_4(VAR_0, "%s%s", (VAR_8?" ":""), VAR_5))
   return 0;
  VAR_8 = 1;
 }
 return FUNC_4(VAR_0, "\n");
}

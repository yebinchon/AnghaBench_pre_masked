
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct iter_forwards {int dummy; } ;
struct config_stub {int name; struct config_stub* next; } ;
struct config_file {struct config_stub* stubs; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iter_forwards*,int ,int *) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int ,size_t*) ;

__attribute__((used)) static int
FUNC_4(struct iter_forwards* VAR_1, struct config_file* VAR_2)
{
 struct config_stub* VAR_3;
 uint8_t* VAR_4;
 size_t VAR_5;
 for(VAR_3 = VAR_2->stubs; VAR_3; VAR_3 = VAR_3->next) {
  if(!VAR_3->name) continue;
  VAR_4 = FUNC_3(VAR_3->name, &VAR_5);
  if(!VAR_4) {
   FUNC_2("cannot parse stub name '%s'", VAR_3->name);
   return 0;
  }
  if(!FUNC_1(VAR_1, VAR_0, VAR_4)) {
   FUNC_0(VAR_4);
   FUNC_2("out of memory");
   return 0;
  }
  FUNC_0(VAR_4);
 }
 return 1;
}

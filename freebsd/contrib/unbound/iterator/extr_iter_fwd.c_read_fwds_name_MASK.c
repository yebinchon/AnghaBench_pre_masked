
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct delegpt {int dummy; } ;
struct config_stub {int name; } ;


 struct delegpt* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (int ,size_t*) ;

__attribute__((used)) static struct delegpt*
FUNC_4(struct config_stub* VAR_0)
{
 struct delegpt* VAR_1;
 uint8_t* VAR_2;
 size_t VAR_3;
 if(!VAR_0->name) {
  FUNC_2("forward zone without a name (use name \".\" to forward everything)");
  return ((void*)0);
 }
 VAR_2 = FUNC_3(VAR_0->name, &VAR_3);
 if(!VAR_2) {
  FUNC_2("cannot parse forward zone name %s", VAR_0->name);
  return ((void*)0);
 }
 if(!(VAR_1=FUNC_0(VAR_2))) {
  FUNC_1(VAR_2);
  FUNC_2("out of memory");
  return ((void*)0);
 }
 FUNC_1(VAR_2);
 return VAR_1;
}

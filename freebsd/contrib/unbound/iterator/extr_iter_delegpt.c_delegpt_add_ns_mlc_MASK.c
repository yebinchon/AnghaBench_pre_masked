
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct delegpt_ns {size_t namelen; scalar_t__ done_pside6; scalar_t__ done_pside4; scalar_t__ lame; scalar_t__ got6; scalar_t__ got4; scalar_t__ resolved; struct delegpt_ns* next; int name; } ;
struct delegpt {struct delegpt_ns* nslist; int dp_type_mlc; } ;


 scalar_t__ FUNC_0 (struct delegpt*,scalar_t__*,size_t) ;
 int FUNC_1 (scalar_t__*,size_t*) ;
 int FUNC_2 (struct delegpt_ns*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__*,size_t) ;

int FUNC_6(struct delegpt* VAR_0, uint8_t* VAR_1, uint8_t VAR_2)
{
 struct delegpt_ns* VAR_3;
 size_t VAR_4;
 (void)FUNC_1(VAR_1, &VAR_4);
 FUNC_3(VAR_0->dp_type_mlc);


 if(FUNC_0(VAR_0, VAR_1, VAR_4))
  return 1;
 VAR_3 = (struct delegpt_ns*)FUNC_4(sizeof(struct delegpt_ns));
 if(!VAR_3)
  return 0;
 VAR_3->namelen = VAR_4;
 VAR_3->name = FUNC_5(VAR_1, VAR_3->namelen);
 if(!VAR_3->name) {
  FUNC_2(VAR_3);
  return 0;
 }
 VAR_3->next = VAR_0->nslist;
 VAR_0->nslist = VAR_3;
 VAR_3->resolved = 0;
 VAR_3->got4 = 0;
 VAR_3->got6 = 0;
 VAR_3->lame = (uint8_t)VAR_2;
 VAR_3->done_pside4 = 0;
 VAR_3->done_pside6 = 0;
 return 1;
}

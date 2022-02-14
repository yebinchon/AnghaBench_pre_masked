
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;
struct delegpt_ns {size_t namelen; scalar_t__ name; scalar_t__ done_pside6; scalar_t__ done_pside4; int lame; scalar_t__ got6; scalar_t__ got4; scalar_t__ resolved; struct delegpt_ns* next; } ;
struct delegpt {struct delegpt_ns* nslist; int dp_type_mlc; } ;


 scalar_t__ FUNC_0 (struct delegpt*,int *,size_t) ;
 int FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct regional*,int) ;
 scalar_t__ FUNC_4 (struct regional*,int *,size_t) ;

int
FUNC_5(struct delegpt* VAR_0, struct regional* VAR_1, uint8_t* VAR_2,
 uint8_t VAR_3)
{
 struct delegpt_ns* VAR_4;
 size_t VAR_5;
 (void)FUNC_1(VAR_2, &VAR_5);
 FUNC_2(!VAR_0->dp_type_mlc);


 if(FUNC_0(VAR_0, VAR_2, VAR_5))
  return 1;
 VAR_4 = (struct delegpt_ns*)FUNC_3(VAR_1,
  sizeof(struct delegpt_ns));
 if(!VAR_4)
  return 0;
 VAR_4->next = VAR_0->nslist;
 VAR_4->namelen = VAR_5;
 VAR_0->nslist = VAR_4;
 VAR_4->name = FUNC_4(VAR_1, VAR_2, VAR_4->namelen);
 VAR_4->resolved = 0;
 VAR_4->got4 = 0;
 VAR_4->got6 = 0;
 VAR_4->lame = VAR_3;
 VAR_4->done_pside4 = 0;
 VAR_4->done_pside6 = 0;
 return VAR_4->name != 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct regional {int dummy; } ;
struct delegpt_ns {int got6; int got4; int resolved; } ;
struct delegpt {int dp_type_mlc; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 int FUNC_1 (struct delegpt*,struct regional*,struct sockaddr_storage*,int ,int ,int ,int *) ;
 struct delegpt_ns* FUNC_2 (struct delegpt*,int *,size_t) ;
 int FUNC_3 (int) ;

int
FUNC_4(struct delegpt* VAR_0, struct regional* VAR_1,
 uint8_t* VAR_2, size_t VAR_3, struct sockaddr_storage* VAR_4,
 socklen_t VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 struct delegpt_ns* VAR_8 = FUNC_2(VAR_0, VAR_2, VAR_3);
 FUNC_3(!VAR_0->dp_type_mlc);
 if(!VAR_8) {

  return 1;
 }
 if(!VAR_7) {
  if(FUNC_0(VAR_4, VAR_5))
   VAR_8->got6 = 1;
  else VAR_8->got4 = 1;
  if(VAR_8->got4 && VAR_8->got6)
   VAR_8->resolved = 1;
 }
 return FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5, VAR_6, VAR_7, ((void*)0));
}

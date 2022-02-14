
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct delegpt_ns {int got6; int got4; int resolved; } ;
struct delegpt {int dp_type_mlc; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 int FUNC_1 (struct delegpt*,struct sockaddr_storage*,int ,int ,int ,int *) ;
 struct delegpt_ns* FUNC_2 (struct delegpt*,int *,size_t) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct delegpt* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 struct sockaddr_storage* VAR_3, socklen_t VAR_4, uint8_t VAR_5,
 uint8_t VAR_6)
{
 struct delegpt_ns* VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_3(VAR_0->dp_type_mlc);
 if(!VAR_7) {

  return 1;
 }
 if(!VAR_6) {
  if(FUNC_0(VAR_3, VAR_4))
   VAR_7->got6 = 1;
  else VAR_7->got4 = 1;
  if(VAR_7->got4 && VAR_7->got6)
   VAR_7->resolved = 1;
 }
 return FUNC_1(VAR_0, VAR_3, VAR_4, VAR_5, VAR_6, ((void*)0));
}

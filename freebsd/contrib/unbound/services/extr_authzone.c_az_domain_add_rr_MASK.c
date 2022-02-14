
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct auth_rrset {int data; } ;
struct auth_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,size_t) ;
 int FUNC_2 (struct auth_rrset*,int ,int *,size_t,int) ;
 struct auth_rrset* FUNC_3 (struct auth_data*,scalar_t__,int ,int *,size_t) ;
 int FUNC_4 (struct auth_data*,scalar_t__,struct auth_rrset*,struct auth_rrset*) ;
 scalar_t__ FUNC_5 (int *,size_t) ;

__attribute__((used)) static int
FUNC_6(struct auth_data* VAR_1, uint16_t VAR_2, uint32_t VAR_3,
 uint8_t* VAR_4, size_t VAR_5, int* VAR_6)
{
 struct auth_rrset* VAR_7;

 if(VAR_2 == VAR_0) {
  uint16_t VAR_8 = FUNC_5(VAR_4, VAR_5);
  if((VAR_7=FUNC_0(VAR_1, VAR_8))!= ((void*)0)) {


   if(FUNC_1(VAR_7->data, VAR_4, VAR_5)) {
    if(VAR_6) *VAR_6 = 1;
    return 1;
   }
   if(!FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, 1))
    return 0;
  } else if((VAR_7=FUNC_0(VAR_1, VAR_2))!= ((void*)0)) {

   if(FUNC_1(VAR_7->data, VAR_4, VAR_5)) {
    if(VAR_6) *VAR_6 = 1;
    return 1;
   }
   if(!FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, 0))
    return 0;
  } else {

   if(!FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_5))
    return 0;
  }
 } else {

  if((VAR_7=FUNC_0(VAR_1, VAR_2))!= ((void*)0)) {

   if(FUNC_1(VAR_7->data, VAR_4, VAR_5)) {
    if(VAR_6) *VAR_6 = 1;
    return 1;
   }
   if(!FUNC_2(VAR_7, VAR_3, VAR_4, VAR_5, 0))
    return 0;
  } else {
   struct auth_rrset* VAR_9;

   if(!(VAR_7=FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
    VAR_5)))
    return 0;




   if((VAR_9=FUNC_0(VAR_1, VAR_0))
    != ((void*)0)) {
    if(!FUNC_4(VAR_1, VAR_2,
     VAR_7, VAR_9))
     return 0;
   }
  }
 }
 return 1;
}

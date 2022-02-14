
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct auth_rrset {TYPE_1__* data; scalar_t__ type; } ;
struct auth_data {int dummy; } ;
struct TYPE_3__ {int count; int rrsig_count; } ;


 scalar_t__ VAR_0 ;
 struct auth_rrset* FUNC_0 (struct auth_data*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,size_t,size_t*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,size_t,size_t*) ;
 int FUNC_3 (struct auth_data*,scalar_t__) ;
 int FUNC_4 (struct auth_rrset*,size_t) ;
 scalar_t__ FUNC_5 (int *,size_t) ;
 int FUNC_6 (struct auth_rrset*,struct auth_rrset*) ;

__attribute__((used)) static int
FUNC_7(struct auth_data* VAR_1, uint16_t VAR_2,
 uint8_t* VAR_3, size_t VAR_4, int* VAR_5)
{
 struct auth_rrset* VAR_6;
 size_t VAR_7 = 0;


 if((VAR_6=FUNC_0(VAR_1, VAR_2))!= ((void*)0)) {
  if(FUNC_1(VAR_6->data, VAR_3, VAR_4, &VAR_7)) {
   if(VAR_6->data->count == 1 &&
    VAR_6->data->rrsig_count == 0) {

    FUNC_3(VAR_1, VAR_2);
   } else if(VAR_6->data->count == 1 &&
    VAR_6->data->rrsig_count != 0) {


    struct auth_rrset* VAR_8 = FUNC_0(
     VAR_1, VAR_0);
    if(VAR_8) {


     FUNC_6(
      VAR_6, VAR_8);

     FUNC_3(VAR_1, VAR_2);
    } else {



     if(!FUNC_4(VAR_6, VAR_7))
      return 0;
     VAR_6->type = VAR_0;
     VAR_6->data->count = VAR_6->data->rrsig_count;
     VAR_6->data->rrsig_count = 0;
    }
   } else {

    if(!FUNC_4(VAR_6, VAR_7))
     return 0;
   }
   return 1;
  }

 }


 if(VAR_2 == VAR_0) {
  uint16_t VAR_9 = FUNC_5(VAR_3, VAR_4);
  if((VAR_6=FUNC_0(VAR_1, VAR_9))!= ((void*)0)) {
   if(FUNC_2(VAR_6->data, VAR_3, VAR_4,
    &VAR_7)) {




    if(!FUNC_4(VAR_6, VAR_7))
     return 0;
    return 1;
   }
  }

 }


 if(VAR_5) *VAR_5 = 1;
 return 1;
}

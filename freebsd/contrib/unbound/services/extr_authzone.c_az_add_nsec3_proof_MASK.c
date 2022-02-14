
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wc ;
typedef int uint8_t ;
struct regional {int dummy; } ;
struct dns_msg {int dummy; } ;
struct auth_zone {int dummy; } ;
struct auth_data {int dummy; } ;


 int VAR_0 ;
 struct auth_data* FUNC_0 (struct auth_zone*,int**,size_t*,int*,int,size_t,int*,size_t) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int*,size_t,int,size_t,int*,size_t) ;
 struct auth_data* FUNC_2 (struct auth_zone*,int*,size_t,int,size_t,int*,size_t) ;
 int FUNC_3 (int*,int*,size_t,int**,size_t*) ;
 int FUNC_4 (struct auth_zone*,struct regional*,struct dns_msg*,struct auth_data*) ;
 int FUNC_5 (struct auth_zone*,int*,size_t*,int**,size_t*) ;
 int FUNC_6 (int*,int*,size_t) ;

__attribute__((used)) static int
FUNC_7(struct auth_zone* VAR_1, struct regional* VAR_2,
 struct dns_msg* VAR_3, uint8_t* VAR_4, size_t VAR_5, uint8_t* VAR_6,
 size_t VAR_7, int VAR_8, int VAR_9, int VAR_10,
 int VAR_11)
{
 int VAR_12;
 size_t VAR_13, VAR_14;
 uint8_t* VAR_15;
 int VAR_16 = 0;
 struct auth_data* VAR_17;


 if(!FUNC_5(VAR_1, &VAR_12, &VAR_13, &VAR_15, &VAR_14))
  return 1;
 if(VAR_8) {


  struct auth_data* VAR_18;
  VAR_18 = FUNC_2(VAR_1, VAR_6, VAR_7, VAR_12,
   VAR_13, VAR_15, VAR_14);
  if(VAR_18) {
   if(!FUNC_4(VAR_1, VAR_2, VAR_3, VAR_18))
    return 0;

   return 1;
  }
 }

 if(VAR_9) {
  VAR_17 = FUNC_0(VAR_1, &VAR_4, &VAR_5, &VAR_16,
   VAR_12, VAR_13, VAR_15, VAR_14);
  if(VAR_16) VAR_10 = 1;
  if(!FUNC_4(VAR_1, VAR_2, VAR_3, VAR_17))
   return 0;
 }

 if(VAR_10) {
  uint8_t* VAR_19;
  size_t VAR_20;

  FUNC_3(VAR_4, VAR_6, VAR_7, &VAR_19, &VAR_20);

  VAR_17 = FUNC_1(VAR_1, VAR_19, VAR_20, VAR_12, VAR_13, VAR_15,
   VAR_14);
  if(!FUNC_4(VAR_1, VAR_2, VAR_3, VAR_17))
   return 0;
 }
 if(VAR_11) {

  uint8_t VAR_21[VAR_0];
  size_t VAR_22;
  if(VAR_5+2 > sizeof(VAR_21))
   return 0;
  VAR_21[0] = 1;
  VAR_21[1] = (uint8_t)'*';
  FUNC_6(VAR_21+2, VAR_4, VAR_5);
  VAR_22 = VAR_5+2;

  VAR_17 = FUNC_1(VAR_1, VAR_21, VAR_22, VAR_12, VAR_13, VAR_15,
   VAR_14);
  if(!FUNC_4(VAR_1, VAR_2, VAR_3, VAR_17))
   return 0;
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct auth_zone {scalar_t__ dclass; int data; } ;
struct auth_data {int * rrsets; } ;


 int FUNC_0 (struct auth_data*) ;
 int FUNC_1 (struct auth_data*,scalar_t__,int *,size_t,int*) ;
 struct auth_data* FUNC_2 (struct auth_zone*,int *,size_t) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,struct auth_data*) ;
 scalar_t__ FUNC_5 (int *,size_t,size_t) ;
 scalar_t__ FUNC_6 (int *,size_t,size_t) ;
 int * FUNC_7 (int *,size_t,size_t) ;
 scalar_t__ FUNC_8 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_9(struct auth_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 size_t VAR_3, int* VAR_4)
{
 struct auth_data* VAR_5;
 uint8_t* VAR_6 = VAR_1;
 uint16_t VAR_7 = FUNC_8(VAR_1, VAR_2, VAR_3);
 uint16_t VAR_8 = FUNC_5(VAR_1, VAR_2, VAR_3);
 size_t VAR_9 = ((size_t)FUNC_6(VAR_1, VAR_2,
  VAR_3))+2;

 uint8_t* VAR_10 = FUNC_7(VAR_1, VAR_2, VAR_3);

 if(VAR_8 != VAR_0->dclass) {
  FUNC_3("wrong class for RR");




  return 0;
 }
 VAR_5 = FUNC_2(VAR_0, VAR_6, VAR_3);
 if(!VAR_5) {


  *VAR_4 = 1;
  return 1;
 }
 if(!FUNC_1(VAR_5, VAR_7, VAR_10, VAR_9, VAR_4)) {

  return 0;
 }



 if(VAR_5->rrsets == ((void*)0)) {
  (void)FUNC_4(&VAR_0->data, VAR_5);
  FUNC_0(VAR_5);
 }
 return 1;
}

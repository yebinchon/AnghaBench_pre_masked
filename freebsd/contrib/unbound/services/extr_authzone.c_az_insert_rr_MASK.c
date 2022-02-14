
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct auth_zone {scalar_t__ dclass; } ;
struct auth_data {int dummy; } ;


 int FUNC_0 (struct auth_data*,scalar_t__,int ,int *,size_t,int*) ;
 struct auth_data* FUNC_1 (struct auth_zone*,int *,size_t) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,size_t,size_t) ;
 scalar_t__ FUNC_4 (int *,size_t,size_t) ;
 int * FUNC_5 (int *,size_t,size_t) ;
 int FUNC_6 (int *,size_t,size_t) ;
 scalar_t__ FUNC_7 (int *,size_t,size_t) ;

__attribute__((used)) static int
FUNC_8(struct auth_zone* VAR_0, uint8_t* VAR_1, size_t VAR_2,
 size_t VAR_3, int* VAR_4)
{
 struct auth_data* VAR_5;
 uint8_t* VAR_6 = VAR_1;
 uint16_t VAR_7 = FUNC_7(VAR_1, VAR_2, VAR_3);
 uint16_t VAR_8 = FUNC_3(VAR_1, VAR_2, VAR_3);
 uint32_t VAR_9 = FUNC_6(VAR_1, VAR_2, VAR_3);
 size_t VAR_10 = ((size_t)FUNC_4(VAR_1, VAR_2,
  VAR_3))+2;

 uint8_t* VAR_11 = FUNC_5(VAR_1, VAR_2, VAR_3);

 if(VAR_8 != VAR_0->dclass) {
  FUNC_2("wrong class for RR");
  return 0;
 }
 if(!(VAR_5=FUNC_1(VAR_0, VAR_6, VAR_3))) {
  FUNC_2("cannot create domain");
  return 0;
 }
 if(!FUNC_0(VAR_5, VAR_7, VAR_9, VAR_11, VAR_10,
  VAR_4)) {
  FUNC_2("cannot add RR to domain");
  return 0;
 }
 return 1;
}

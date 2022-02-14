
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct data FUNC_3 (struct data,int *,int) ;
 int FUNC_4 (char*,int) ;

struct data FUNC_5(struct data VAR_0, uint64_t VAR_1, int VAR_2)
{
 uint8_t VAR_3;
 uint16_t VAR_4;
 uint32_t VAR_5;
 uint64_t VAR_6;

 switch (VAR_2) {
 case 8:
  VAR_3 = VAR_1;
  return FUNC_3(VAR_0, &VAR_3, 1);

 case 16:
  VAR_4 = FUNC_0(VAR_1);
  return FUNC_3(VAR_0, &VAR_4, 2);

 case 32:
  VAR_5 = FUNC_1(VAR_1);
  return FUNC_3(VAR_0, &VAR_5, 4);

 case 64:
  VAR_6 = FUNC_2(VAR_1);
  return FUNC_3(VAR_0, &VAR_6, 8);

 default:
  FUNC_4("Invalid literal size (%d)\n", VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct vatpit {int dummy; } ;
struct channel {int olbyte; int initial; int* ol; int status; int now_bt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vatpit*,struct channel*) ;

__attribute__((used)) static uint16_t
FUNC_3(struct vatpit *VAR_2, struct channel *VAR_3, bool VAR_4)
{
 uint16_t VAR_5;
 uint64_t VAR_6;


 if (VAR_4 && VAR_3->olbyte != 0)
  return (0);

 if (VAR_3->initial == 0) {
  VAR_3->initial = FUNC_0(VAR_0, 100);
  FUNC_1(&VAR_3->now_bt);
  VAR_3->status &= ~VAR_1;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 VAR_5 = VAR_3->initial - VAR_6 % VAR_3->initial;

 if (VAR_4) {
  VAR_3->olbyte = 2;
  VAR_3->ol[1] = VAR_5;
  VAR_3->ol[0] = VAR_5 >> 8;
 }

 return (VAR_5);
}

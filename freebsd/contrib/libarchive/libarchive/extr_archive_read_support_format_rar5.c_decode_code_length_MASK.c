
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct rar5 {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct rar5*,int const*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct rar5* VAR_1, const uint8_t* VAR_2,
    uint16_t VAR_3)
{
 int VAR_4, VAR_5 = 2;
 if(VAR_3 < 8) {
  VAR_4 = 0;
  VAR_5 += VAR_3;
 } else {
  VAR_4 = VAR_3 / 4 - 1;
  VAR_5 += (4 | (VAR_3 & 3)) << VAR_4;
 }

 if(VAR_4 > 0) {
  int VAR_6;

  if(VAR_0 != FUNC_0(VAR_1, VAR_2, VAR_4, &VAR_6))
   return -1;

  VAR_5 += VAR_6;
 }

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct rar5 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct rar5*,int const*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct rar5*,int const*,int,int*) ;
 int FUNC_2 (struct rar5*,int) ;

__attribute__((used)) static int FUNC_3(struct rar5* VAR_2, const uint8_t* VAR_3,
    uint32_t* VAR_4)
{
 int VAR_5, VAR_6;
 uint32_t VAR_7 = 0;

 if(VAR_1 != FUNC_1(VAR_2, VAR_3, 2, &VAR_6))
  return VAR_0;

 VAR_6++;

 for(VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  uint16_t VAR_8;

  if(VAR_1 != FUNC_0(VAR_2, VAR_3, &VAR_8)) {
   return VAR_0;
  }



  VAR_7 += ((uint32_t) VAR_8 >> 8) << (VAR_5 * 8);
  FUNC_2(VAR_2, 8);
 }

 *VAR_4 = VAR_7;
 return VAR_1;
}

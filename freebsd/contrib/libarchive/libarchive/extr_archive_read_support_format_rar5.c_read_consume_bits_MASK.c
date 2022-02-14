
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct rar5 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rar5*,int const*,scalar_t__*) ;
 int FUNC_1 (struct rar5*,int) ;

__attribute__((used)) static int FUNC_2(struct rar5* VAR_2, const uint8_t* VAR_3, int VAR_4,
    int* VAR_5)
{
 uint16_t VAR_6;
 int VAR_7, VAR_8;

 if(VAR_4 == 0 || VAR_4 > 16) {


  return VAR_0;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_6);
 if(VAR_7 != VAR_1)
  return VAR_7;

 VAR_8 = (int) VAR_6;
 VAR_8 >>= 16 - VAR_4;

 FUNC_1(VAR_2, VAR_4);

 if(VAR_5)
  *VAR_5 = VAR_8;

 return VAR_1;
}

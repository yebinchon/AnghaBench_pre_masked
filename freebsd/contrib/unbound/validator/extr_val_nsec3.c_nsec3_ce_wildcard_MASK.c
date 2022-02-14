
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regional {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*,size_t) ;
 scalar_t__ FUNC_2 (struct regional*,size_t) ;

__attribute__((used)) static uint8_t*
FUNC_3(struct regional* VAR_1, uint8_t* VAR_2, size_t VAR_3,
 size_t* VAR_4)
{
 uint8_t* VAR_5;
 if(VAR_3 > VAR_0 - 2)
  return 0;
 VAR_5 = (uint8_t*)FUNC_2(VAR_1, VAR_3+2);
 if(!VAR_5) {
  FUNC_0("nsec3 wildcard: out of memory");
  return 0;
 }
 VAR_5[0] = 1;
 VAR_5[1] = (uint8_t)'*';
 FUNC_1(VAR_5+2, VAR_2, VAR_3);
 *VAR_4 = VAR_3+2;
 return VAR_5;
}

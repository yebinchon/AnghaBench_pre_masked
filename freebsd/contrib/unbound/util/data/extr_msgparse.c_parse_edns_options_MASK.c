
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
struct regional {int dummy; } ;
struct edns_data {int dummy; } ;


 int FUNC_0 (struct edns_data*,struct regional*,size_t,size_t,int *) ;
 int FUNC_1 (char*) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(uint8_t* VAR_0, size_t VAR_1,
 struct edns_data* VAR_2, struct regional* VAR_3)
{


 while(VAR_1 >= 4) {
  uint16_t VAR_4 = FUNC_2(VAR_0);
  uint16_t VAR_5 = FUNC_2(VAR_0+2);
  VAR_0 += 4;
  VAR_1 -= 4;
  if(VAR_5 > VAR_1)
   break;
  if(!FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
   VAR_0)) {
   FUNC_1("out of memory");
   return 0;
  }
  VAR_0 += VAR_5;
  VAR_1 -= VAR_5;
 }
 return 1;
}

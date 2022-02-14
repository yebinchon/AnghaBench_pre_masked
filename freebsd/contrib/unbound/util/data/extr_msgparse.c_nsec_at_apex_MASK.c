
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef int sldns_buffer ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *,int) ;

__attribute__((used)) static int
FUNC_7(sldns_buffer* VAR_0)
{

 size_t VAR_1 = FUNC_1(VAR_0);
 uint16_t VAR_2;
 if(FUNC_4(VAR_0) < 7)
  return 0;
 FUNC_6(VAR_0, 4); ;
 VAR_2 = FUNC_2(VAR_0);
 if(FUNC_4(VAR_0) < VAR_2) {
  FUNC_5(VAR_0, VAR_1);
  return 0;
 }

 if(FUNC_0(VAR_0) == 0) {
  FUNC_5(VAR_0, VAR_1);
  return 0;
 }


 if(FUNC_1(VAR_0) < VAR_1+4+VAR_2) {

  uint8_t VAR_3, VAR_4, VAR_5;

  if(FUNC_1(VAR_0)+3 > VAR_1+4+VAR_2) {
   FUNC_5(VAR_0, VAR_1);
   return 0;
  }
  VAR_3 = FUNC_3(VAR_0);
  VAR_4 = FUNC_3(VAR_0);
  VAR_5 = FUNC_3(VAR_0);


  if(VAR_3 == 0 && VAR_4 >= 1 && (VAR_5 & 0x02)) {
   FUNC_5(VAR_0, VAR_1);
   return 1;
  }
 }

 FUNC_5(VAR_0, VAR_1);
 return 0;
}

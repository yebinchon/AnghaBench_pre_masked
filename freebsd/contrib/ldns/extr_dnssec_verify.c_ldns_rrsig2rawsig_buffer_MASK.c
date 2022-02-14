
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_buffer ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int const*,int) ;

__attribute__((used)) static ldns_status
FUNC_7(ldns_buffer* VAR_6, const ldns_rr* VAR_7)
{
 uint8_t VAR_8;

 if (VAR_7 == ((void*)0)) {
  return VAR_1;
 }
 if (FUNC_6(VAR_7, 1) == ((void*)0)) {
  return VAR_4;
 }
 VAR_8 = FUNC_5(FUNC_6(VAR_7, 1));







 switch(VAR_8) {
 case 132:
 case 131:
 case 130:







  if (FUNC_6(VAR_7, 8) == ((void*)0)) {
   return VAR_4;
  }
  if (FUNC_4(VAR_6, FUNC_6(VAR_7, 8))
           != VAR_5) {
   return VAR_3;
  }
  break;
 case 142:
 case 139:
 case 133:
  return VAR_0;
 default:
  return VAR_2;
 }
 return VAR_5;
}

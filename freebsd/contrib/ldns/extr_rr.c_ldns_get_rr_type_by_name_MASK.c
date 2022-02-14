
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr_type ;
struct TYPE_3__ {char* _name; int _type; } ;
typedef TYPE_1__ ldns_rr_descriptor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char const*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

ldns_rr_type
FUNC_3(const char *VAR_2)
{
 unsigned int VAR_3;
 const char *VAR_4;
 const ldns_rr_descriptor *VAR_5;


 if (FUNC_1(VAR_2) > 4 && FUNC_2(VAR_2, "TYPE", 4) == 0) {
  return FUNC_0(VAR_2 + 4);
 }


 for (VAR_3 = 0; VAR_3 < (unsigned int) VAR_0; VAR_3++) {
  VAR_5 = &VAR_1[VAR_3];
  VAR_4 = VAR_5->_name;
  if(VAR_4 &&
     FUNC_1(VAR_2) == FUNC_1(VAR_4) &&
     FUNC_2(VAR_2, VAR_4, FUNC_1(VAR_4)) == 0) {

   return VAR_5->_type;
  }
 }


 if (FUNC_1(VAR_2) == 4 && FUNC_2(VAR_2, "IXFR", 4) == 0) {
  return 251;
 } else if (FUNC_1(VAR_2) == 4 && FUNC_2(VAR_2, "AXFR", 4) == 0) {
  return 252;
 } else if (FUNC_1(VAR_2) == 5 && FUNC_2(VAR_2, "MAILB", 5) == 0) {
  return 253;
 } else if (FUNC_1(VAR_2) == 5 && FUNC_2(VAR_2, "MAILA", 5) == 0) {
  return 254;
 } else if (FUNC_1(VAR_2) == 3 && FUNC_2(VAR_2, "ANY", 3) == 0) {
  return 255;
 }

 return 0;
}

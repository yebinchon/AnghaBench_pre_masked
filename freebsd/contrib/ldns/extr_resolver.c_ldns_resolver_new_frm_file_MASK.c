
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_resolver ;
typedef int FILE ;


 char const* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,int *) ;

ldns_status
FUNC_4(ldns_resolver **VAR_4, const char *VAR_5)
{
 ldns_resolver *VAR_6;
 FILE *VAR_7;
 ldns_status VAR_8;

 if (!VAR_5) {
  VAR_7 = FUNC_1(VAR_0, "r");

 } else {
  VAR_7 = FUNC_1(VAR_5, "r");
 }
 if (!VAR_7) {
  return VAR_1;
 }

 VAR_8 = FUNC_3(&VAR_6, VAR_7);
 FUNC_0(VAR_7);
 if (VAR_8 == VAR_3) {
  if (VAR_4) {
   *VAR_4 = VAR_6;
   return VAR_3;
  } else {
   FUNC_2(VAR_6);
   return VAR_2;
  }
 }
 return VAR_8;
}

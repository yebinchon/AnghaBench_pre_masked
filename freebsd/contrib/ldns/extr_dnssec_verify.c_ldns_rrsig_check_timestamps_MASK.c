
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static ldns_status
FUNC_3(const ldns_rr* VAR_4, time_t VAR_5)
{
 int32_t VAR_6, VAR_7;


 VAR_6 = (int32_t)FUNC_0(
  FUNC_2(VAR_4));
 VAR_7 = (int32_t)FUNC_0(
  FUNC_1(VAR_4));

 if (VAR_7 - VAR_6 < 0) {

  return VAR_0;
 }
 if (((int32_t) VAR_5) - VAR_6 < 0) {

  return VAR_2;
 }
 if (VAR_7 - ((int32_t) VAR_5) < 0) {

  return VAR_1;
 }
 return VAR_3;
}

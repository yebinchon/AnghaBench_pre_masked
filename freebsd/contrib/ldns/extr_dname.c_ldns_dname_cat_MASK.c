
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int const ldns_rdf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int) ;
 int FUNC_5 (int const*,scalar_t__) ;
 scalar_t__ FUNC_6 (int const*) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

ldns_status
FUNC_8(ldns_rdf *VAR_6, const ldns_rdf *VAR_7)
{
 uint16_t VAR_8;
 uint16_t VAR_9;
 VAR_5* VAR_4;

 if (FUNC_3(VAR_6) != VAR_0 ||
   FUNC_3(VAR_7) != VAR_0) {
  return VAR_1;
 }




 VAR_8 = FUNC_6(VAR_6);
 if (FUNC_1(VAR_6)) {
  VAR_8--;
 }

 VAR_9 = VAR_8 + FUNC_6(VAR_7);
 VAR_4 = FUNC_0(FUNC_2(VAR_6), VAR_5, VAR_9);
 if(!VAR_4) {
  return VAR_2;
 }

 FUNC_4(VAR_6, VAR_4);
 FUNC_7(FUNC_2(VAR_6) + VAR_8, FUNC_2(VAR_7),
   FUNC_6(VAR_7));
 FUNC_5(VAR_6, VAR_9);

 return VAR_3;
}

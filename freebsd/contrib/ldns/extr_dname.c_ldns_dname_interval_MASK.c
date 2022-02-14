
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*) ;

int
FUNC_3(const ldns_rdf *VAR_1, const ldns_rdf *VAR_2,
  const ldns_rdf *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(FUNC_2(VAR_1) == VAR_0);
 FUNC_0(FUNC_2(VAR_2) == VAR_0);
 FUNC_0(FUNC_2(VAR_3) == VAR_0);

 VAR_4 = FUNC_1(VAR_1, VAR_2);
 VAR_5 = FUNC_1(VAR_2, VAR_3);



 if (VAR_5 == 0) {
  return 0;
 }


 if ((VAR_4 == -1 || VAR_4 == 0) &&

   VAR_5 == -1) {
  return -1;
 } else {
  return 1;
 }
}

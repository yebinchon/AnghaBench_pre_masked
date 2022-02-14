
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;


 scalar_t__ FUNC_0 (int const*,int const*) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 scalar_t__ FUNC_2 (int const*) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;

int
FUNC_5(const ldns_rdf *VAR_0, const ldns_rdf *VAR_1)
{
 ldns_rdf *VAR_2;
 int VAR_3;

 if (FUNC_2(VAR_1)) {



  VAR_2 = FUNC_3(VAR_1);
  VAR_3 = (int) FUNC_1(VAR_0, VAR_2);
  FUNC_4(VAR_2);
 } else {
  VAR_3 = (FUNC_0(VAR_0, VAR_1) == 0);
 }
 return VAR_3;
}

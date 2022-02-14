
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;


 int FUNC_0 (int) ;
 size_t* FUNC_1 (int const*) ;
 size_t FUNC_2 (int const*) ;

__attribute__((used)) static bool
FUNC_3(const ldns_rdf* VAR_0)
{
 size_t VAR_1;
 size_t VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < FUNC_2(VAR_0); VAR_1 += VAR_2 + 1) {
  VAR_2 = FUNC_1(VAR_0)[VAR_1];
 }
 FUNC_0(VAR_1 == FUNC_2(VAR_0));

 return VAR_1 > 0 && VAR_2 == 0;
}

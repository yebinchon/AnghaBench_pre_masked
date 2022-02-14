
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ldns_rdf ;
typedef int data ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int *,int ,int) ;

uint8_t
FUNC_3(const ldns_rdf *VAR_1)
{
 uint8_t VAR_2;


 if (FUNC_1(VAR_1) != VAR_0) {
  return 0;
 }

 FUNC_2(&VAR_2, FUNC_0(VAR_1), sizeof(VAR_2));
 return VAR_2;
}

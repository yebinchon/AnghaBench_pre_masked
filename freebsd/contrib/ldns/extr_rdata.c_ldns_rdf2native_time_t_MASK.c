
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;
typedef int ldns_rdf ;
typedef int data ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ) ;

time_t
FUNC_5(const ldns_rdf *VAR_2)
{
 uint32_t VAR_3;


 if (FUNC_2(VAR_2) != VAR_0 ||
   FUNC_1(VAR_2) != VAR_1) {
  return 0;
 }
 FUNC_3(&VAR_3, FUNC_0(VAR_2), sizeof(VAR_3));
 return (time_t)FUNC_4(VAR_3);
}

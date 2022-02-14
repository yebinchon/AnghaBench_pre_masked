
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int * FUNC_1 (int ,int,int **) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

ldns_status
FUNC_5(ldns_rdf **VAR_4, const char *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 uint16_t VAR_10[4];
 int VAR_11;

 if (FUNC_2(VAR_5, "%4x:%4x:%4x:%4x%n", &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_11) != 4 ||
   VAR_11 != (int)FUNC_3(VAR_5) ||
   FUNC_4(VAR_5, "+-")
   ) {
  return VAR_1;
 } else {
  VAR_10[0] = FUNC_0(VAR_6);
  VAR_10[1] = FUNC_0(VAR_7);
  VAR_10[2] = FUNC_0(VAR_8);
  VAR_10[3] = FUNC_0(VAR_9);
  *VAR_4 = FUNC_1(
   VAR_0, 4 * sizeof(uint16_t), &VAR_10);
 }
 return *VAR_4 ? VAR_3 : VAR_2;
}

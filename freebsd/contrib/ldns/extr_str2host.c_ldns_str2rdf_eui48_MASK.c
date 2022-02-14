
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int,unsigned int**) ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,int*) ;
 scalar_t__ FUNC_2 (char const*) ;

ldns_status
FUNC_3(ldns_rdf **VAR_4, const char *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 uint8_t VAR_12[6];
 int VAR_13;

 if (FUNC_1(VAR_5, "%2x-%2x-%2x-%2x-%2x-%2x%n",
   &VAR_6, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_11, &VAR_13) != 6 ||
   VAR_13 != (int)FUNC_2(VAR_5)) {
  return VAR_1;
 } else {
  VAR_12[0] = VAR_6;
  VAR_12[1] = VAR_7;
  VAR_12[2] = VAR_8;
  VAR_12[3] = VAR_9;
  VAR_12[4] = VAR_10;
  VAR_12[5] = VAR_11;
  *VAR_4 = FUNC_0(VAR_0, 6, &VAR_12);
 }
 return *VAR_4 ? VAR_3 : VAR_2;
}

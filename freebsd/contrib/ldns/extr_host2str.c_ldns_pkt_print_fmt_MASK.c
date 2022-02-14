
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_pkt ;
typedef int ldns_output_format ;
typedef int FILE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int const*,int const*) ;

void
FUNC_3(FILE *VAR_0,
  const ldns_output_format *VAR_1, const ldns_pkt *VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3) {
  FUNC_1(VAR_0, "%s", VAR_3);
 } else {
  FUNC_1(VAR_0, ";Unable to convert packet to string\n");
 }
 FUNC_0(VAR_3);
}

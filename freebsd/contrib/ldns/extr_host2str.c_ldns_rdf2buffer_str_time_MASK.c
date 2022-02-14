
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct tm {int dummy; } ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int ,int ,struct tm*) ;
 int FUNC_4 (struct tm*,int ,int) ;
 scalar_t__ FUNC_5 (char*,int,char*,struct tm*) ;
 int FUNC_6 (int *) ;

ldns_status
FUNC_7(ldns_buffer *VAR_0, const ldns_rdf *VAR_1)
{

 struct tm VAR_2;
 char VAR_3[16];

 FUNC_4(&VAR_2, 0, sizeof(VAR_2));
 if (FUNC_3(FUNC_2(VAR_1), FUNC_6(((void*)0)), &VAR_2)
     && FUNC_5(VAR_3, 15, "%Y%m%d%H%M%S", &VAR_2)) {
  FUNC_0(VAR_0, "%s", VAR_3);
 }
 return FUNC_1(VAR_0);
}

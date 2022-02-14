
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_dane_transport ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int * FUNC_3 (scalar_t__,int,char*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (char*,int ,int) ;
 scalar_t__ FUNC_6 (char*,int,char*,...) ;

ldns_status
FUNC_7(ldns_rdf** VAR_6, const ldns_rdf* VAR_7,
  uint16_t VAR_8, ldns_dane_transport VAR_9)
{
 char VAR_10[VAR_0];
 size_t VAR_11;

 FUNC_0(VAR_6 != ((void*)0));
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_0(FUNC_2(VAR_7) == VAR_1);

 VAR_11 = (size_t)FUNC_6(VAR_10, VAR_0, "X_%d", (int)VAR_8);
 VAR_10[0] = (char)(VAR_11 - 1);

 switch(VAR_9) {
 case 129:
  VAR_11 += FUNC_6(VAR_10 + VAR_11, VAR_0 - VAR_11, "\004_tcp");
  break;

 case 128:
  VAR_11 += FUNC_6(VAR_10 + VAR_11, VAR_0 - VAR_11, "\004_udp");
  break;

 case 130:
  VAR_11 += FUNC_6(VAR_10 + VAR_11, VAR_0 - VAR_11, "\005_sctp");
  break;

 default:
  return VAR_2;
 }
 if (VAR_11 + FUNC_4(VAR_7) > VAR_0) {
  return VAR_3;
 }
 FUNC_5(VAR_10 + VAR_11, FUNC_1(VAR_7), FUNC_4(VAR_7));
 *VAR_6 = FUNC_3(VAR_1,
   VAR_11 + FUNC_4(VAR_7), VAR_10);
 if (*VAR_6 == ((void*)0)) {
  return VAR_4;
 }
 return VAR_5;
}

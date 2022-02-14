
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rr ;
typedef int const ldns_rdf ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const*,int const*) ;
 scalar_t__ FUNC_2 (int const*,int const*) ;
 int const* FUNC_3 (int const*) ;
 int const* FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int const* FUNC_6 (int const*) ;
 char* FUNC_7 (int const*) ;
 int const* FUNC_8 (int *) ;
 int FUNC_9 (int const*) ;
 scalar_t__ FUNC_10 (int const*) ;
 int const* FUNC_11 (int const*) ;
 int * FUNC_12 (int const*,int ) ;
 int FUNC_13 (char*,char*) ;

bool
FUNC_14(const ldns_rr *VAR_3, const ldns_rdf *VAR_4)
{
 ldns_rdf *VAR_5 = FUNC_11(VAR_3);
 ldns_rdf *VAR_6;
 char *VAR_7;
 ldns_rdf *VAR_8 = ((void*)0);
 ldns_status VAR_9;
 ldns_rdf *VAR_10;
 bool VAR_11;

 if (FUNC_10(VAR_3) == VAR_0) {
  if (FUNC_12(VAR_3, 0) != ((void*)0)) {
   VAR_8 = FUNC_8(FUNC_12(VAR_3, 0));
  } else {
   return 0;
  }
 } else if (FUNC_10(VAR_3) == VAR_1) {
  VAR_6 = FUNC_6(VAR_3);
  VAR_7 = FUNC_7(VAR_6);
  VAR_8 = FUNC_4(VAR_7);
  FUNC_0(VAR_7);
  VAR_10 = FUNC_3(VAR_5);
  VAR_9 = FUNC_1(VAR_8, VAR_10);
  FUNC_9(VAR_10);
  if (VAR_9 != VAR_2) {
   FUNC_13("error catting: %s\n", FUNC_5(VAR_9));
  }
 } else {
  FUNC_9(VAR_8);
  return 0;
 }


 if(FUNC_2(VAR_5, VAR_8) > 0) {
  VAR_11 = (FUNC_2(VAR_5, VAR_4) <= 0 ||
    FUNC_2(VAR_4, VAR_8) < 0);
 } else if(FUNC_2(VAR_5, VAR_8) < 0) {
  VAR_11 = (FUNC_2(VAR_5, VAR_4) <= 0 &&
            FUNC_2(VAR_4, VAR_8) < 0);
 } else {
  VAR_11 = 1;
 }

 FUNC_9(VAR_8);
 return VAR_11;
}

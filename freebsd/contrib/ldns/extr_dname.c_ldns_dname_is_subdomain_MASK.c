
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int const ldns_rdf ;
typedef scalar_t__ int8_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 int const* FUNC_1 (int const*,int ) ;
 int const* FUNC_2 (int const*,scalar_t__) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*,int const*) ;
 int FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;

bool
FUNC_7(const ldns_rdf *VAR_1, const ldns_rdf *VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;
 int8_t VAR_5, VAR_6;
 ldns_rdf *VAR_7 = ((void*)0);
 ldns_rdf *VAR_8 = ((void*)0);
    ldns_rdf *VAR_9;
    ldns_rdf *VAR_10;
    bool VAR_11 = 1;

 if (FUNC_6(VAR_1) != VAR_0 ||
   FUNC_6(VAR_2) != VAR_0 ||
   FUNC_4(VAR_1, VAR_2) == 0) {
  return 0;
 }


    VAR_9 = FUNC_1(VAR_1, 0);
    VAR_10 = FUNC_1(VAR_2, 0);
    FUNC_0(VAR_9);
    FUNC_0(VAR_10);

 VAR_3 = FUNC_3(VAR_9);
 VAR_4 = FUNC_3(VAR_10);


 if (VAR_3 < VAR_4) {
  VAR_11 = 0;
 } else {



  VAR_6 = VAR_3 - 1;
  for (VAR_5 = VAR_4 -1; VAR_5 >= 0; VAR_5--) {
   VAR_7 = FUNC_2(VAR_9, VAR_6);
   VAR_8 = FUNC_2(VAR_10, VAR_5);
   if (!VAR_7 || !VAR_8) {

    FUNC_5(VAR_7);
    FUNC_5(VAR_8);
    VAR_11 = 0;
    break;
   }

   if (FUNC_4(VAR_7, VAR_8) != 0) {

    FUNC_5(VAR_7);
    FUNC_5(VAR_8);
    VAR_11 = 0;
    break;
   }
   FUNC_5(VAR_7);
   FUNC_5(VAR_8);
   VAR_6--;
  }
 }
 FUNC_5(VAR_9);
 FUNC_5(VAR_10);
 return VAR_11;
}

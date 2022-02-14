
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int const*) ;
 size_t FUNC_5 (int const*) ;

ldns_status
FUNC_6(ldns_buffer *VAR_2, const ldns_rdf *VAR_3)
{

 uint8_t VAR_4 = 0;
 uint8_t VAR_5;
 uint8_t *VAR_6;
 uint8_t VAR_7;
 unsigned char VAR_8;

 VAR_6 = (uint8_t*)FUNC_4(VAR_3);
 VAR_5 = VAR_6[VAR_4];

 if (FUNC_5(VAR_3) > VAR_0) {

  return VAR_1;
 }


 if (1 == FUNC_5(VAR_3)) {
  FUNC_2(VAR_2, ".");
 } else {
  while ((VAR_5 > 0) && VAR_4 < FUNC_5(VAR_3)) {
   VAR_4++;
   for(VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {



    VAR_8 = (unsigned char) VAR_6[VAR_4];
    if(VAR_8 == '.' || VAR_8 == ';' ||
       VAR_8 == '(' || VAR_8 == ')' ||
       VAR_8 == '\\') {
     FUNC_2(VAR_2, "\\%c",
       VAR_6[VAR_4]);
    } else if (!(FUNC_0(VAR_8) && FUNC_1(VAR_8))) {
     FUNC_2(VAR_2, "\\%03u",
              VAR_6[VAR_4]);
    } else {
     FUNC_2(VAR_2, "%c", VAR_6[VAR_4]);
    }
    VAR_4++;
   }

   if (VAR_4 < FUNC_5(VAR_3)) {
    FUNC_2(VAR_2, ".");
   }
   VAR_5 = VAR_6[VAR_4];
  }
 }
 return FUNC_3(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;

ldns_status
FUNC_4(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
 uint8_t VAR_3;
 uint8_t VAR_4;

 uint8_t *VAR_5 = FUNC_2(VAR_2);

        if(FUNC_3(VAR_2) < 1) {
                return VAR_0;
        }
 VAR_3 = VAR_5[0];

 if (VAR_3 == 0 || ((size_t)VAR_3)+1 > FUNC_3(VAR_2)) {
  FUNC_0(VAR_1, "- ");
 } else {
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
   FUNC_0(VAR_1, "%02x", VAR_5[1 + VAR_4]);
  }
  FUNC_0(VAR_1, " ");
 }

 return FUNC_1(VAR_1);
}

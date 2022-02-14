
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (unsigned char) ;
 int FUNC_1 (int *,char*,char) ;
 int FUNC_2 (int *) ;
 size_t* FUNC_3 (int const*) ;
 size_t FUNC_4 (int const*) ;

ldns_status
FUNC_5(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
 size_t VAR_3;
 const uint8_t* VAR_4;
 char VAR_5;
 if (FUNC_4(VAR_2) < 2) {
  return VAR_0;
 }
 VAR_3 = FUNC_3(VAR_2)[0];
 if (VAR_3 >= FUNC_4(VAR_2) ||
   VAR_3 < 1) {
  return VAR_0;
 }
 VAR_4 = FUNC_3(VAR_2) + 1;
 while (VAR_3 > 0) {
  VAR_5 = (char)*VAR_4++;
  if (! FUNC_0((unsigned char)VAR_5)) {
   return VAR_0;
  }
  FUNC_1(VAR_1, "%c", VAR_5);
  VAR_3--;
 }
 return FUNC_2(VAR_1);
}

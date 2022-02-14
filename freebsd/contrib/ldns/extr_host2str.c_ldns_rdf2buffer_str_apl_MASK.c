
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int* FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;
 int FUNC_4 (int*) ;

ldns_status
FUNC_5(ldns_buffer *VAR_5, const ldns_rdf *VAR_6)
{
 uint8_t *VAR_7 = FUNC_2(VAR_6);
 uint16_t VAR_8;
 uint8_t VAR_9;
 bool VAR_10;
 uint8_t VAR_11;
 size_t VAR_12;
 size_t VAR_13 = 0;

 while (VAR_13 < (unsigned int) FUNC_3(VAR_6)) {
                if(VAR_13 + 3 >= (unsigned)FUNC_3(VAR_6))
                        return VAR_4;
  VAR_8 = FUNC_4(&VAR_7[VAR_13]);
  VAR_9 = VAR_7[VAR_13 + 2];
  VAR_10 = VAR_7[VAR_13 + 3] & VAR_3;
  VAR_11 = VAR_7[VAR_13 + 3] & VAR_2;
  if (VAR_8 == VAR_0) {

   if (VAR_10) {
    FUNC_0(VAR_5, "!");
   }
   FUNC_0(VAR_5, "%u:", VAR_8);

   for (VAR_12 = 0; VAR_12 < 4; VAR_12++) {
    if (VAR_12 > 0) {
     FUNC_0(VAR_5, ".");
    }
    if (VAR_12 < (unsigned short) VAR_11) {
                                        if(VAR_13+VAR_12+4 >= FUNC_3(VAR_6))
         return VAR_4;
     FUNC_0(VAR_5, "%d",
                        VAR_7[VAR_13 + VAR_12 + 4]);
    } else {
     FUNC_0(VAR_5, "0");
    }
   }
   FUNC_0(VAR_5, "/%u ", VAR_9);
  } else if (VAR_8 == VAR_1) {

   if (VAR_10) {
    FUNC_0(VAR_5, "!");
   }
   FUNC_0(VAR_5, "%u:", VAR_8);

   for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
    if (VAR_12 % 2 == 0 && VAR_12 > 0) {
     FUNC_0(VAR_5, ":");
    }
    if (VAR_12 < (unsigned short) VAR_11) {
                                        if(VAR_13+VAR_12+4 >= FUNC_3(VAR_6))
         return VAR_4;
     FUNC_0(VAR_5, "%02x",
                        VAR_7[VAR_13 + VAR_12 + 4]);
    } else {
     FUNC_0(VAR_5, "00");
    }
   }
   FUNC_0(VAR_5, "/%u ", VAR_9);

  } else {

   FUNC_0(VAR_5,
     "Unknown address family: %u data: ",
     VAR_8);
   for (VAR_12 = 1; VAR_12 < (unsigned short) (4 + VAR_11); VAR_12++) {
                                if(VAR_13+VAR_12 >= FUNC_3(VAR_6))
                                        return VAR_4;
    FUNC_0(VAR_5, "%02x", VAR_7[VAR_12]);
   }
  }
  VAR_13 += 4 + VAR_11;
 }
 return FUNC_1(VAR_5);
}

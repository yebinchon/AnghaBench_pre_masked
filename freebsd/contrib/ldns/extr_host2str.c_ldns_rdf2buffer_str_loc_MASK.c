
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int *,int const*) ;
 scalar_t__* FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__,scalar_t__) ;

ldns_status
FUNC_8(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{

 uint8_t VAR_3;
 uint8_t VAR_4;
 uint8_t VAR_5;
 uint8_t VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 char VAR_10;
 char VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 double VAR_14;

 uint32_t VAR_15 = (uint32_t) FUNC_2(2, 31);

        if(FUNC_5(VAR_2) < 1) {
                return VAR_0;
        }
        VAR_3 = FUNC_4(VAR_2)[0];
 if (VAR_3 == 0) {
  if(FUNC_5(VAR_2) < 16) {
   return VAR_0;
  }
  VAR_4 = FUNC_4(VAR_2)[1];
  VAR_5 = FUNC_4(VAR_2)[2];
  VAR_6 = FUNC_4(VAR_2)[3];

  VAR_8 = FUNC_6(&FUNC_4(VAR_2)[4]);
  VAR_7 = FUNC_6(&FUNC_4(VAR_2)[8]);
  VAR_9 = FUNC_6(&FUNC_4(VAR_2)[12]);

  if (VAR_8 > VAR_15) {
   VAR_10 = 'N';
   VAR_8 = VAR_8 - VAR_15;
  } else {
   VAR_10 = 'S';
   VAR_8 = VAR_15 - VAR_8;
  }
  VAR_12 = VAR_8 / (1000 * 60 * 60);
  VAR_8 = VAR_8 % (1000 * 60 * 60);
  VAR_13 = VAR_8 / (1000 * 60);
  VAR_8 = VAR_8 % (1000 * 60);
  VAR_14 = (double) VAR_8 / 1000.0;
  FUNC_0(VAR_1, "%02u %02u %0.3f %c ",
   VAR_12, VAR_13, VAR_14, VAR_10);

  if (VAR_7 > VAR_15) {
   VAR_11 = 'E';
   VAR_7 = VAR_7 - VAR_15;
  } else {
   VAR_11 = 'W';
   VAR_7 = VAR_15 - VAR_7;
  }
  VAR_12 = VAR_7 / (1000 * 60 * 60);
  VAR_7 = VAR_7 % (1000 * 60 * 60);
  VAR_13 = VAR_7 / (1000 * 60);
  VAR_7 = VAR_7 % (1000 * 60);
  VAR_14 = (double) VAR_7 / (1000.0);
  FUNC_0(VAR_1, "%02u %02u %0.3f %c ",
   VAR_12, VAR_13, VAR_14, VAR_11);


  VAR_14 = ((double) VAR_9) / 100;
  VAR_14 -= 100000;

  if(VAR_9%100 != 0)
   FUNC_0(VAR_1, "%.2f", VAR_14);
  else
   FUNC_0(VAR_1, "%.0f", VAR_14);

  FUNC_0(VAR_1, "m ");

  FUNC_7(VAR_1, (VAR_4 & 0xf0) >> 4, VAR_4 & 0x0f);
  FUNC_0(VAR_1, "m ");

  FUNC_7(VAR_1, (VAR_5 & 0xf0) >> 4,
   VAR_5 & 0x0f);
  FUNC_0(VAR_1, "m ");

  FUNC_7(VAR_1, (VAR_6 & 0xf0) >> 4,
   VAR_6 & 0x0f);
  FUNC_0(VAR_1, "m");

  return FUNC_1(VAR_1);
 } else {
  return FUNC_3(VAR_1, VAR_2);
 }
}

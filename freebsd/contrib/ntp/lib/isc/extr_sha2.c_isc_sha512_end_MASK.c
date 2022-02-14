
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_uint8_t ;
typedef int isc_sha512_t ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int*,int ,int) ;
 void** VAR_1 ;

char *
FUNC_4(isc_sha512_t *VAR_2, char VAR_3[]) {
 isc_uint8_t VAR_4[VAR_0], *VAR_5 = VAR_4;
 unsigned int VAR_6;


 FUNC_1(VAR_2 != (isc_sha512_t *)0);

 if (VAR_3 != (char*)0) {
  FUNC_2(VAR_4, VAR_2);

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   *VAR_3++ = VAR_1[(*VAR_5 & 0xf0) >> 4];
   *VAR_3++ = VAR_1[*VAR_5 & 0x0f];
   VAR_5++;
  }
  *VAR_3 = (char)0;
 } else {



  FUNC_3(VAR_2, 0, sizeof(*VAR_2));

 }
 FUNC_3(VAR_4, 0, VAR_0);
 return VAR_3;
}

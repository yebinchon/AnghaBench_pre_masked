
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static int
FUNC_2(const uint8_t* VAR_0, size_t VAR_1,
  char* VAR_2, size_t VAR_3,
  bool VAR_4, bool VAR_5)
{
 size_t VAR_6;
 const char* VAR_7 = VAR_4 ? "0123456789abcdefghijklmnopqrstuv"
                                : "abcdefghijklmnopqrstuvwxyz234567";

 size_t VAR_8 = 0;




 VAR_6 = VAR_5 ? FUNC_0(VAR_1)
                      : FUNC_1(VAR_1);


 if (VAR_3 < VAR_6 + 1)
  return -1;


 VAR_2[VAR_6] = '\0';


 while (VAR_1 >= 5) {

  VAR_2[0] = VAR_7[(VAR_0[0] ) >> 3];


  VAR_2[1] = VAR_7[(VAR_0[0] & 0x07) << 2 | VAR_0[1] >> 6];


  VAR_2[2] = VAR_7[(VAR_0[1] & 0x3e) >> 1];


  VAR_2[3] = VAR_7[(VAR_0[1] & 0x01) << 4 | VAR_0[2] >> 4];


  VAR_2[4] = VAR_7[(VAR_0[2] & 0x0f) << 1 | VAR_0[3] >> 7];


  VAR_2[5] = VAR_7[(VAR_0[3] & 0x7c) >> 2];


  VAR_2[6] = VAR_7[(VAR_0[3] & 0x03) << 3 | VAR_0[4] >> 5];


  VAR_2[7] = VAR_7[(VAR_0[4] & 0x1f) ];

  VAR_1 -= 5;
  VAR_0 += 5;
  VAR_2 += 8;
 }

 switch (VAR_1) {
 case 4:
  VAR_2[6] = VAR_7[(VAR_0[3] & 0x03) << 3];


  VAR_2[5] = VAR_7[(VAR_0[3] & 0x7c) >> 2];


           VAR_8 = VAR_0[3] >> 7 ;
 case 3: VAR_2[4] = VAR_7[(VAR_0[2] & 0x0f) << 1 | VAR_8];


    VAR_8 = VAR_0[2] >> 4 ;
 case 2: VAR_2[3] = VAR_7[(VAR_0[1] & 0x01) << 4 | VAR_8];


  VAR_2[2] = VAR_7[(VAR_0[1] & 0x3e) >> 1];


                  VAR_8 = VAR_0[1] >> 6 ;
 case 1: VAR_2[1] = VAR_7[(VAR_0[0] & 0x07) << 2 | VAR_8];


  VAR_2[0] = VAR_7[ VAR_0[0] >> 3];
 }

 if (VAR_5) {
  switch (VAR_1) {
   case 1: VAR_2[2] = '=';
    VAR_2[3] = '=';
   case 2: VAR_2[4] = '=';
   case 3: VAR_2[5] = '=';
    VAR_2[6] = '=';
   case 4: VAR_2[7] = '=';
  }
 }
 return (int)VAR_6;
}

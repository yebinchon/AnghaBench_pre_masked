
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,unsigned char*,int) ;

__attribute__((used)) static krb5_error_code
FUNC_3(unsigned char *VAR_1, size_t VAR_2)
{
    unsigned char *VAR_3;
    int VAR_4 = (VAR_2 + 7) / 8;
    int VAR_5;
    if(VAR_2 == 0)
 return 0;
    {
 const int VAR_6 = 13 % VAR_2;
 const int VAR_7 = VAR_2 % 8;

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3 == ((void*)0))
     return VAR_0;
 FUNC_2(VAR_3, VAR_1, VAR_4);
 if(VAR_7) {

     VAR_3[VAR_4 - 1] &= 0xff << (8 - VAR_7);
     for(VAR_5 = VAR_7; VAR_5 < 8; VAR_5 += VAR_2)
  VAR_3[VAR_4 - 1] |= VAR_1[0] >> VAR_5;
 }
 for(VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
     int VAR_8;
     int VAR_9, VAR_10, VAR_11, VAR_12;

     VAR_8 = 8 * VAR_5 - VAR_6;
     while(VAR_8 < 0)
  VAR_8 += VAR_2;

     VAR_9 = VAR_8 / 8;
     VAR_10 = VAR_8 % 8;

     if(VAR_8 + 8 > VAR_4 * 8)

  VAR_12 = (VAR_2 + 8 - VAR_10) % 8;
     else
  VAR_12 = 8 - VAR_10;
     VAR_11 = (VAR_9 + 1) % VAR_4;
     VAR_1[VAR_5] = (VAR_3[VAR_9] << VAR_10) | (VAR_3[VAR_11] >> VAR_12);
 }
 FUNC_0(VAR_3);
    }
    return 0;
}

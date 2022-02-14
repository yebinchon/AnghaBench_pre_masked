
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int,char* const,...) ;

enum localzone_type
FUNC_2(const uint8_t* VAR_1, size_t VAR_2,
 const uint8_t* VAR_3, size_t VAR_4, const uint8_t* VAR_5,
 size_t VAR_6, enum localzone_type VAR_7, int* VAR_8,
 char* const* VAR_9, int VAR_10)
{
 size_t VAR_11, VAR_12;
 uint8_t VAR_13;

 for(VAR_11=0; VAR_11<VAR_2 && VAR_11<VAR_4; VAR_11++) {
  VAR_13 = (VAR_1[VAR_11] & VAR_3[VAR_11]);
  for(VAR_12=0; VAR_12<8 && VAR_13>0; VAR_12++) {
   if((VAR_13 & 0x1)) {
    *VAR_8 = (int)(VAR_11*8+VAR_12);
    FUNC_1(VAR_0, "matched tag [%d] %s",
     *VAR_8, (*VAR_8<VAR_10?VAR_9[*VAR_8]:"null"));

    if(VAR_11*8+VAR_12 < VAR_6 && VAR_5
       && VAR_5[VAR_11*8+VAR_12] != 0) {
      FUNC_1(VAR_0, "tag action [%d] %s to type %s",
     *VAR_8, (*VAR_8<VAR_10?VAR_9[*VAR_8]:"null"),
       FUNC_0(
     (enum localzone_type)
     VAR_5[VAR_11*8+VAR_12]));
      return (enum localzone_type)VAR_5[VAR_11*8+VAR_12];
    }
    return VAR_7;
   }
   VAR_13 >>= 1;
  }
 }
 return VAR_7;
}

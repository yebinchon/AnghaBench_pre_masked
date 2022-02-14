
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (char*,unsigned int) ;
 int FUNC_1 (struct in_addr,char*) ;
 int FUNC_2 (char const*,int ,int) ;
 unsigned int FUNC_3 (char*) ;

__attribute__((used)) static unsigned int FUNC_4(char *VAR_1, const char VAR_2[16])
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_3 = 0;
 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < 16; VAR_7 += 2) {
  VAR_5 = ((unsigned long)(unsigned char)VAR_2[VAR_7] << 8) +
      (unsigned long)(unsigned char)VAR_2[VAR_7 + 1];
  if (VAR_5 == 0) {
   if (!VAR_6) {
    VAR_6 = 1;
    if (VAR_7 == 0) {
     *VAR_1++ = ':';
     ++VAR_3;
    }
   }
  } else {
   if (VAR_6) {
    VAR_6 = 0;
    *VAR_1++ = ':';
    ++VAR_3;
   }
   VAR_4 = FUNC_0(VAR_1, VAR_5);
   VAR_3 += VAR_4;
   VAR_1 += VAR_4;
   if (VAR_7 < 14) {
    *VAR_1++ = ':';
    ++VAR_3;
   }
  }
 }
 if (VAR_6) {
  *VAR_1++ = ':';
  ++VAR_3;
 }
 *VAR_1 = 0;
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;


 size_t FUNC_0 (int const*) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_2(char *VAR_0, size_t VAR_1,
   const u8 *VAR_2, size_t VAR_3)
{



 while (VAR_3 >= 4) {
  u16 VAR_4, VAR_5;

  VAR_4 = FUNC_0(VAR_2);
  VAR_5 = FUNC_0(VAR_2 + 2);
  VAR_2 += 4;
  VAR_3 -= 4;

  if (VAR_5 > VAR_3)
   return 0;

  if (VAR_4 == 0x1023) {

   size_t VAR_6 = (VAR_5 < VAR_1) ? VAR_5 : VAR_1;
   FUNC_1(VAR_0, (const char *) VAR_2, VAR_6);
   return VAR_6;
  }

  VAR_2 += VAR_5;
  VAR_3 -= VAR_5;
 }

 return 0;
}

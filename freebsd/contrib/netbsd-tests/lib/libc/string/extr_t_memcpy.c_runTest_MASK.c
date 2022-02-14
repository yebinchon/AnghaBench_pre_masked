
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int testBlock_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(unsigned char *VAR_2, unsigned char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 size_t VAR_8;

 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
   VAR_6 = sizeof(testBlock_t) - (VAR_4 > VAR_5 ? VAR_4 : VAR_5);
   for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
    for (VAR_8 = 0; VAR_8 < sizeof(testBlock_t); ++VAR_8) {
     VAR_2[VAR_8] = (unsigned char)FUNC_2();
     VAR_3[VAR_8] = (unsigned char)FUNC_2();
    }
    FUNC_1(VAR_2 + VAR_4, VAR_3 + VAR_5, VAR_7);
    FUNC_0(VAR_1, VAR_2, sizeof(testBlock_t));
    FUNC_0(VAR_1, VAR_3, sizeof(testBlock_t));
   }
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (char const*,int ,int ) ;

__attribute__((used)) static uint64_t
FUNC_2(const char *VAR_1)
{
 int VAR_2[4] = {0};
 const char *VAR_3;
 int VAR_4;

 for (VAR_3 = VAR_1, VAR_4 = 0; *VAR_3 && (VAR_4 < 4); VAR_4 ++) {
  VAR_2[VAR_4] = FUNC_1(VAR_3, 0, 0);
  while(*VAR_3 && *VAR_3 != '.') {
   VAR_3 ++;
  }
  if (*VAR_3) {
   VAR_3 ++;
  }
 }


 if (VAR_2[2] == 9999) {
  return VAR_0;
 } else {
  return FUNC_0(VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
 }
}

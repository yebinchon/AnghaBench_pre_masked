
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3)
{
 char VAR_4[20];
 size_t VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_3[VAR_5]; VAR_5 ++) {
  int VAR_7;

  VAR_7 = VAR_3[VAR_5];
  if ((VAR_7 >= '0' && VAR_7 <= '9')
   || (VAR_7 >= 'A' && VAR_7 <= 'Z')
   || (VAR_7 >= 'a' && VAR_7 <= 'z'))
  {
   VAR_4[VAR_6 ++] = VAR_7;
   if (VAR_6 == sizeof VAR_4) {
    return -1;
   }
  }
 }
 VAR_4[VAR_6] = 0;
 if (FUNC_0(VAR_4, "p256") || FUNC_0(VAR_4, "secp256r1")) {
  return VAR_0;
 } else if (FUNC_0(VAR_4, "p384") || FUNC_0(VAR_4, "secp384r1")) {
  return VAR_1;
 } else if (FUNC_0(VAR_4, "p521") || FUNC_0(VAR_4, "secp521r1")) {
  return VAR_2;
 } else {
  return -1;
 }
}

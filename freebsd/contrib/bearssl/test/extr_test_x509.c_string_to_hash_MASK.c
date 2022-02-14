
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_6)
{
 char VAR_7[20];
 size_t VAR_8, VAR_9;

 for (VAR_8 = 0, VAR_9 = 0; VAR_6[VAR_8]; VAR_8 ++) {
  int VAR_10;

  VAR_10 = VAR_6[VAR_8];
  if ((VAR_10 >= '0' && VAR_10 <= '9')
   || (VAR_10 >= 'A' && VAR_10 <= 'Z')
   || (VAR_10 >= 'a' && VAR_10 <= 'z'))
  {
   VAR_7[VAR_9 ++] = VAR_10;
   if (VAR_9 == sizeof VAR_7) {
    return -1;
   }
  }
 }
 VAR_7[VAR_9] = 0;
 if (FUNC_0(VAR_7, "md5")) {
  return VAR_0;
 } else if (FUNC_0(VAR_7, "sha1")) {
  return VAR_1;
 } else if (FUNC_0(VAR_7, "sha224")) {
  return VAR_2;
 } else if (FUNC_0(VAR_7, "sha256")) {
  return VAR_3;
 } else if (FUNC_0(VAR_7, "sha384")) {
  return VAR_4;
 } else if (FUNC_0(VAR_7, "sha512")) {
  return VAR_5;
 } else {
  return -1;
 }
}

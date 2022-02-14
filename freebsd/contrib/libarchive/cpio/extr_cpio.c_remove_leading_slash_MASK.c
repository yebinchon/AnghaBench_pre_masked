
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(const char *VAR_0)
{
 const char *VAR_1;



 if ((VAR_0[0] == '/' || VAR_0[0] == '\\') &&
     (VAR_0[1] == '/' || VAR_0[1] == '\\') &&
     (VAR_0[2] == '.' || VAR_0[2] == '?') &&
     (VAR_0[3] == '/' || VAR_0[3] == '\\'))
 {
  if (VAR_0[2] == '?' &&
      (VAR_0[4] == 'U' || VAR_0[4] == 'u') &&
      (VAR_0[5] == 'N' || VAR_0[5] == 'n') &&
      (VAR_0[6] == 'C' || VAR_0[6] == 'c') &&
      (VAR_0[7] == '/' || VAR_0[7] == '\\'))
   VAR_0 += 8;
  else
   VAR_0 += 4;
 }
 do {
  VAR_1 = VAR_0;


  if (((VAR_0[0] >= 'a' && VAR_0[0] <= 'z') ||
       (VAR_0[0] >= 'A' && VAR_0[0] <= 'Z')) &&
    VAR_0[1] == ':') {
   VAR_0 += 2;
  }

  while (VAR_0[0] == '/' || VAR_0[0] == '\\') {
   if (VAR_0[1] == '.' && VAR_0[2] == '.' &&
    (VAR_0[3] == '/' || VAR_0[3] == '\\')) {
    VAR_0 += 3;

   } else
    VAR_0 += 1;
  }
 } while (VAR_1 != VAR_0);
 return (VAR_0);
}

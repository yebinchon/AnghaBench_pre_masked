
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsdtar {int dummy; } ;


 int FUNC_0 (struct bsdtar*) ;
 int FUNC_1 (struct bsdtar*,char const*) ;

__attribute__((used)) static const char*
FUNC_2(struct bsdtar *VAR_0, const char *VAR_1)
{
 const char *VAR_2;



 if ((VAR_1[0] == '/' || VAR_1[0] == '\\') &&
     (VAR_1[1] == '/' || VAR_1[1] == '\\') &&
     (VAR_1[2] == '.' || VAR_1[2] == '?') &&
     (VAR_1[3] == '/' || VAR_1[3] == '\\'))
 {
  if (VAR_1[2] == '?' &&
      (VAR_1[4] == 'U' || VAR_1[4] == 'u') &&
      (VAR_1[5] == 'N' || VAR_1[5] == 'n') &&
      (VAR_1[6] == 'C' || VAR_1[6] == 'c') &&
      (VAR_1[7] == '/' || VAR_1[7] == '\\'))
   VAR_1 += 8;
  else
   VAR_1 += 4;
  FUNC_0(VAR_0);
 }


 do {
  VAR_2 = VAR_1;
  if (((VAR_1[0] >= 'a' && VAR_1[0] <= 'z') ||
       (VAR_1[0] >= 'A' && VAR_1[0] <= 'Z')) &&
      VAR_1[1] == ':') {
   VAR_1 += 2;
   FUNC_0(VAR_0);
  }


  while (VAR_1[0] == '/' || VAR_1[0] == '\\') {
   if (VAR_1[1] == '.' &&
       VAR_1[2] == '.' &&
       (VAR_1[3] == '/' || VAR_1[3] == '\\')) {
    VAR_1 += 3;
   } else if (VAR_1[1] == '.' &&
       (VAR_1[2] == '/' || VAR_1[2] == '\\')) {
    VAR_1 += 2;
   } else
    VAR_1 += 1;
   FUNC_1(VAR_0, VAR_2);
  }
 } while (VAR_2 != VAR_1);

 return (VAR_1);
}

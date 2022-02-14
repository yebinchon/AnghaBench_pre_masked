
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (unsigned char) ;

__attribute__((used)) static void
FUNC_3(char *VAR_0)
{
 unsigned char *VAR_1, *VAR_2;

 if (FUNC_0(VAR_0))
  return;
 VAR_1 = VAR_2 = (unsigned char *)VAR_0;


 while (*VAR_1) {
  if (VAR_1[0] == '%'
      && VAR_1[1] && FUNC_2((unsigned char)VAR_1[1])
      && VAR_1[2] && FUNC_2((unsigned char)VAR_1[2])) {
   *VAR_2++ = (VAR_1[1] - (isdigit(VAR_1[1]) ? '0' : (islower(VAR_1[1]) ? 'a' : 'A') - 10)) * 16 + (VAR_1[2] - (FUNC_0(VAR_1[2]) ? '0' : (FUNC_0(VAR_1[2]) ? 'a' : 'A') - 10));
   VAR_1+=3;
  } else
   *VAR_2++ = *VAR_1++;
 }
 *VAR_2 = '\0';
}

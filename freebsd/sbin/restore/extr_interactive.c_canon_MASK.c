
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

void
FUNC_7(char *VAR_1, char *VAR_2, size_t VAR_3)
{
 char *VAR_4, *VAR_5;

 if (FUNC_3(VAR_1, ".") == 0 || FUNC_6(VAR_1, "./", 2) == 0)
  (void) FUNC_4(VAR_2, "");
 else if (VAR_1[0] == '/')
  (void) FUNC_4(VAR_2, ".");
 else
  (void) FUNC_4(VAR_2, "./");
 if (FUNC_5(VAR_2) + FUNC_5(VAR_1) >= VAR_3) {
  FUNC_1(VAR_0, "canonname: not enough buffer space\n");
  FUNC_0(1);
 }

 (void) FUNC_2(VAR_2, VAR_1);



 for (VAR_4 = VAR_5 = VAR_2; *VAR_5 != '\0'; VAR_4++) {
  *VAR_4 = *VAR_5++;
  while (*VAR_4 == '/' && *VAR_5 == '/')
   VAR_5++;
 }
 *VAR_4 = '\0';
 if (*--VAR_4 == '/')
  *VAR_4 = '\0';



 for (VAR_5 = VAR_2; *VAR_5 != '\0'; ) {
  VAR_5++;
  VAR_4 = VAR_5;
  while (*VAR_5 != '/' && *VAR_5 != '\0')
   VAR_5++;
  if (VAR_5 - VAR_4 == 1 && *VAR_4 == '.') {
   VAR_4--;
   (void) FUNC_4(VAR_4, VAR_5);
   VAR_5 = VAR_4;
  }
  if (VAR_5 - VAR_4 == 2 && FUNC_6(VAR_4, "..", 2) == 0) {
   VAR_4--;
   while (VAR_4 > &VAR_2[1] && *--VAR_4 != '/')
                                ;
   (void) FUNC_4(VAR_4, VAR_5);
   VAR_5 = VAR_4;
  }
 }
}

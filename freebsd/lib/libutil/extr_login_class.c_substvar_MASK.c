
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {char* pw_dir; char* pw_name; } ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 char* FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static char *
FUNC_5(const char * VAR_0, const struct passwd * VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    char *VAR_5 = ((void*)0);

    if (VAR_0 != ((void*)0)) {
 int VAR_6 = 0;
 int VAR_7 = 0;
 char *VAR_8;
 const char *VAR_9;

 if (VAR_1 != ((void*)0)) {
     for (VAR_9 = VAR_0; *VAR_9 != '\0'; ++VAR_9) {
  VAR_6 += (*VAR_9 == '~');
  VAR_7 += (*VAR_9 == '$');
     }
 }

 VAR_5 = FUNC_0(FUNC_4(VAR_0) + (VAR_7 * VAR_4)
      - VAR_7 + (VAR_6 * (VAR_3+VAR_2))
      - VAR_6 + 1);

 if (VAR_5 != ((void*)0)) {
     VAR_8 = FUNC_2(VAR_5, VAR_0);

     if (VAR_1 != ((void*)0)) {




  while (*(VAR_8 += FUNC_3(VAR_8, "~$")) != '\0') {
      int VAR_10 = FUNC_4(VAR_8);

      if (VAR_8 > VAR_5 && *(VAR_8-1) == '\\')
   FUNC_1(VAR_8 - 1, VAR_8, VAR_10 + 1);
      else if (*VAR_8 == '~') {
   int VAR_11 = VAR_3 && *(VAR_8+1) != '/';
   FUNC_1(VAR_8 + VAR_2 + VAR_11, VAR_8 + 1, VAR_10);
   FUNC_1(VAR_8, VAR_1->pw_dir, VAR_2);
   if (VAR_11)
       VAR_8[VAR_2] = '/';
   VAR_8 += VAR_2 + VAR_11;
      }
      else {
   FUNC_1(VAR_8 + VAR_4, VAR_8 + 1, VAR_10);
   FUNC_1(VAR_8, VAR_1->pw_name, VAR_4);
   VAR_8 += VAR_4;
      }
  }
     }
 }
    }

    return (VAR_5);
}

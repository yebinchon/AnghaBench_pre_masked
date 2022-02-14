
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int errbuf ;


 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 size_t FUNC_5 (char*) ;
 char FUNC_6 (char) ;

int
FUNC_7(char *VAR_0, int VAR_1, const char **VAR_2)
{
 size_t VAR_3, VAR_4 = FUNC_5(VAR_0);
 u_char VAR_5, VAR_6 = '\0';
 static char VAR_7[256];

 if (VAR_4 == 0) {
  FUNC_4(VAR_7, "empty domain name", sizeof(VAR_7));
  goto bad;
 }
 if (!FUNC_1((u_char)VAR_0[0]) && !FUNC_2((u_char)VAR_0[0])) {
  FUNC_3(VAR_7, sizeof(VAR_7), "domain name \"%.100s\" "
      "starts with invalid character", VAR_0);
  goto bad;
 }
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = FUNC_6((u_char)VAR_0[VAR_3]);
  if (VAR_1)
   VAR_0[VAR_3] = (char)VAR_5;
  if (VAR_6 == '.' && VAR_5 == '.') {
   FUNC_3(VAR_7, sizeof(VAR_7), "domain name "
       "\"%.100s\" contains consecutive separators", VAR_0);
   goto bad;
  }
  if (VAR_5 != '.' && VAR_5 != '-' && !FUNC_0(VAR_5) &&
      VAR_5 != '_') {
   FUNC_3(VAR_7, sizeof(VAR_7), "domain name "
       "\"%.100s\" contains invalid characters", VAR_0);
   goto bad;
  }
  VAR_6 = VAR_5;
 }
 if (VAR_0[VAR_4 - 1] == '.')
  VAR_0[VAR_4 - 1] = '\0';
 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);
 return 1;
bad:
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_7;
 return 0;
}

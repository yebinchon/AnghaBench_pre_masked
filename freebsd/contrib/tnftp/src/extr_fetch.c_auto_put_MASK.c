
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmdbuf ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char**) ;
 int VAR_2 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (size_t) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (char*,char const*,int) ;
 int FUNC_11 (char const*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,char*) ;

int
FUNC_14(int VAR_3, char **VAR_4, const char *VAR_5)
{
 char *VAR_6[4], *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 size_t VAR_12;
 char VAR_13[VAR_1];

 (void)FUNC_10(VAR_13, "mput", sizeof(VAR_13));
 VAR_6[0] = VAR_13;
 VAR_6[1] = VAR_4[0];
 VAR_9 = 2;
 VAR_6[2] = VAR_6[3] = ((void*)0);
 VAR_8 = ((void*)0);
 VAR_10 = 1;

 FUNC_0("auto_put: target `%s'\n", VAR_5);

 VAR_7 = FUNC_6(VAR_5);
 VAR_12 = FUNC_11(VAR_7);
 if (VAR_7[VAR_12 - 1] != '/' && VAR_7[VAR_12 - 1] != ':') {



  if (VAR_3 > 1) {
   VAR_12 = FUNC_11(VAR_5) + 2;
   FUNC_4(VAR_7);
   VAR_7 = (char *)FUNC_5(VAR_12);
   (void)FUNC_10(VAR_7, VAR_5, VAR_12);
   (void)FUNC_9(VAR_7, "/", VAR_12);
  } else {
   (void)FUNC_10(VAR_13, "put", sizeof(VAR_13));
   VAR_6[0] = VAR_13;
   VAR_8 = FUNC_12(VAR_7, '/');
   if (VAR_8 == ((void*)0)) {
    VAR_8 = FUNC_12(VAR_7, ':');
    if (VAR_8 == ((void*)0)) {
     FUNC_13("Invalid URL `%s'", VAR_7);
     goto cleanup_auto_put;
    }
    VAR_8++;
    VAR_6[2] = FUNC_6(VAR_8);
    VAR_8[0] = '/';
   } else
    VAR_6[2] = FUNC_6(VAR_8 + 1);
   VAR_8[1] = '\0';
   VAR_9++;
  }
 }
 FUNC_0("auto_put: URL `%s' argv[2] `%s'\n",
     VAR_7, FUNC_2(VAR_6[2]));


 VAR_10 = FUNC_3(1, &VAR_7);
 if(VAR_10 >= 0)
  goto cleanup_auto_put;

 VAR_10 = 0;



 if (VAR_9 == 3) {
  VAR_6[1] = VAR_4[0];
  FUNC_8(VAR_9, VAR_6);
  if ((VAR_2 / 100) != VAR_0)
   VAR_10 = 1;
 } else {
  for(VAR_11 = 0; VAR_4[VAR_11] != ((void*)0); VAR_11++) {
   VAR_6[1] = VAR_4[VAR_11];
   FUNC_7(VAR_9, VAR_6);
   if ((VAR_2 / 100) != VAR_0) {
    VAR_10 = VAR_11 + 1;
    break;
   }
  }
 }

 cleanup_auto_put:
 FUNC_4(VAR_7);
 FUNC_1(VAR_6[2]);
 return (VAR_10);
}

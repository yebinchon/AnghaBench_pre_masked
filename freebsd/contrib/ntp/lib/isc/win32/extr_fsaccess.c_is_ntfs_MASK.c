
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int filename ;
typedef int FSType ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int ,int *,int ,int *,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char const*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 char* FUNC_8 (char*,char*) ;

BOOL
FUNC_9(const char * VAR_3) {

 char VAR_4[255];
 char VAR_5[20];
 char VAR_6[256];
 char *VAR_7;
 char *VAR_8;
 char VAR_9[1024];

 FUNC_1(VAR_9 != ((void*)0));

 if (FUNC_3(VAR_3, VAR_9,
  sizeof(VAR_9)) != VAR_1) {
  return (VAR_0);
 }





 if (FUNC_2(VAR_9[0]) && VAR_9[1] == ':' &&
  (VAR_9[2] == '\\' || VAR_9[2] == '/')) {
  FUNC_7(VAR_4, VAR_9, 3);
  VAR_4[3] = '\0';
 }

 else if ((VAR_9[0] == '\\') && (VAR_9[1] == '\\')) {

  FUNC_6(VAR_6, VAR_9);
  VAR_7 = FUNC_8(VAR_6, "\\");
  VAR_8 = FUNC_8(((void*)0), "\\");
  FUNC_6(VAR_4, "\\\\");
  FUNC_4(VAR_4, VAR_7);
  FUNC_4(VAR_4, "\\");
  FUNC_4(VAR_4, VAR_8);
  FUNC_4(VAR_4, "\\");

 }
 else
  return (VAR_0);

 FUNC_0(VAR_4, ((void*)0), 0, ((void*)0), 0, ((void*)0), VAR_5,
        sizeof(VAR_5));
 if(FUNC_5(VAR_5,"NTFS") == 0)
  return (VAR_2);
 else
  return (VAR_0);
}

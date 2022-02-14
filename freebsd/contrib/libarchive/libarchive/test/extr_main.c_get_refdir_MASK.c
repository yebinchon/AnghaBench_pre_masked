
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* VAR_0 ;
 char* VAR_1 ;
 size_t VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* FUNC_1 (size_t,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int *,size_t) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (int *,char*,char*,char*) ;
 int FUNC_9 (char*,size_t,char*,char const*,...) ;
 int VAR_5 ;
 char* FUNC_10 (char*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (char*,char*,size_t) ;

__attribute__((used)) static char *
FUNC_13(const char *VAR_6)
{
 size_t VAR_7, VAR_8;
 char *VAR_9, *VAR_10, *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);




 VAR_8 = 8192;

 VAR_9 = FUNC_1(VAR_8, 1);
 if (VAR_9 == ((void*)0)) {
  FUNC_3(VAR_5, "Unable to allocate memory\n");
  FUNC_2(1);
 }


 VAR_7 = VAR_8 * 2;
 VAR_10 = FUNC_1(VAR_7, 1);
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_5, "Unable to allocate memory\n");
  FUNC_2(1);
 }


 if (VAR_6 != ((void*)0)) {
  VAR_11 = ((void*)0);
  FUNC_9(VAR_9, VAR_8, "%s", VAR_6);
  VAR_12 = FUNC_8(((void*)0), "%s/%s", VAR_9, VAR_0);
  if (VAR_12 != ((void*)0)) goto success;
  FUNC_12(VAR_10, VAR_9, VAR_7 - FUNC_11(VAR_10) - 1);
  FUNC_12(VAR_10, "\n", VAR_7 - FUNC_11(VAR_10) - 1);
  goto failure;
 }





 VAR_11 = FUNC_5(((void*)0), 0);

 while (VAR_11[FUNC_11(VAR_11) - 1] == '\n')
  VAR_11[FUNC_11(VAR_11) - 1] = '\0';


 FUNC_9(VAR_9, VAR_8, "%s", VAR_11);
 VAR_12 = FUNC_8(((void*)0), "%s/%s", VAR_9, VAR_0);
 if (VAR_12 != ((void*)0)) goto success;
 FUNC_12(VAR_10, VAR_9, VAR_7 - FUNC_11(VAR_10) - 1);
 FUNC_12(VAR_10, "\n", VAR_7 - FUNC_11(VAR_10) - 1);

 FUNC_9(VAR_9, VAR_8, "%s/test", VAR_11);
 VAR_12 = FUNC_8(((void*)0), "%s/%s", VAR_9, VAR_0);
 if (VAR_12 != ((void*)0)) goto success;
 FUNC_12(VAR_10, VAR_9, VAR_7 - FUNC_11(VAR_10) - 1);
 FUNC_12(VAR_10, "\n", VAR_7 - FUNC_11(VAR_10) - 1);




 FUNC_9(VAR_9, VAR_8, "%s/%s/test", VAR_11, VAR_3);

 VAR_12 = FUNC_8(((void*)0), "%s/%s", VAR_9, VAR_0);
 if (VAR_12 != ((void*)0)) goto success;
 FUNC_12(VAR_10, VAR_9, VAR_7 - FUNC_11(VAR_10) - 1);
 FUNC_12(VAR_10, "\n", VAR_7 - FUNC_11(VAR_10) - 1);
 if (FUNC_6(VAR_11, "/usr/obj", 8) == 0) {
  FUNC_9(VAR_9, VAR_8, "%s", VAR_11 + 8);
  VAR_12 = FUNC_8(((void*)0), "%s/%s", VAR_9, VAR_0);
  if (VAR_12 != ((void*)0)) goto success;
  FUNC_12(VAR_10, VAR_9, VAR_7 - FUNC_11(VAR_10) - 1);
  FUNC_12(VAR_10, "\n", VAR_7 - FUNC_11(VAR_10) - 1);

  FUNC_9(VAR_9, VAR_8, "%s/test", VAR_11 + 8);
  VAR_12 = FUNC_8(((void*)0), "%s/%s", VAR_9, VAR_0);
  if (VAR_12 != ((void*)0)) goto success;
  FUNC_12(VAR_10, VAR_9, VAR_7 - FUNC_11(VAR_10) - 1);
  FUNC_12(VAR_10, "\n", VAR_7 - FUNC_11(VAR_10) - 1);
 }

failure:
 FUNC_7("Unable to locate known reference file %s\n", VAR_0);
 FUNC_7("  Checked following directories:\n%s\n", VAR_10);
 FUNC_7("Use -r option to specify full path to reference directory\n");



 FUNC_2(1);

success:
 FUNC_4(VAR_12);
 FUNC_4(VAR_11);
 FUNC_4(VAR_10);


 VAR_12 = FUNC_10(VAR_9);
 FUNC_4(VAR_9);
 return VAR_12;
}

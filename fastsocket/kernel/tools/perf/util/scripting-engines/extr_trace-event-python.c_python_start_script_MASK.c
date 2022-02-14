
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int,char**) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (char const**) ;
 int FUNC_7 () ;
 char** FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (char*,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_12(const char *VAR_2, int VAR_3, const char **VAR_4)
{
 const char **VAR_5;
 char VAR_6[VAR_0];
 int VAR_7, VAR_8 = 0;
 FILE *VAR_9;

 VAR_5 = FUNC_8((VAR_3 + 1) * sizeof(const char *));
 VAR_5[0] = VAR_2;
 for (VAR_7 = 1; VAR_7 < VAR_3 + 1; VAR_7++)
  VAR_5[VAR_7] = VAR_4[VAR_7 - 1];

 FUNC_3();

 FUNC_7();

 FUNC_1(VAR_3 + 1, (char **)VAR_5);

 VAR_9 = FUNC_4(VAR_2, "r");
 if (!VAR_9) {
  FUNC_11(VAR_6, "Can't open python script \"%s\"", VAR_2);
  FUNC_9(VAR_6);
  VAR_8 = -1;
  goto error;
 }

 VAR_8 = FUNC_0(VAR_9, VAR_2);
 if (VAR_8) {
  FUNC_5(VAR_1, "Error running python script %s\n", VAR_2);
  goto error;
 }

 VAR_8 = FUNC_10();
 if (VAR_8) {
  FUNC_5(VAR_1, "Error starting python script %s\n", VAR_2);
  goto error;
 }

 FUNC_6(VAR_5);

 return VAR_8;
error:
 FUNC_2();
 FUNC_6(VAR_5);

 return VAR_8;
}

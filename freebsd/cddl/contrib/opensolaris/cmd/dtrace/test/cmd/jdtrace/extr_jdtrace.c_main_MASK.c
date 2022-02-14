
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;
 int FUNC_1 (char*,char**) ;
 int FUNC_2 (char*) ;

int
FUNC_3(int VAR_0, char **VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 char **VAR_5, **VAR_6;

 VAR_3 = VAR_0 + 3;
 VAR_5 = VAR_6 = FUNC_0(sizeof (char *) * VAR_3);

 *VAR_6++ = "java";
 *VAR_6++ = "-jar";
 *VAR_6++ = "/opt/SUNWdtrt/lib/java/jdtrace.jar";

 VAR_0--;
 VAR_1++;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_6[VAR_2] = VAR_1[VAR_2];
 }
 VAR_6[VAR_2] = ((void*)0);

 (void) FUNC_1(VAR_5[0], VAR_5);

 FUNC_2("exec failed");

 return (0);
}

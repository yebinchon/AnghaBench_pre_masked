
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 char** FUNC_1 (int,int) ;
 int FUNC_2 (int,char const**,int *) ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0, int VAR_1, const char **VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5;
 const char **VAR_6;

 VAR_3 = VAR_1 + 2;
 VAR_6 = FUNC_1(VAR_3 + 1, sizeof(char *));
 VAR_6[VAR_4++] = FUNC_3("buildid-list");
 VAR_6[VAR_4++] = FUNC_3("-i");
 VAR_6[VAR_4++] = FUNC_3(VAR_0);
 for (VAR_5 = 1; VAR_5 < VAR_1; VAR_5++, VAR_4++)
  VAR_6[VAR_4] = VAR_2[VAR_5];

 FUNC_0(VAR_4 != VAR_3);

 return FUNC_2(VAR_4, VAR_6, ((void*)0));
}

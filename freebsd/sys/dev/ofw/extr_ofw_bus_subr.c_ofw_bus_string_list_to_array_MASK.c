
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,void**) ;
 int FUNC_1 (char*,int ) ;
 char** FUNC_2 (int,int ,int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*) ;

int
FUNC_5(phandle_t VAR_2, const char *VAR_3,
   const char ***VAR_4)
{
 char *VAR_5, *VAR_6;
 const char **VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = ((void*)0);
 VAR_10 = FUNC_0(VAR_2, VAR_3, (void **)&VAR_5);
 if (VAR_10 <= 0)
  return (VAR_10);


 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_10; VAR_9++)
  VAR_8 += FUNC_4(VAR_5 + VAR_8) + 1;


 VAR_7 = FUNC_2((VAR_9 + 1) * sizeof(char *) + VAR_10, VAR_0,
     VAR_1);


 VAR_6 = (char *)(VAR_7 + VAR_9 + 1);


 FUNC_3(VAR_6, VAR_5, VAR_10);
 FUNC_1(VAR_5, VAR_0);


 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < VAR_10; VAR_9++) {
  VAR_11 = FUNC_4(VAR_6) + 1;
  VAR_7[VAR_9] = VAR_6;
  VAR_8 += VAR_11;
  VAR_6 += VAR_11;
 }
 VAR_7[VAR_9] = ((void*)0);
 *VAR_4 = VAR_7;

 return (VAR_9);
}

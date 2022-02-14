
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char const**) ;
 char** FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ,int,char**,char**) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(const char *VAR_3, int VAR_4, const char **VAR_5)
{
 const char **VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_6 = FUNC_2((VAR_4 + 2) * sizeof(const char *));
 VAR_6[0] = "";
 VAR_6[1] = VAR_3;
 for (VAR_7 = 2; VAR_7 < VAR_4 + 2; VAR_7++)
  VAR_6[VAR_7] = VAR_5[VAR_7 - 2];

 VAR_1 = FUNC_3();
 FUNC_4(VAR_1);

 if (FUNC_6(VAR_1, VAR_2, VAR_4 + 2, (char **)VAR_6,
         (char **)((void*)0))) {
  VAR_8 = -1;
  goto error;
 }

 if (FUNC_7(VAR_1)) {
  VAR_8 = -1;
  goto error;
 }

 if (FUNC_0(VAR_0)) {
  VAR_8 = -1;
  goto error;
 }

 FUNC_8();

 FUNC_1(VAR_6);
 return 0;
error:
 FUNC_5(VAR_1);
 FUNC_1(VAR_6);

 return VAR_8;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* efidp ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*,char*) ;
 size_t FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_2, const char *VAR_3, efidp *VAR_4)
{
 char *VAR_5, *VAR_6 = ((void*)0), *VAR_7, *VAR_8;
 int VAR_9 = 0;
 efidp VAR_10 = ((void*)0);
 size_t VAR_11;

 VAR_8 = FUNC_5(VAR_3);
 for (VAR_7 = VAR_8; *VAR_7; VAR_7++)
  if (*VAR_7 == '/')
   *VAR_7 = '\\';
 VAR_5 = FUNC_4(VAR_8);
 FUNC_2(VAR_8);
 if (VAR_5 == ((void*)0)) {
  VAR_9 = VAR_1;
  goto errout;
 }

 FUNC_0(&VAR_6, "%s/%s", VAR_2, VAR_5);
 VAR_10 = FUNC_3(8192);
 VAR_11 = FUNC_1(VAR_6, VAR_10, 8192);
 if (VAR_11 > 8192) {
  VAR_9 = VAR_1;
  goto errout;
 }
 if (VAR_11 == 0) {
  VAR_9 = VAR_0;
  goto errout;
 }

 *VAR_4 = VAR_10;
errout:
 if (VAR_9) {
  FUNC_2(VAR_10);
 }
 FUNC_2(VAR_6);
 FUNC_2(VAR_5);

 return VAR_9;
}

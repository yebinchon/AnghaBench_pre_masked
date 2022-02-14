
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Boolean ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (int *,char*,int ,int ) ;
 char* FUNC_2 (char const*,int ,char**) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char) ;

__attribute__((used)) static Boolean
FUNC_5(const char *VAR_5, const char *VAR_6)
{
 char *VAR_7, *VAR_8, *VAR_9;

 if ((VAR_8 = FUNC_2(VAR_5, VAR_3, &VAR_7)) == ((void*)0) ||
     *VAR_8 == '\0')
  return VAR_0;


 if (FUNC_4(VAR_8, '$') != 0)
  VAR_9 = FUNC_1(((void*)0), VAR_8, VAR_4, VAR_2);
 else
  VAR_9 = VAR_8;

 (void)FUNC_0("%s%s", VAR_9, VAR_6);

 if (VAR_9 != VAR_8)
  FUNC_3(VAR_9);
 FUNC_3(VAR_7);
 return VAR_1;
}

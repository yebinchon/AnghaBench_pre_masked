
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,int,int,int,unsigned int,unsigned int) ;
 char* FUNC_2 (char*,int) ;
 int VAR_0 ;
 char* FUNC_3 (char*,int) ;

__attribute__((used)) static void
FUNC_4(char *VAR_1, int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 const char *VAR_5, *VAR_6;

 VAR_5 = FUNC_3(VAR_1, VAR_2);
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_5 == VAR_6)
  return;

 FUNC_1(VAR_0, "test_strchr(\"%s\", %#x) gave %d not %d (test %d, "
     "alignment %d)\n",
     VAR_1, VAR_2, VAR_5 ? VAR_5 - VAR_1 : -1, VAR_6 ? VAR_6 - VAR_1 : -1, VAR_3, VAR_4);

 FUNC_0("Check stderr for details");
}

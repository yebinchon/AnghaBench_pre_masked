
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 char* FUNC_3 (char const*) ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 int VAR_3 = 0;

 VAR_1 = FUNC_3(VAR_0);
 if (VAR_1 == ((void*)0))
   FUNC_0(1, ((void*)0));

 for (VAR_2 = VAR_1; (VAR_2 = FUNC_4(VAR_2, ",")) != ((void*)0); VAR_2 = ((void*)0)) {
  if (FUNC_2(VAR_2, "ro") == 0) {
   VAR_3 = 1;
   break;
  }
 }
 FUNC_1(VAR_1);
 return (VAR_3);
}

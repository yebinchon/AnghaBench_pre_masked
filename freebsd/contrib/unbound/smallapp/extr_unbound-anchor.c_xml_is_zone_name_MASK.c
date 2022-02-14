
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int BIO ;


 long FUNC_0 (int *,char**) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char const*,int ) ;

__attribute__((used)) static int
FUNC_5(BIO* VAR_0, const char* VAR_1)
{
 char VAR_2[1024];
 char* VAR_3 = ((void*)0);
 long VAR_4;
 (void)FUNC_1(VAR_0, 0);
 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if(!VAR_4 || !VAR_3) return 0;

 if(VAR_4 >= (long)sizeof(VAR_2)) return 0;
 FUNC_2(VAR_2, VAR_3, (size_t)VAR_4);
 VAR_2[VAR_4] = 0;

 return (FUNC_4(VAR_2, VAR_1, FUNC_3(VAR_1)) == 0);
}

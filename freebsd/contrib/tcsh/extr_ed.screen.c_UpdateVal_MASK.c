
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char*,size_t) ;
 char* FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(const Char *VAR_0, int VAR_1, Char *VAR_2, Char *VAR_3)
{
    Char *VAR_4, *VAR_5;
    if ((VAR_4 = FUNC_6(VAR_2, VAR_0)) == ((void*)0)) {
 (void)FUNC_3(VAR_3, VAR_2);
 return 0;
    } else {
 size_t VAR_6 = (VAR_4 - VAR_2) + FUNC_4(VAR_0);
 (void)FUNC_5(VAR_3, VAR_2, VAR_6);
 VAR_3[VAR_6] = '\0';
 VAR_5 = FUNC_0(VAR_1, 0, 0);
 (void) FUNC_1(VAR_3 + VAR_6, VAR_5);
 FUNC_7(VAR_5);
 VAR_4 = FUNC_2(VAR_4, ':');
 if (VAR_4)
     (void) FUNC_1(VAR_3, VAR_4);
 return 1;
    }
}

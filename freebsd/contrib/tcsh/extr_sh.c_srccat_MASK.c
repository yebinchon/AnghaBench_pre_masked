
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,int,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(Char *VAR_2, Char *VAR_3)
{
    if (VAR_2[0] == '/' && VAR_2[1] == '\0')
 return FUNC_5(FUNC_4(VAR_3), (VAR_0 ? 0 : 1), 0, ((void*)0));
    else {
 Char *VAR_4;
 char *VAR_5;
 int VAR_6;







 VAR_4 = FUNC_1(VAR_2, VAR_3);
 FUNC_2(VAR_4, VAR_1);
 VAR_5 = FUNC_4(VAR_4);

 VAR_6 = FUNC_5(VAR_5, (VAR_0 ? 0 : 1), 0, ((void*)0));
 FUNC_3(VAR_4);
 return VAR_6;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int VAR_1 ;
 char* FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(char *VAR_2, struct request_info *VAR_3,
    int (*VAR_4)(char *, struct request_info *))
{
    char *VAR_5;
    for (VAR_5 = FUNC_2(VAR_2, VAR_1); VAR_5 != 0; VAR_5 = FUNC_2((char *) 0, VAR_1)) {
 if (FUNC_0(VAR_5, "EXCEPT"))
     return (VAR_0);
 if (VAR_4(VAR_5, VAR_3)) {
     while ((VAR_5 = FUNC_2((char *) 0, VAR_1)) && FUNC_1(VAR_5, "EXCEPT"))
              ;
     return (VAR_5 == 0 || FUNC_3((char *) 0, VAR_3, VAR_4) == 0);
 }
    }
    return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,int,int) ;

__attribute__((used)) static int
FUNC_5(char *VAR_0[], int VAR_1)
{
    int VAR_2 = 0;
    int VAR_3;
    char VAR_4[80];

    while (VAR_0[0] != 0) {
 if (FUNC_3(VAR_0[0]))
     break;
 if ((VAR_3 = FUNC_2(VAR_0)) < VAR_1) {
     const char *VAR_5 = FUNC_1("Expected %d arguments, found only %d");
     FUNC_4(VAR_4, VAR_5, VAR_1, VAR_3);
     FUNC_0(VAR_4);
 } else if ((VAR_3 % VAR_1) != 0) {
     const char *VAR_6 = FUNC_1("Expected %d arguments, found extra %d");
     FUNC_4(VAR_4, VAR_6, VAR_1, (VAR_3 % VAR_1));
     FUNC_0(VAR_4);
 }

 VAR_0 += VAR_3;
 VAR_2 += (VAR_3 / VAR_1);
    }

    return VAR_2;
}

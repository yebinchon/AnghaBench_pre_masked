
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,char*,size_t) ;

__attribute__((used)) static int
FUNC_3(char *VAR_1, char *VAR_2, size_t VAR_3)
{
    int VAR_4;
    VAR_4 = FUNC_1(VAR_1, VAR_0);
    if (VAR_4 == -1) {
        return -1;
    }
    if (FUNC_2(VAR_4, VAR_2, VAR_3) != (ssize_t)VAR_3) {
        FUNC_0(VAR_4);
        return -2;
    }
    FUNC_0(VAR_4);
    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 long FUNC_2 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_3(char *VAR_2)
{
    char *VAR_3 = 0;
    long VAR_4 = FUNC_2(VAR_2, &VAR_3, 10);

    if (VAR_3 != 0 && (*VAR_3 == 0 || FUNC_1(FUNC_0(*VAR_3))) && VAR_4 >= 0) {
 return VAR_1;
    }
    return VAR_0;
}

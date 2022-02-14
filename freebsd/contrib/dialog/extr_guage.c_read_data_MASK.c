
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 size_t VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,size_t,int *) ;

__attribute__((used)) static int
FUNC_4(char *VAR_1, FILE *VAR_2)
{
    int VAR_3;

    if (FUNC_2(VAR_2)) {
 VAR_3 = 0;
    } else if (FUNC_3(VAR_1, VAR_0, VAR_2) != 0) {
 FUNC_0(("read_data:%s", VAR_1));
 VAR_1[VAR_0] = '\0';
 FUNC_1(VAR_1);
 VAR_3 = 1;
    } else {
 VAR_3 = -1;
    }
    return VAR_3;
}

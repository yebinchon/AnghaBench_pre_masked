
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sizet_values ;
typedef int buf ;


 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*,int,char*,size_t) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,size_t) ;

__attribute__((used)) static int
FUNC_4 (void)
{
    int VAR_0 = 0;
    size_t VAR_1[] = { 0, 1, 2, 200, 4294967295u };
    char *VAR_2[] = { "0", "1", "2", "200", "4294967295" };
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < sizeof(VAR_1) / sizeof(VAR_1[0]); ++VAR_3) {





 char VAR_4[256];
 FUNC_1(VAR_4, sizeof(VAR_4), "%zu", VAR_1[VAR_3]);
 if (FUNC_2(VAR_4, VAR_2[VAR_3]) != 0) {
     FUNC_0("%s != %s", VAR_4, VAR_2[VAR_3]);
     VAR_0++;
 }

    }
    return VAR_0;
}

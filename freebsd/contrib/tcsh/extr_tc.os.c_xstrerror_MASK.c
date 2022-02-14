
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char*) ;
 char** VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;

char *
FUNC_3(int VAR_2)
{
    if (VAR_2 >= 0 && VAR_2 < VAR_1) {
 return VAR_0[VAR_2];
    } else {
 static char *VAR_3;

 FUNC_2(VAR_3);
 VAR_3 = FUNC_1(FUNC_0(23, 13, "Unknown Error: %d"), VAR_2);
 return VAR_3;
    }
}

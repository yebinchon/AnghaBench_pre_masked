
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,unsigned char const*,size_t) ;

__attribute__((used)) static int
FUNC_4 (const unsigned char *VAR_2, size_t VAR_3,
       time_t *VAR_4, size_t *VAR_5)
{
    char *VAR_6;
    int VAR_7;

    if (VAR_3 > VAR_3 + 1 || VAR_3 == 0)
 return VAR_0;

    VAR_6 = FUNC_2(VAR_3 + 1);
    if (VAR_6 == ((void*)0))
 return VAR_1;
    FUNC_3(VAR_6, VAR_2, VAR_3);
    VAR_6[VAR_3] = '\0';
    VAR_7 = FUNC_1(VAR_6, VAR_4);
    FUNC_0 (VAR_6);
    if(VAR_5) *VAR_5 = VAR_3;
    return VAR_7;
}

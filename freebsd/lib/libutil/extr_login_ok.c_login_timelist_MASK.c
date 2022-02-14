
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct login_time {int lt_dow; } ;
typedef struct login_time login_time_t ;
typedef int login_cap_t ;


 int VAR_0 ;
 char** FUNC_0 (int *,char const*,int *) ;
 struct login_time FUNC_1 (char const*) ;
 struct login_time* FUNC_2 (struct login_time*,int) ;

login_time_t *
FUNC_3(login_cap_t *VAR_1, char const *VAR_2, int *VAR_3,
        login_time_t **VAR_4)
{
    int VAR_5 = 0;
    struct login_time *VAR_6 = ((void*)0);
    const char **VAR_7;

    if ((VAR_7 = FUNC_0(VAR_1, VAR_2, ((void*)0))) != ((void*)0)) {

 while (VAR_7[VAR_5++] != ((void*)0))
     ;
 if (*VAR_3 >= VAR_5)
     VAR_6 = *VAR_4;
 else if ((VAR_6 = FUNC_2(*VAR_4, VAR_5 * sizeof(struct login_time))) != ((void*)0)) {
     *VAR_3 = VAR_5;
     *VAR_4 = VAR_6;
 }
 if (VAR_6 != ((void*)0)) {
     int VAR_8 = 0;

     for (--VAR_5; VAR_8 < VAR_5; VAR_8++)
  VAR_6[VAR_8] = FUNC_1(VAR_7[VAR_8]);
     VAR_6[VAR_8].lt_dow = VAR_0;
 }
    }
    return VAR_6;
}

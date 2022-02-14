
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*) ;
 int VAR_1 ;
 int FUNC_2 (char***,int ) ;
 int FUNC_3 (char***) ;
 int FUNC_4 (char***,int *,int) ;
 int FUNC_5 (char const*,char*,char const**,int) ;
 void* FUNC_6 (int) ;

int
FUNC_7(const Char *VAR_2, const Char *VAR_3, const Char **VAR_4)
{
    Char ***VAR_5, **VAR_6;
    const Char *VAR_7 = VAR_2;
    int VAR_8 = 1, VAR_9 = 0;

    if (*VAR_3 == '^') {
 VAR_8 = 0;
 VAR_3++;
    }

    VAR_5 = FUNC_6(sizeof(Char ***));
    *VAR_5 = FUNC_6(VAR_0 * sizeof(Char *));
    (*VAR_5)[0] = FUNC_1(VAR_3);
    (*VAR_5)[1] = ((void*)0);

    FUNC_2(VAR_5, VAR_1);
    FUNC_4(VAR_5, ((void*)0), VAR_0);

    if (VAR_4 == ((void*)0))

 for (VAR_6 = *VAR_5; *VAR_6; VAR_6++)
     VAR_9 |= FUNC_5(VAR_2, *VAR_6, &VAR_7, 1) == 2 ? 1 : 0;
    else {
 const Char *VAR_10;


        VAR_10 = FUNC_0(VAR_2);
 for (VAR_6 = *VAR_5; *VAR_6; VAR_6++)
     if (FUNC_5(VAR_2, *VAR_6, &VAR_7, 1) != 0) {
  VAR_9 |= 1;
  if (VAR_10 > VAR_7)
      VAR_10 = VAR_7;
     }
 *VAR_4 = VAR_10;
    }

    FUNC_3(VAR_5);
    return(VAR_9 == VAR_8);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int,int,int) ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(WINDOW *VAR_1,
     char **VAR_2,
     int VAR_3,
     int VAR_4,
     int VAR_5,
     int VAR_6)
{
    int VAR_7 = FUNC_3(VAR_1);
    int VAR_8;

    FUNC_1(VAR_1, FUNC_3(VAR_1), FUNC_2(VAR_1), VAR_0);
    if (VAR_5 - VAR_4 >= VAR_7)
 VAR_5 = VAR_4 + VAR_7;
    for (VAR_8 = VAR_4; VAR_8 < VAR_5; ++VAR_8) {
 if (!FUNC_0(VAR_1, VAR_2[VAR_8],
    VAR_8, VAR_3, VAR_4,
    (VAR_8 == VAR_3) ? VAR_6 : 0))
     break;
    }
}

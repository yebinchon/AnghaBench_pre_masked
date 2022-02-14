
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_buffer_t ;


 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (int *,char const*,int) ;

__attribute__((used)) static void
FUNC_2 (xo_buffer_t *VAR_0, const char *VAR_1, size_t VAR_2)
{
    const char *VAR_3, *VAR_4, *VAR_5;

    for (VAR_3 = VAR_1, VAR_4 = VAR_1 + VAR_2; VAR_3 && VAR_3 < VAR_4; VAR_3 = VAR_5) {
 VAR_5 = FUNC_0(VAR_3, '"');
 if (VAR_5) {
     VAR_5 += 1;
     FUNC_1(VAR_0, VAR_3, VAR_5 - VAR_3);
     FUNC_1(VAR_0, "\"", 1);
 } else
     FUNC_1(VAR_0, VAR_3, VAR_4 - VAR_3);
    }
}

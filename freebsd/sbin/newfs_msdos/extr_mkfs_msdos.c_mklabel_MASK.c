
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;


 char FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(u_int8_t *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_3 = 0; VAR_3 < 11; VAR_3++) {
 VAR_2 = *VAR_1 ? FUNC_0(*VAR_1++) : ' ';
 *VAR_0++ = !VAR_3 && VAR_2 == '\xe5' ? 5 : VAR_2;
    }
}

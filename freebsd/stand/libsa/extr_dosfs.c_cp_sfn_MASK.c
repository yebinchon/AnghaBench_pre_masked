
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {char* name; char* ext; } ;
typedef TYPE_1__ DOS_DE ;



__attribute__((used)) static void
FUNC_0(u_char *VAR_0, DOS_DE *VAR_1)
{
    u_char *VAR_2;
    int VAR_3, VAR_4;

    VAR_2 = VAR_0;
    if (*VAR_1->name != ' ') {
        for (VAR_3 = 7; VAR_1->name[VAR_3] == ' '; VAR_3--);
        for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++)
            *VAR_2++ = VAR_1->name[VAR_4];
        if (*VAR_1->ext != ' ') {
            *VAR_2++ = '.';
            for (VAR_3 = 2; VAR_1->ext[VAR_3] == ' '; VAR_3--);
            for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++)
                *VAR_2++ = VAR_1->ext[VAR_4];
        }
    }
    *VAR_2 = 0;
    if (*VAR_0 == 5)
        *VAR_0 = 0xe5;
}

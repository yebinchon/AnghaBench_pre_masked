
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int attr; } ;
struct TYPE_8__ {int fatsz; TYPE_2__ root; } ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DOS_DE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*,TYPE_2__**) ;
 int FUNC_1 (char*,char const*,size_t) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static int
FUNC_4(DOS_FS *VAR_3, const char *VAR_4, DOS_DE **VAR_5)
{
    char VAR_6[256];
    DOS_DE *VAR_7;
    char *VAR_8;
    size_t VAR_9;
    int VAR_10;

    VAR_10 = 0;
    VAR_7 = &VAR_3->root;
    while (*VAR_4) {
        while (*VAR_4 == '/')
            VAR_4++;
        if (*VAR_4 == '\0')
            break;
        if (!(VAR_8 = FUNC_3(VAR_4, '/')))
            VAR_8 = FUNC_3(VAR_4, 0);
        if ((VAR_9 = VAR_8 - VAR_4) > 255)
            return (VAR_0);
        FUNC_1(VAR_6, VAR_4, VAR_9);
        VAR_6[VAR_9] = 0;
        VAR_4 = VAR_8;
        if (!(VAR_7->attr & VAR_2))
            return (VAR_1);
        if ((VAR_10 = FUNC_0(VAR_3, FUNC_2(VAR_3->fatsz, VAR_7), VAR_6, &VAR_7)))
            return (VAR_10);
    }
    *VAR_5 = VAR_7;
    return (0);
}

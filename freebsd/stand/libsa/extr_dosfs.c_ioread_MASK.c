
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef char u_char ;
typedef int local_buf ;
struct TYPE_3__ {int fd; } ;
typedef TYPE_1__ DOS_FS ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(DOS_FS *VAR_1, u_int VAR_2, void *VAR_3, size_t VAR_4)
{
    char *VAR_5;
    u_int VAR_6, VAR_7;
    int VAR_8;
    u_char VAR_9[VAR_0];

    VAR_5 = VAR_3;
    if ((VAR_6 = VAR_2 & (VAR_0 - 1))) {
        VAR_2 -= VAR_6;
        if ((VAR_7 = VAR_0 - VAR_6) > VAR_4)
            VAR_7 = VAR_4;
        if ((VAR_8 = FUNC_1(VAR_1->fd, FUNC_0(VAR_2), VAR_9, sizeof(VAR_9))))
            return (VAR_8);
 FUNC_2(VAR_5, VAR_9 + VAR_6, VAR_7);
        VAR_2 += VAR_0;
        VAR_5 += VAR_7;
        VAR_4 -= VAR_7;
    }
    VAR_7 = VAR_4 & (VAR_0 - 1);
    if (VAR_4 -= VAR_7) {
        if ((VAR_8 = FUNC_1(VAR_1->fd, FUNC_0(VAR_2), VAR_5, VAR_4)))
            return (VAR_8);
        VAR_2 += VAR_4;
        VAR_5 += VAR_4;
    }
    if (VAR_7) {
        if ((VAR_8 = FUNC_1(VAR_1->fd, FUNC_0(VAR_2), VAR_9, sizeof(VAR_9))))
            return (VAR_8);
 FUNC_2(VAR_5, VAR_9, VAR_7);
    }
    return (0);
}

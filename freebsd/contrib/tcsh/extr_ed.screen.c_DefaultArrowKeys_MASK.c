
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; int fun; } ;
struct TYPE_4__ {int len; int* buf; } ;
typedef int Char ;
typedef TYPE_1__ CStr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (TYPE_1__*,int *,int ) ;
 int FUNC_1 (char) ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;

void
FUNC_2(void)
{
    static Char VAR_8[] = {033, '[', 'A', '\0'};
    static Char VAR_9[] = {033, '[', 'B', '\0'};
    static Char VAR_10[] = {033, '[', 'C', '\0'};
    static Char VAR_11[] = {033, '[', 'D', '\0'};
    static Char VAR_12[] = {033, '[', 'H', '\0'};
    static Char VAR_13[] = {033, '[', 'F', '\0'};
    static Char VAR_14[] = {033, 'O', 'A', '\0'};
    static Char VAR_15[] = {033, 'O', 'B', '\0'};
    static Char VAR_16[] = {033, 'O', 'C', '\0'};
    static Char VAR_17[] = {033, 'O', 'D', '\0'};
    static Char VAR_18[] = {033, 'O', 'H', '\0'};
    static Char VAR_19[] = {033, 'O', 'F', '\0'};

    CStr VAR_20;

    if (VAR_8[0] == 033)
    {
 VAR_8[0] = FUNC_1('\033');
 VAR_9[0] = FUNC_1('\033');
 VAR_10[0] = FUNC_1('\033');
 VAR_11[0] = FUNC_1('\033');
 VAR_12[0] = FUNC_1('\033');
 VAR_13[0] = FUNC_1('\033');
 VAR_14[0] = FUNC_1('\033');
 VAR_15[0] = FUNC_1('\033');
 VAR_16[0] = FUNC_1('\033');
 VAR_17[0] = FUNC_1('\033');
 VAR_18[0] = FUNC_1('\033');
 VAR_19[0] = FUNC_1('\033');
    }


    VAR_20.len = 3;

    VAR_20.buf = VAR_8; FUNC_0(&VAR_20, &VAR_7[VAR_5].fun, VAR_7[VAR_5].type);
    VAR_20.buf = VAR_9; FUNC_0(&VAR_20, &VAR_7[VAR_0].fun, VAR_7[VAR_0].type);
    VAR_20.buf = VAR_10; FUNC_0(&VAR_20, &VAR_7[VAR_4].fun, VAR_7[VAR_4].type);
    VAR_20.buf = VAR_11; FUNC_0(&VAR_20, &VAR_7[VAR_3].fun, VAR_7[VAR_3].type);
    VAR_20.buf = VAR_12; FUNC_0(&VAR_20, &VAR_7[VAR_2].fun, VAR_7[VAR_2].type);
    VAR_20.buf = VAR_13; FUNC_0(&VAR_20, &VAR_7[VAR_1].fun, VAR_7[VAR_1].type);
    VAR_20.buf = VAR_14; FUNC_0(&VAR_20, &VAR_7[VAR_5].fun, VAR_7[VAR_5].type);
    VAR_20.buf = VAR_15; FUNC_0(&VAR_20, &VAR_7[VAR_0].fun, VAR_7[VAR_0].type);
    VAR_20.buf = VAR_16; FUNC_0(&VAR_20, &VAR_7[VAR_4].fun, VAR_7[VAR_4].type);
    VAR_20.buf = VAR_17; FUNC_0(&VAR_20, &VAR_7[VAR_3].fun, VAR_7[VAR_3].type);
    VAR_20.buf = VAR_18; FUNC_0(&VAR_20, &VAR_7[VAR_2].fun, VAR_7[VAR_2].type);
    VAR_20.buf = VAR_19; FUNC_0(&VAR_20, &VAR_7[VAR_1].fun, VAR_7[VAR_1].type);

    if (VAR_6) {
 VAR_20.len = 2;
 VAR_20.buf = &VAR_8[1]; FUNC_0(&VAR_20, &VAR_7[VAR_5].fun, VAR_7[VAR_5].type);
 VAR_20.buf = &VAR_9[1]; FUNC_0(&VAR_20, &VAR_7[VAR_0].fun, VAR_7[VAR_0].type);
 VAR_20.buf = &VAR_10[1]; FUNC_0(&VAR_20, &VAR_7[VAR_4].fun, VAR_7[VAR_4].type);
 VAR_20.buf = &VAR_11[1]; FUNC_0(&VAR_20, &VAR_7[VAR_3].fun, VAR_7[VAR_3].type);
 VAR_20.buf = &VAR_12[1]; FUNC_0(&VAR_20, &VAR_7[VAR_2].fun, VAR_7[VAR_2].type);
 VAR_20.buf = &VAR_13[1]; FUNC_0(&VAR_20, &VAR_7[VAR_1].fun, VAR_7[VAR_1].type);
 VAR_20.buf = &VAR_14[1]; FUNC_0(&VAR_20, &VAR_7[VAR_5].fun, VAR_7[VAR_5].type);
 VAR_20.buf = &VAR_15[1]; FUNC_0(&VAR_20, &VAR_7[VAR_0].fun, VAR_7[VAR_0].type);
 VAR_20.buf = &VAR_16[1]; FUNC_0(&VAR_20, &VAR_7[VAR_4].fun, VAR_7[VAR_4].type);
 VAR_20.buf = &VAR_17[1]; FUNC_0(&VAR_20, &VAR_7[VAR_3].fun, VAR_7[VAR_3].type);
 VAR_20.buf = &VAR_18[1]; FUNC_0(&VAR_20, &VAR_7[VAR_2].fun, VAR_7[VAR_2].type);
 VAR_20.buf = &VAR_19[1]; FUNC_0(&VAR_20, &VAR_7[VAR_1].fun, VAR_7[VAR_1].type);
    }
}

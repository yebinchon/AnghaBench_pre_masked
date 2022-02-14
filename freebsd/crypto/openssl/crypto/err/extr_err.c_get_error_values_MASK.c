
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int bottom; int top; int* err_flags; unsigned long* err_buffer; char** err_file; int* err_line; char** err_data; int* err_data_flags; } ;
typedef TYPE_1__ ERR_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static unsigned long FUNC_3(int VAR_3, int VAR_4, const char **VAR_5,
                                      int *VAR_6, const char **VAR_7,
                                      int *VAR_8)
{
    int VAR_9 = 0;
    ERR_STATE *VAR_10;
    unsigned long VAR_11;

    VAR_10 = FUNC_0();
    if (VAR_10 == ((void*)0))
        return 0;

    if (VAR_3 && VAR_4) {
        if (VAR_5)
            *VAR_5 = "";
        if (VAR_6)
            *VAR_6 = 0;
        if (VAR_7)
            *VAR_7 = "";
        if (VAR_8)
            *VAR_8 = 0;

        return VAR_2;
    }

    while (VAR_10->bottom != VAR_10->top) {
        if (VAR_10->err_flags[VAR_10->top] & VAR_0) {
            FUNC_1(VAR_10, VAR_10->top);
            VAR_10->top = VAR_10->top > 0 ? VAR_10->top - 1 : VAR_1 - 1;
            continue;
        }
        VAR_9 = (VAR_10->bottom + 1) % VAR_1;
        if (VAR_10->err_flags[VAR_9] & VAR_0) {
            VAR_10->bottom = VAR_9;
            FUNC_1(VAR_10, VAR_10->bottom);
            continue;
        }
        break;
    }

    if (VAR_10->bottom == VAR_10->top)
        return 0;

    if (VAR_4)
        VAR_9 = VAR_10->top;
    else
        VAR_9 = (VAR_10->bottom + 1) % VAR_1;

    VAR_11 = VAR_10->err_buffer[VAR_9];
    if (VAR_3) {
        VAR_10->bottom = VAR_9;
        VAR_10->err_buffer[VAR_9] = 0;
    }

    if (VAR_5 != ((void*)0) && VAR_6 != ((void*)0)) {
        if (VAR_10->err_file[VAR_9] == ((void*)0)) {
            *VAR_5 = "NA";
            *VAR_6 = 0;
        } else {
            *VAR_5 = VAR_10->err_file[VAR_9];
            *VAR_6 = VAR_10->err_line[VAR_9];
        }
    }

    if (VAR_7 == ((void*)0)) {
        if (VAR_3) {
            FUNC_2(VAR_10, VAR_9);
        }
    } else {
        if (VAR_10->err_data[VAR_9] == ((void*)0)) {
            *VAR_7 = "";
            if (VAR_8 != ((void*)0))
                *VAR_8 = 0;
        } else {
            *VAR_7 = VAR_10->err_data[VAR_9];
            if (VAR_8 != ((void*)0))
                *VAR_8 = VAR_10->err_data_flags[VAR_9];
        }
    }
    return VAR_11;
}

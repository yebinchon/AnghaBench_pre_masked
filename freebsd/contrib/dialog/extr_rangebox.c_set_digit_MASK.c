
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value_len; int current; size_t value_col; scalar_t__ min_value; scalar_t__ max_value; } ;
typedef TYPE_1__ VALUE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int,int) ;
 long FUNC_1 (char*,char**,int) ;

__attribute__((used)) static bool
FUNC_2(VALUE * VAR_2, int VAR_3)
{
    bool VAR_4 = VAR_0;
    char VAR_5[80];
    long VAR_6;
    char *VAR_7 = 0;

    FUNC_0(VAR_5, "%*d", VAR_2->value_len, VAR_2->current);
    VAR_5[VAR_2->value_col] = (char) VAR_3;
    VAR_6 = FUNC_1(VAR_5, &VAR_7, 10);
    if (VAR_7 == 0 || *VAR_7 == '\0') {
 if ((VAR_6 <= (long) VAR_2->max_value) &&
     (VAR_6 >= (long) VAR_2->min_value)) {
     VAR_4 = VAR_1;
     VAR_2->current = (int) VAR_6;
 }
    }

    return VAR_4;
}

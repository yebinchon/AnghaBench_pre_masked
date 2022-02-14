
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct get_options {int long_flag; int short_flag; int terse_flag; int * column_info_string; } ;
struct get_entry_data {int * table; int format; scalar_t__ extra_mask; scalar_t__ mask; int * chead; int ** ctail; } ;
typedef scalar_t__ krb5_error_code ;


 int * VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int ,char const*,struct get_entry_data*) ;
 int FUNC_1 (struct get_entry_data*) ;
 int FUNC_2 (char const*,int,char**) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (struct get_entry_data*,int *) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(struct get_options *VAR_6, const char *VAR_7, int VAR_8, char **VAR_9)
{
    int VAR_10;
    krb5_error_code VAR_11;
    struct get_entry_data VAR_12;

    if(VAR_6->long_flag == -1 && (VAR_6->short_flag == 1 || VAR_6->terse_flag == 1))
 VAR_6->long_flag = 0;
    if(VAR_6->short_flag == -1 && (VAR_6->long_flag == 1 || VAR_6->terse_flag == 1))
 VAR_6->short_flag = 0;
    if(VAR_6->terse_flag == -1 && (VAR_6->long_flag == 1 || VAR_6->short_flag == 1))
 VAR_6->terse_flag = 0;
    if(VAR_6->long_flag == 0 && VAR_6->short_flag == 0 && VAR_6->terse_flag == 0)
 VAR_6->short_flag = 1;

    if (VAR_6->terse_flag)
        return FUNC_2(VAR_7, VAR_8, VAR_9);

    VAR_12.table = ((void*)0);
    VAR_12.chead = ((void*)0);
    VAR_12.ctail = &VAR_12.chead;
    VAR_12.mask = 0;
    VAR_12.extra_mask = 0;

    if(VAR_6->short_flag) {
 VAR_12.table = FUNC_3();
 FUNC_6(VAR_12.table, "  ");
 VAR_12.format = VAR_4;
    } else
 VAR_12.format = VAR_3;
    if(VAR_6->column_info_string == ((void*)0)) {
 if(VAR_6->long_flag)
     VAR_11 = FUNC_7(&VAR_12, VAR_0);
 else
     VAR_11 = FUNC_7(&VAR_12, VAR_1);
    } else
 VAR_11 = FUNC_7(&VAR_12, VAR_6->column_info_string);

    if(VAR_11 != 0) {
 if(VAR_12.table != ((void*)0))
     FUNC_4(VAR_12.table);
 return 0;
    }

    for(VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
 VAR_11 = FUNC_0(VAR_9[VAR_10], VAR_2, VAR_7, &VAR_12);

    if(VAR_12.table != ((void*)0)) {
 FUNC_5(VAR_12.table, VAR_5);
 FUNC_4(VAR_12.table);
    }
    FUNC_1(&VAR_12);
    return VAR_11 != 0;
}

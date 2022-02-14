
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef enum UI_string_types { ____Placeholder_UI_string_types } UI_string_types ;
struct TYPE_4__ {char const* out_string; int input_flags; int type; char* result_buf; int flags; } ;
typedef TYPE_1__ UI_STRING ;
typedef int UI ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static UI_STRING *FUNC_2(UI *VAR_7, const char *VAR_8,
                                          int VAR_9,
                                          enum UI_string_types VAR_10,
                                          int VAR_11, char *VAR_12)
{
    UI_STRING *VAR_13 = ((void*)0);

    if (VAR_8 == ((void*)0)) {
        FUNC_1(VAR_5, VAR_0);
    } else if ((VAR_10 == VAR_3 || VAR_10 == VAR_4
                || VAR_10 == VAR_2) && VAR_12 == ((void*)0)) {
        FUNC_1(VAR_5, VAR_6);
    } else if ((VAR_13 = FUNC_0(sizeof(*VAR_13))) != ((void*)0)) {
        VAR_13->out_string = VAR_8;
        VAR_13->flags = VAR_9 ? VAR_1 : 0;
        VAR_13->input_flags = VAR_11;
        VAR_13->type = VAR_10;
        VAR_13->result_buf = VAR_12;
    }
    return VAR_13;
}

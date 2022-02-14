
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_xof_flags_t ;
typedef int xo_handle_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

xo_handle_t *
FUNC_3 (const char *VAR_1, xo_xof_flags_t VAR_2)
{
    xo_handle_t *VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_2);
    if (VAR_3) {
 if (FUNC_2(VAR_3, VAR_1)) {
     FUNC_1(VAR_3);
     VAR_3 = ((void*)0);
 }
    }

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int xo_errno; scalar_t__ xo_columns; } ;
typedef TYPE_1__ xo_handle_t ;
typedef int xo_field_info_t ;
typedef int xo_emit_flags_t ;
typedef int fields ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int VAR_3 ;
 unsigned int FUNC_3 (TYPE_1__*,char const*) ;
 int FUNC_4 (TYPE_1__*,int *,unsigned int,char const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int *,unsigned int,char const*) ;
 int FUNC_6 (char const*,int *,unsigned int) ;
 scalar_t__ FUNC_7 (char const*,int **,unsigned int*) ;

__attribute__((used)) static int
FUNC_8 (xo_handle_t *VAR_4, xo_emit_flags_t VAR_5, const char *VAR_6)
{
    VAR_4->xo_columns = 0;
    VAR_4->xo_errno = VAR_3;

    if (VAR_6 == ((void*)0))
 return 0;

    unsigned VAR_7;
    xo_field_info_t *VAR_8 = ((void*)0);


    if (FUNC_0(VAR_4, VAR_1))
 VAR_5 |= VAR_0;
    if (FUNC_0(VAR_4, VAR_2))
 VAR_5 &= ~VAR_0;






    if (!(VAR_5 & VAR_0)
 || FUNC_7(VAR_6, &VAR_8, &VAR_7) != 0
 || VAR_8 == ((void*)0)) {


 VAR_7 = FUNC_3(VAR_4, VAR_6);
 VAR_8 = FUNC_1(VAR_7 * sizeof(VAR_8[0]));
 FUNC_2(VAR_8, VAR_7 * sizeof(VAR_8[0]));

 if (FUNC_5(VAR_4, VAR_8, VAR_7, VAR_6))
     return -1;

 if (VAR_5 & VAR_0) {

     FUNC_6(VAR_6, VAR_8, VAR_7);
 }
    }

    return FUNC_4(VAR_4, VAR_8, VAR_7, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xo_xff_flags_t ;
typedef int xo_handle_t ;
struct TYPE_7__ {int xb_curp; } ;
typedef TYPE_1__ xo_buffer_t ;
typedef scalar_t__ ssize_t ;






 int FUNC_0 (int ,char const*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6 (xo_handle_t *VAR_0, xo_buffer_t *VAR_1,
        const char *VAR_2, ssize_t VAR_3, xo_xff_flags_t VAR_4)
{
    if (!FUNC_1(VAR_1, VAR_3))
 return;

    FUNC_0(VAR_1->xb_curp, VAR_2, VAR_3);

    switch (FUNC_5(VAR_0)) {
    case 128:
    case 131:
 VAR_3 = FUNC_4(VAR_1, VAR_3, VAR_4);
 break;

    case 130:
 VAR_3 = FUNC_2(VAR_1, VAR_3, VAR_4);
 break;

    case 129:
 VAR_3 = FUNC_3(VAR_1, VAR_3, VAR_4);
 break;
    }

    VAR_1->xb_curp += VAR_3;
}

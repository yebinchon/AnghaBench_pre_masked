
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int xo_mbstate; } ;
typedef TYPE_1__ xo_handle_t ;
struct TYPE_9__ {int xb_curp; } ;
typedef TYPE_2__ xo_buffer_t ;
typedef scalar_t__ wchar_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int *) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 scalar_t__ FUNC_6 (char const*,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_8 (xo_handle_t *VAR_2, xo_buffer_t *VAR_3,
    const char *VAR_4, ssize_t VAR_5)
{
    wchar_t VAR_6;
    ssize_t VAR_7;






    VAR_6 = FUNC_6(VAR_4, VAR_5);
    if (VAR_6 == (wchar_t) -1) {
 FUNC_5(VAR_2, "invalid UTF-8 byte sequence");
 return 0;
    }

    if (FUNC_0(VAR_2, VAR_1)) {
 if (!FUNC_4(VAR_3, VAR_5))
     return 0;

 FUNC_2(VAR_3->xb_curp, VAR_4, VAR_5);
 VAR_3->xb_curp += VAR_5;

    } else {
 if (!FUNC_4(VAR_3, VAR_0 + 1))
     return 0;

 FUNC_1(&VAR_2->xo_mbstate, sizeof(VAR_2->xo_mbstate));
 VAR_7 = FUNC_3(VAR_3->xb_curp, VAR_6, &VAR_2->xo_mbstate);

 if (VAR_7 <= 0) {
     FUNC_5(VAR_2, "could not convert wide char: %lx",
         (unsigned long) VAR_6);
     return 0;
 }
 VAR_3->xb_curp += VAR_7;
    }

    return FUNC_7(VAR_6);
}

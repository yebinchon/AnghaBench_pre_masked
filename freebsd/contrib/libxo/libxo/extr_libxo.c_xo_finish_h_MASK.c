
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int xo_ssize_t ;
struct TYPE_14__ {int xo_stack; } ;
typedef TYPE_1__ xo_handle_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int *,int *,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char const*,int ,char*,char const*) ;
 int FUNC_9 (TYPE_1__*) ;

xo_ssize_t
FUNC_10 (xo_handle_t *VAR_6)
{
    const char *VAR_7 = "";
    VAR_6 = FUNC_3(VAR_6);

    if (!FUNC_0(VAR_6, VAR_0))
 FUNC_4(VAR_6, VAR_6->xo_stack);

    switch (FUNC_9(VAR_6)) {
    case 128:
 if (!FUNC_0(VAR_6, VAR_1)) {
     const char *VAR_8 = FUNC_0(VAR_6, VAR_2) ? "\n" : "";

     if (FUNC_2(VAR_6, VAR_4))
  FUNC_1(VAR_6, VAR_4);
     else if (!FUNC_2(VAR_6, VAR_3)) {
  VAR_7 = "{ ";
  VAR_8 = "";
     }

     FUNC_8(VAR_6, "%s%*s%s}\n",
        VAR_8, FUNC_7(VAR_6), "", VAR_7);
 }
 break;

    case 129:
 FUNC_5(VAR_6, VAR_5, ((void*)0), ((void*)0), 0);
 break;
    }

    return FUNC_6(VAR_6);
}

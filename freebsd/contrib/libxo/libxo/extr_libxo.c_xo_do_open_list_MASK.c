
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int xo_xof_flags_t ;
struct TYPE_17__ {size_t xo_depth; TYPE_1__* xo_stack; } ;
typedef TYPE_2__ xo_handle_t ;
typedef int ssize_t ;
struct TYPE_16__ {int xs_flags; } ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char const*,int,int,int ,int) ;
 int FUNC_4 (TYPE_2__*,char const*) ;
 int FUNC_5 (TYPE_2__*,int ,char const*,int *,int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,char*,char const*,int ,char*,char const*,char const*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_12 (xo_handle_t *VAR_8, xo_xof_flags_t VAR_9, const char *VAR_10)
{
    ssize_t VAR_11 = 0;
    int VAR_12 = 0;

    VAR_8 = FUNC_2(VAR_8);

    const char *VAR_13 = FUNC_0(VAR_8, VAR_1) ? "\n" : "";
    const char *VAR_14 = "";

    switch (FUNC_11(VAR_8)) {
    case 128:

 VAR_12 = 1;
 if (!FUNC_0(VAR_8, VAR_0)
  && !FUNC_1(VAR_8, VAR_2))
     FUNC_4(VAR_8, VAR_13);

 if (VAR_10 == ((void*)0)) {
     FUNC_6(VAR_8, "NULL passed for list name");
     VAR_10 = VAR_3;
 }

 FUNC_10(VAR_8);

 if (VAR_8->xo_stack[VAR_8->xo_depth].xs_flags & VAR_6)
     VAR_14 = FUNC_0(VAR_8, VAR_1) ? ",\n" : ", ";
 VAR_8->xo_stack[VAR_8->xo_depth].xs_flags |= VAR_6;

 VAR_11 = FUNC_8(VAR_8, "%s%*s\"%s\": [%s",
         VAR_14, FUNC_7(VAR_8), "", VAR_10, VAR_13);
 break;

    case 129:
 VAR_11 = FUNC_5(VAR_8, VAR_4, VAR_10, ((void*)0), VAR_9);
 break;
    }

    FUNC_3(VAR_8, VAR_10, 1, VAR_12, VAR_7,
      VAR_5 | FUNC_9(VAR_9));

    return VAR_11;
}

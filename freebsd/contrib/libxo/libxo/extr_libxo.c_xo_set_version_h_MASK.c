
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int xo_version; } ;
typedef TYPE_1__ xo_handle_t ;


 int VAR_0 ;



 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (TYPE_1__*,char*,char*,char const*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int *,char const*,int ) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7 (xo_handle_t *VAR_1, const char *VAR_2)
{
    VAR_1 = FUNC_2(VAR_1);

    if (VAR_2 == ((void*)0) || FUNC_0(VAR_2, '"') != ((void*)0))
 return;

    if (!FUNC_6(VAR_1))
 return;

    switch (FUNC_5(VAR_1)) {
    case 128:

 FUNC_1(VAR_1, "version", "%s", VAR_2);
 break;

    case 129:




 VAR_1->xo_version = FUNC_4(VAR_2, -1);
 break;

    case 130:
 FUNC_3(VAR_1, VAR_0, ((void*)0), VAR_2, 0);
 break;
    }
}

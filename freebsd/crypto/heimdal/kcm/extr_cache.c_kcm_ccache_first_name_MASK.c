
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kcm_client ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_3__ {int name; int session; int uid; struct TYPE_3__* next; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 char* FUNC_3 (int ) ;

char *
FUNC_4(kcm_client *VAR_2)
{
    kcm_ccache VAR_3;
    char *VAR_4 = ((void*)0);

    FUNC_0(&VAR_1);

    for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->next) {
 if (FUNC_2(VAR_2, VAR_3->uid, VAR_3->session))
     break;
    }
    if (VAR_3)
 VAR_4 = FUNC_3(VAR_3->name);
    FUNC_1(&VAR_1);
    return VAR_4;
}

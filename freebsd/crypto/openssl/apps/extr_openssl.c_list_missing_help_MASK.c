
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ func; int * name; TYPE_1__* help; } ;
struct TYPE_4__ {int * name; int * helpstr; } ;
typedef TYPE_1__ OPTIONS ;
typedef TYPE_2__ FUNCTION ;


 int FUNC_0 (int ,char*,int *,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
    const FUNCTION *VAR_3;
    const OPTIONS *VAR_4;

    for (VAR_3 = VAR_2; VAR_3->name != ((void*)0); VAR_3++) {
        if ((VAR_4 = VAR_3->help) != ((void*)0)) {

            for ( ; VAR_4->name != ((void*)0); VAR_4++) {
                if (VAR_4->helpstr == ((void*)0))
                    FUNC_0(VAR_0, "%s %s\n", VAR_3->name, VAR_4->name);
            }
        } else if (VAR_3->func != VAR_1) {

            FUNC_0(VAR_0, "%s *\n", VAR_3->name);
        }
    }
}

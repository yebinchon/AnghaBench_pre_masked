
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refCount; } ;
typedef int LstNode ;


 TYPE_1__* FUNC_0 (int *,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

void
FUNC_7(void)
{
    if (VAR_0 != ((void*)0)) {
 LstNode VAR_3;


 VAR_3 = FUNC_3(VAR_2, VAR_0);
 (void)FUNC_4(VAR_2, VAR_3);
    }

    VAR_0 = FUNC_0(((void*)0), ".");

    if (VAR_0 == ((void*)0)) {
 FUNC_2("Cannot open `.' (%s)", FUNC_6(VAR_1));
 FUNC_5(1);
    }





    VAR_0->refCount += 1;
    FUNC_1();
}

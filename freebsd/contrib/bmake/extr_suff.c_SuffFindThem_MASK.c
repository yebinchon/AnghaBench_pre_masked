
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* file; TYPE_1__* suff; } ;
struct TYPE_6__ {int searchPath; } ;
typedef TYPE_2__ Src ;
typedef int Lst ;


 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int VAR_1 ;
 int * FUNC_6 (char*,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static Src *
FUNC_9(Lst VAR_3, Lst VAR_4)
{
    Src *VAR_5;
    Src *VAR_6;
    char *VAR_7;

    VAR_6 = ((void*)0);

    while (!FUNC_4 (VAR_3)) {
 VAR_5 = (Src *)FUNC_3(VAR_3);

 if (FUNC_0(VAR_0)) {
     FUNC_7(VAR_2, "\ttrying %s...", VAR_5->file);
 }





 if (FUNC_6(VAR_5->file, VAR_1) != ((void*)0)) {



     VAR_6 = VAR_5;
     break;
 }

 if ((VAR_7 = FUNC_1(VAR_5->file, VAR_5->suff->searchPath)) != ((void*)0)) {
     VAR_6 = VAR_5;



     FUNC_8(VAR_7);
     break;
 }

 if (FUNC_0(VAR_0)) {
     FUNC_7(VAR_2, "not there\n");
 }

 FUNC_5(VAR_3, VAR_5);
 FUNC_2(VAR_4, VAR_5);
    }

    if (FUNC_0(VAR_0) && VAR_6) {
 FUNC_7(VAR_2, "got it\n");
    }
    return (VAR_6);
}

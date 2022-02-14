
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GNode ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int ,int *,char**) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(GNode *VAR_2)
{
    if ((VAR_2 != ((void*)0)) && !FUNC_1 (VAR_2)) {
 char *VAR_3;
 char *VAR_4 = FUNC_2(VAR_0, VAR_2, &VAR_3);

 if (!VAR_1 && FUNC_3(VAR_4) != -1) {
     FUNC_0("*** %s removed", VAR_4);
 }

 FUNC_4(VAR_3);
    }
}

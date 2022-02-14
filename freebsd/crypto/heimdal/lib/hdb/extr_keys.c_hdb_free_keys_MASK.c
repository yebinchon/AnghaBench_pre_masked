
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_5__ {int key; struct TYPE_5__* salt; struct TYPE_5__* mkvno; } ;
typedef TYPE_1__ Key ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;

void
FUNC_3 (krb5_context VAR_0, int VAR_1, Key *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
 FUNC_0(VAR_2[VAR_3].mkvno);
 VAR_2[VAR_3].mkvno = ((void*)0);
 if (VAR_2[VAR_3].salt != ((void*)0)) {
     FUNC_1(VAR_2[VAR_3].salt);
     FUNC_0(VAR_2[VAR_3].salt);
     VAR_2[VAR_3].salt = ((void*)0);
 }
 FUNC_2(VAR_0, &VAR_2[VAR_3].key);
    }
    FUNC_0 (VAR_2);
}

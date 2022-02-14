
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * spa_label_features; } ;
typedef TYPE_1__ spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;


 int * FUNC_0 (int *,int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(spa_t *VAR_0)
{
 nvlist_t *VAR_1 = VAR_0->spa_label_features;

 (void) FUNC_2("label config:\n");
 for (nvpair_t *VAR_2 = FUNC_0(VAR_1, ((void*)0));
     VAR_2 != ((void*)0);
     VAR_2 = FUNC_0(VAR_1, VAR_2)) {
  (void) FUNC_2("\t%s\n", FUNC_1(VAR_2));
 }
}

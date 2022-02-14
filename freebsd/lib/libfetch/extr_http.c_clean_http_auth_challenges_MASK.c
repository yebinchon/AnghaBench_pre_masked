
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** challenges; } ;
typedef TYPE_1__ http_auth_challenges_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(http_auth_challenges_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->challenges[VAR_2] != ((void*)0)) {
   FUNC_0(VAR_1->challenges[VAR_2]);
   FUNC_1(VAR_1->challenges[VAR_2]);
  }
 }
 FUNC_2(VAR_1);
}

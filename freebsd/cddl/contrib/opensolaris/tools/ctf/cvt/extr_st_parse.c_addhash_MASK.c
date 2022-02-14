
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int t_id; struct TYPE_7__* t_next; int * t_name; struct TYPE_7__* t_hash; } ;
typedef TYPE_1__ tdesc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_1__** VAR_0 ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;
 TYPE_1__** VAR_1 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(tdesc_t *VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 tdesc_t *VAR_5;
 char VAR_6 = 0, VAR_7 = 0;





 VAR_5 = FUNC_2(VAR_3);

 if (VAR_5 == ((void*)0)) {
  VAR_2->t_id = VAR_3;
  VAR_2->t_hash = VAR_0[VAR_4];
  VAR_0[VAR_4] = VAR_2;
  VAR_6 = 1;
 }

 if (VAR_2->t_name != ((void*)0)) {
  VAR_5 = FUNC_3(VAR_2->t_name);
  if (VAR_5 == ((void*)0)) {
   VAR_4 = FUNC_1(VAR_2->t_name);
   VAR_2->t_next = VAR_1[VAR_4];
   VAR_1[VAR_4] = VAR_2;
   VAR_7 = 1;
  }
 }
 if (!VAR_6 && !VAR_7) {
  FUNC_4("stabs: broken hash\n");
 }
}

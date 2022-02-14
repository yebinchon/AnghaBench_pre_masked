
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_4__ {int * tcache; struct TYPE_4__* next; } ;
typedef TYPE_1__ tcaches_t ;
typedef int tcache_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

bool
FUNC_7(tsd_t *VAR_4, unsigned *VAR_5) {
 FUNC_6(FUNC_5(FUNC_4(VAR_4)), 0);

 bool VAR_6;

 if (FUNC_3(VAR_4)) {
  VAR_6 = 1;
  goto label_return;
 }

 tcache_t *VAR_7 = FUNC_2(VAR_4);
 if (VAR_7 == ((void*)0)) {
  VAR_6 = 1;
  goto label_return;
 }

 tcaches_t *VAR_8;
 FUNC_0(FUNC_4(VAR_4), &VAR_2);
 if (VAR_1 != ((void*)0)) {
  VAR_8 = VAR_1;
  VAR_1 = VAR_1->next;
  VAR_8->tcache = VAR_7;
  *VAR_5 = (unsigned)(VAR_8 - VAR_0);
 } else {
  VAR_8 = &VAR_0[VAR_3];
  VAR_8->tcache = VAR_7;
  *VAR_5 = VAR_3;
  VAR_3++;
 }
 FUNC_1(FUNC_4(VAR_4), &VAR_2);

 VAR_6 = 0;
label_return:
 FUNC_6(FUNC_5(FUNC_4(VAR_4)), 0);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
typedef int extent_hooks_t ;
struct TYPE_5__ {unsigned int arena_ind; } ;
typedef TYPE_1__ ctl_arena_t ;
struct TYPE_6__ {unsigned int narenas; int destroyed; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,unsigned int,int *) ;
 int * FUNC_1 (int *,unsigned int,int,int) ;
 TYPE_4__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static unsigned
FUNC_5(tsd_t *VAR_3, extent_hooks_t *VAR_4) {
 unsigned VAR_5;
 ctl_arena_t *VAR_6;

 if ((VAR_6 = FUNC_2(&VAR_1->destroyed, VAR_2)) !=
     ((void*)0)) {
  FUNC_3(&VAR_1->destroyed, VAR_6, VAR_2);
  VAR_5 = VAR_6->arena_ind;
 } else {
  VAR_5 = VAR_1->narenas;
 }


 if (FUNC_1(VAR_3, VAR_5, 0, 1) == ((void*)0)) {
  return VAR_0;
 }


 if (FUNC_0(FUNC_4(VAR_3), VAR_5, VAR_4) == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_5 == VAR_1->narenas) {
  VAR_1->narenas++;
 }

 return VAR_5;
}

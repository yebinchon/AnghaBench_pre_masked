
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int init_lock; } ;
typedef TYPE_1__ rtree_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

bool
FUNC_3(rtree_t *VAR_2, bool VAR_3) {





 FUNC_0(VAR_3);


 if (FUNC_1(&VAR_2->init_lock, "rtree", VAR_0,
     VAR_1)) {
  return 1;
 }

 return 0;
}

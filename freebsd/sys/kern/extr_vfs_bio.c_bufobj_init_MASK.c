
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bv_hd; } ;
struct TYPE_3__ {int bv_hd; } ;
struct bufobj {int bo_domain; TYPE_2__ bo_dirty; TYPE_1__ bo_clean; void* bo_private; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int volatile*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(struct bufobj *VAR_1, void *VAR_2)
{
 static volatile int VAR_3;

        VAR_1->bo_domain =
            FUNC_2(&VAR_3, 1) % VAR_0;
        FUNC_3(FUNC_0(VAR_1), "bufobj interlock");
        VAR_1->bo_private = VAR_2;
        FUNC_1(&VAR_1->bo_clean.bv_hd);
        FUNC_1(&VAR_1->bo_dirty.bv_hd);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int entropy; } ;
struct TYPE_5__ {int lock; TYPE_1__ pool; } ;
typedef TYPE_2__ isc_entropy_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

unsigned int
FUNC_2(isc_entropy_t *VAR_0) {
 unsigned int VAR_1;

 FUNC_0(&VAR_0->lock);
 VAR_1 = VAR_0->pool.entropy;
 FUNC_1(&VAR_0->lock);

 return VAR_1;
}

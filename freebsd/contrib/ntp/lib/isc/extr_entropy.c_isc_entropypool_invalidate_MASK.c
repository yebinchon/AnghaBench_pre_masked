
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pool; scalar_t__ rotate; scalar_t__ pseudo; scalar_t__ entropy; scalar_t__ cursor; } ;
typedef TYPE_1__ isc_entropypool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1(isc_entropypool_t *VAR_1) {
 VAR_1->cursor = 0;
 VAR_1->entropy = 0;
 VAR_1->pseudo = 0;
 VAR_1->rotate = 0;
 FUNC_0(VAR_1->pool, 0, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_uint32_t ;
struct TYPE_4__ {int entropy; } ;
struct TYPE_5__ {TYPE_1__ pool; } ;
typedef TYPE_2__ isc_entropy_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static inline void
FUNC_1(isc_entropy_t *VAR_0, isc_uint32_t VAR_1) {
 VAR_1 = FUNC_0(VAR_1, VAR_0->pool.entropy);
 VAR_0->pool.entropy -= VAR_1;
}

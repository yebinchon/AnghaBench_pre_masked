
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* buf; int nports; } ;
typedef TYPE_1__ isc_portset_t ;
typedef int in_port_t ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static inline void
FUNC_1(isc_portset_t *VAR_0, in_port_t VAR_1) {
 if (!FUNC_0(VAR_0, VAR_1)) {
  VAR_0->nports++;
  VAR_0->buf[VAR_1 >> 5] |= (1 << (VAR_1 & 31));
 }
}

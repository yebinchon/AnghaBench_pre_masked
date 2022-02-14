
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_reqlist {scalar_t__ kva; struct xbb_softc* xbb; } ;
struct xbb_softc {scalar_t__ kva; scalar_t__ gnt_base_addr; } ;


 int VAR_0 ;

__attribute__((used)) static inline uintptr_t
FUNC_0(struct xbb_xen_reqlist *VAR_1, int VAR_2, int VAR_3)
{
 struct xbb_softc *VAR_4;

 VAR_4 = VAR_1->xbb;

 return ((uintptr_t)(VAR_4->gnt_base_addr +
  (uintptr_t)(VAR_1->kva - VAR_4->kva) +
  (VAR_0 * VAR_2) + (VAR_3 << 9)));
}

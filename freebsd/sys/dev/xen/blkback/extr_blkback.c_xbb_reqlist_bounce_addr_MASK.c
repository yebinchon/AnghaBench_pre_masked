
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct xbb_xen_reqlist {int * bounce; } ;


 int VAR_0 ;

__attribute__((used)) static inline uint8_t *
FUNC_0(struct xbb_xen_reqlist *VAR_1, int VAR_2, int VAR_3)
{
 return (VAR_1->bounce + (VAR_0 * VAR_2) + (VAR_3 << 9));
}

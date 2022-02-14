
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int flags; } ;
struct ahd_dma_seg {int dummy; } ;
struct ahd_dma64_seg {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static __inline size_t
FUNC_0(struct ahd_softc *VAR_1)
{
 if ((VAR_1->flags & VAR_0) != 0)
  return (sizeof(struct ahd_dma64_seg));
 return (sizeof(struct ahd_dma_seg));
}

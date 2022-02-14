
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int flags; } ;
struct ahd_dma_seg {int dummy; } ;
struct ahd_dma64_seg {int dummy; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(struct ahd_softc *VAR_2)
{
 bus_size_t VAR_3;

 VAR_3 = sizeof(struct ahd_dma_seg) * VAR_1;
 if ((VAR_2->flags & VAR_0) != 0)
  VAR_3 = sizeof(struct ahd_dma64_seg) * VAR_1;
 return (VAR_3);
}

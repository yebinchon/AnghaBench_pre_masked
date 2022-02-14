
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_softc {int shared; int shared_dma; } ;
struct wpi_shared {int dummy; } ;


 int FUNC_0 (struct wpi_softc*,int *,void**,int,int) ;

__attribute__((used)) static int
FUNC_1(struct wpi_softc *VAR_0)
{

 return FUNC_0(VAR_0, &VAR_0->shared_dma,
     (void **)&VAR_0->shared, sizeof (struct wpi_shared), 4096);
}

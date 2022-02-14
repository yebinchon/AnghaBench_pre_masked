
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_mmio_platform_softc {int use_pio; void* dev; int pio_recv; int pio_send; } ;
struct fdt_ic {int iph; void* dev; } ;
typedef int phandle_t ;
typedef void* device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct fdt_ic*,int ) ;
 struct virtio_mmio_platform_softc* FUNC_1 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct fdt_ic* FUNC_2 (int,int ,int) ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (struct virtio_mmio_platform_softc*,char*,int *) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6)
{
 struct virtio_mmio_platform_softc *VAR_7;
 struct fdt_ic *VAR_8;
 phandle_t VAR_9;

 VAR_7 = FUNC_1(VAR_6);
 VAR_7->dev = VAR_6;
 VAR_7->use_pio = 1;

 if ((FUNC_4(VAR_7, "pio-send", &VAR_7->pio_send) != 0) ||
     (FUNC_4(VAR_7, "pio-recv", &VAR_7->pio_recv) != 0))
  VAR_7->use_pio = 0;

 if ((VAR_9 = FUNC_3(VAR_7->dev)) == -1)
  return (VAR_0);

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1, VAR_2|VAR_3);
 VAR_8->iph = VAR_9;
 VAR_8->dev = VAR_6;
 FUNC_0(&VAR_4, VAR_8, VAR_5);

 return (0);
}

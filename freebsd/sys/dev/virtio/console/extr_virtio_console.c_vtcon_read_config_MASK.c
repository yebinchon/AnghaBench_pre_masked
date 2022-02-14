
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtcon_softc {int vtcon_dev; } ;
struct virtio_console_config {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,struct virtio_console_config*) ;
 int FUNC_1 (struct virtio_console_config*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct vtcon_softc *VAR_5, struct virtio_console_config *VAR_6)
{
 device_t VAR_7;

 VAR_7 = VAR_5->vtcon_dev;

 FUNC_1(VAR_6, sizeof(struct virtio_console_config));

 FUNC_0(VAR_7, VAR_1, VAR_2, VAR_6);
 FUNC_0(VAR_7, VAR_1, VAR_4, VAR_6);
 FUNC_0(VAR_7, VAR_0, VAR_3, VAR_6);
}

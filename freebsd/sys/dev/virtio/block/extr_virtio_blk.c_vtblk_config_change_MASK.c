
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct vtblk_softc {TYPE_1__* vtblk_disk; } ;
struct virtio_blk_config {int capacity; } ;
typedef int device_t ;
struct TYPE_2__ {int d_mediasize; } ;


 struct vtblk_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vtblk_softc*,struct virtio_blk_config*) ;
 int FUNC_2 (struct vtblk_softc*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct vtblk_softc *VAR_1;
 struct virtio_blk_config VAR_2;
 uint64_t VAR_3;

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, &VAR_2);


 VAR_3 = VAR_2.capacity * 512;

 if (VAR_1->vtblk_disk->d_mediasize != VAR_3)
  FUNC_2(VAR_1, VAR_3);

 return (0);
}

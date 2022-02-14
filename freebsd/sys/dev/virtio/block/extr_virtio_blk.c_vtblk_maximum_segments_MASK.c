
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; int vtblk_dev; } ;
struct virtio_blk_config {int seg_max; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct vtblk_softc *VAR_6,
    struct virtio_blk_config *VAR_7)
{
 device_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_6->vtblk_dev;
 VAR_9 = VAR_5;

 if (FUNC_1(VAR_8, VAR_2)) {
  VAR_9 += FUNC_0(VAR_7->seg_max, VAR_0 / VAR_1 + 1);
  if (VAR_6->vtblk_flags & VAR_4)
   VAR_9 = FUNC_0(VAR_9, VAR_3);
 } else
  VAR_9 += 1;

 return (VAR_9);
}

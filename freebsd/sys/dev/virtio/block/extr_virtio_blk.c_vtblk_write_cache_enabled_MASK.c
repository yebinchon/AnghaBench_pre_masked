
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtblk_softc {int vtblk_flags; int vtblk_dev; } ;
struct virtio_blk_config {int writeback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct vtblk_softc*,int) ;
 int FUNC_2 (struct vtblk_softc*,char*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_3(struct vtblk_softc *VAR_4,
    struct virtio_blk_config *VAR_5)
{
 int VAR_6;

 if (VAR_4->vtblk_flags & VAR_2) {
  VAR_6 = FUNC_2(VAR_4, "writecache_mode",
      VAR_3);
  if (VAR_6 >= 0 && VAR_6 < VAR_1)
   FUNC_1(VAR_4, VAR_6);
  else
   VAR_6 = VAR_5->writeback;
 } else
  VAR_6 = FUNC_0(VAR_4->vtblk_dev, VAR_0);

 return (VAR_6);
}

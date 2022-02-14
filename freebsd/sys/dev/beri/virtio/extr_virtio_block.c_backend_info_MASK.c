
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct virtio_blk_config {void* blk_size; void* seg_max; scalar_t__ size_max; int capacity; } ;
struct beri_vtblk_softc {int ident; TYPE_1__* mdio; struct virtio_blk_config* cfg; } ;
struct TYPE_2__ {int md_mediasize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct beri_vtblk_softc*,scalar_t__,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_4(struct beri_vtblk_softc *VAR_11)
{
 struct virtio_blk_config *VAR_12;
 uint32_t *VAR_13;
 int VAR_14;
 int VAR_15;


 VAR_14 = FUNC_1(VAR_4);
 FUNC_0(VAR_11, VAR_6, VAR_14);


 VAR_14 = FUNC_1(VAR_1);
 FUNC_0(VAR_11, VAR_8, VAR_14);


 VAR_14 = FUNC_1(VAR_9
     | VAR_2
     | VAR_3);
 FUNC_0(VAR_11, VAR_7, VAR_14);

 VAR_12 = VAR_11->cfg;
 VAR_12->capacity = FUNC_2(VAR_11->mdio->md_mediasize / VAR_0);
 VAR_12->size_max = 0;
 VAR_12->seg_max = FUNC_1(VAR_10);
 VAR_12->blk_size = FUNC_1(VAR_0);

 VAR_13 = (uint32_t *)VAR_12;

 for (VAR_15 = 0; VAR_15 < sizeof(struct virtio_blk_config); VAR_15+=4) {
  FUNC_0(VAR_11, VAR_5 + VAR_15, *VAR_13);
  VAR_13+=1;
 }

 FUNC_3(VAR_11->ident, "Virtio block backend", sizeof(VAR_11->ident));

 return (0);
}
